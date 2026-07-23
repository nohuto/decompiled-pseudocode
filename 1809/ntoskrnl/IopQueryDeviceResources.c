/*
 * XREFs of IopQueryDeviceResources @ 0x1406FC794
 * Callers:
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FCB40 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x1406FCD2C (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FCD90 (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x1406FD07C (PpIrpQueryResourceRequirements.c)
 *     PnpCmResourcesToIoResources @ 0x1407310C4 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x140740D10 (PnpFilterResourceRequirementsList.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407613D4 (PnpMergeFilteredResourceRequirementsList.c)
 */

__int64 __fastcall IopQueryDeviceResources(struct _DEVICE_OBJECT *a1, int a2, ULONG_PTR *a3, _DWORD *a4)
{
  unsigned int **DeviceNode; // r12
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  void *v15; // r14
  void *v16; // rbx
  SIZE_T v17; // rdx
  PVOID PoolWithTag; // rax
  int v19; // r12d
  void *v20; // r12
  int v21; // r14d
  PVOID Data; // [rsp+20h] [rbp-59h]
  ULONG DataSize; // [rsp+28h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-39h] BYREF
  _WORD v25[64]; // [rsp+50h] [rbp-29h] BYREF
  void *Src; // [rsp+E0h] [rbp+67h] BYREF
  int Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int **v28; // [rsp+F0h] [rbp+77h]
  _DWORD *v29; // [rsp+F8h] [rbp+7Fh]

  *a3 = 0LL;
  *a4 = 0;
  memset(v25, 0, 0x48uLL);
  DeviceNode = (unsigned int **)a1->DeviceObjectExtension->DeviceNode;
  v28 = DeviceNode;
  if ( !a2 )
  {
    if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((int)a1, 0, 7, (int)a3, a4);
      if ( (_DWORD)result == -1073741772 )
        return 0LL;
    }
    else
    {
      v25[0] = 2587;
      v9 = IopSynchronousCall(a1, (__int64)v25, -1073741637, 0LL, a3);
      if ( v9 == -1073741637 )
      {
        *a3 = 0LL;
        v9 = 0;
      }
      if ( v9 >= 0 )
        *a4 = PnpDetermineResourceListSize(*a3);
      return (unsigned int)v9;
    }
    return result;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((int)a1, 0, 2, (int)a3, &Handle) != -1073741772 )
  {
    if ( *a3 )
    {
      v13 = (_DWORD *)PnpCmResourcesToIoResources(v11, *a3, 0LL);
      ExFreePoolWithTag((PVOID)*a3, 0);
      if ( !v13 )
      {
        *a3 = 0LL;
        *a4 = 0;
        return 3221225626LL;
      }
      *a3 = (ULONG_PTR)v13;
      *a4 = *v13;
    }
    else
    {
      v13 = 0LL;
    }
LABEL_17:
    if ( (int)IopFilterResourceRequirementsCall(a1, v13, &Src) < 0 )
    {
      *a3 = (ULONG_PTR)v13;
      if ( v13 )
        *a4 = *v13;
      else
        *a4 = 0;
      return 0LL;
    }
    v16 = Src;
    if ( !Src )
    {
      *a4 = 0;
      *a3 = 0LL;
LABEL_30:
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)DeviceNode[6],
                  19,
                  0,
                  131097,
                  1,
                  (__int64)&Src,
                  0LL) >= 0 )
      {
        ValueName.Buffer = L"FilteredConfigVector";
        DataSize = *a4;
        Data = (PVOID)*a3;
        *(_DWORD *)&ValueName.Length = 2752552;
        ZwSetValueKey(Src, &ValueName, 0, 0xAu, Data, DataSize);
        ZwClose(Src);
      }
      return 0LL;
    }
    v17 = *(unsigned int *)Src;
    *a4 = *(_DWORD *)Src;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
    *a3 = (ULONG_PTR)PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v16, (unsigned int)*a4);
      ExFreePoolWithTag(v16, 0);
      goto LABEL_30;
    }
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((int)a1, 1, 1, (int)&Src, &Handle) != -1073741772 )
  {
    v13 = Src;
    goto LABEL_16;
  }
  if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
  {
    result = PnpGetDeviceResourcesFromRegistry((int)a1, 1, 2, (int)&Src, &Handle);
    if ( (_DWORD)result == -1073741772 )
    {
      result = 0LL;
      v13 = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v12 = DeviceNode[55];
    if ( v12 )
    {
      v14 = ExAllocatePoolWithTag(PagedPool, *v12, 0x20207050u);
      v13 = v14;
      if ( !v14 )
        return 3221225495LL;
      memmove(v14, DeviceNode[55], *DeviceNode[55]);
      goto LABEL_16;
    }
    result = PpIrpQueryResourceRequirements(a1, &Src);
    if ( (_DWORD)result == -1073741637 )
    {
      v13 = 0LL;
      result = 0LL;
      goto LABEL_15;
    }
  }
  v13 = Src;
LABEL_15:
  if ( (int)result < 0 )
    return result;
LABEL_16:
  if ( (int)PnpGetDeviceResourcesFromRegistry((int)a1, 0, 4, (int)&Src, &Handle) < 0 )
    goto LABEL_17;
  v15 = Src;
  if ( Src )
  {
    if ( *(_DWORD *)Src && *((_DWORD *)Src + 1) == 5 )
      goto LABEL_17;
  }
  v19 = PnpFilterResourceRequirementsList(v13);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v19 >= 0 )
  {
    DeviceNode = v28;
    if ( (*((_DWORD *)v28 + 99) & 1) != 0 || Handle && v13[7] <= 1u )
    {
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v13 = Src;
    }
    else
    {
      v20 = Src;
      v21 = PnpMergeFilteredResourceRequirementsList(Src);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v21 < 0 )
        return (unsigned int)v21;
      v13 = v29;
      DeviceNode = v28;
    }
    goto LABEL_17;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v19;
}

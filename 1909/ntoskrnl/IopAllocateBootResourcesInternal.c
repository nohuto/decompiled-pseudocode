/*
 * XREFs of IopAllocateBootResourcesInternal @ 0x140752E50
 * Callers:
 *     IopReleaseResources @ 0x140751834 (IopReleaseResources.c)
 *     IopAllocateBootResources @ 0x140752DC0 (IopAllocateBootResources.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     IopFreeReqList @ 0x140752F80 (IopFreeReqList.c)
 *     PnpBuildCmResourceList @ 0x140753050 (PnpBuildCmResourceList.c)
 *     IopResourceRequirementsListToReqList @ 0x140753710 (IopResourceRequirementsListToReqList.c)
 *     IopBootAllocation @ 0x1407544F0 (IopBootAllocation.c)
 *     PnpCmResourcesToIoResources @ 0x140754768 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall IopAllocateBootResourcesInternal(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rsi
  int v10; // edi
  void *v11; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD v15[8]; // [rsp+20h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( a2 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = PnpCmResourcesToIoResources(v6, a3, 1LL);
  v9 = (void *)v8;
  if ( v8 )
  {
    HIDWORD(v15[1]) = a1;
    v15[3] = v8;
    v15[0] = a2;
    v10 = IopResourceRequirementsListToReqList(v15, &v15[4]);
    if ( v10 >= 0 )
    {
      if ( !v15[4] )
        goto LABEL_15;
      v10 = IopBootAllocation();
      if ( v10 >= 0 )
      {
        PipSetDevNodeFlags(v7, 128);
        PnpBuildCmResourceList(v15, 0LL);
        v10 = v15[7];
        if ( SLODWORD(v15[7]) >= 0 )
        {
          if ( *(_QWORD *)(v7 + 544) )
          {
            if ( v15[5] )
            {
              ExFreePoolWithTag((PVOID)v15[5], 0);
              v15[5] = 0LL;
            }
          }
          else
          {
            *(_QWORD *)(v7 + 544) = v15[5];
          }
          v11 = *(void **)(v7 + 552);
          if ( v11 )
          {
            ExFreePoolWithTag(v11, 0);
            *(_QWORD *)(v7 + 552) = 0LL;
          }
          v10 = 0;
          *(_QWORD *)(v7 + 552) = v15[6];
        }
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v15[4] )
    IopFreeReqList((PVOID)v15[4]);
LABEL_15:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 < 0 )
  {
    v13 = *(void **)(v7 + 544);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v7 + 544) = 0LL;
    }
    v14 = *(void **)(v7 + 552);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v7 + 552) = 0LL;
    }
  }
  return (unsigned int)v10;
}

/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C009EB20
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0026218 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C002B724 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00AAE18 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00ADCC0 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BB270 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIRegEventHandler @ 0x1C002B7F4 (AMLIRegEventHandler.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r15
  int v14; // edi
  __int64 v15; // rdi
  __int64 i; // rax
  unsigned int v17; // ecx
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v24; // eax
  __int64 *v25; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v26[10]; // [rsp+40h] [rbp-68h] BYREF

  v25 = 0LL;
  v8 = a3;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v10 = 6;
  }
  else
  {
    v10 = 7;
  }
  if ( a3 > 9 && a3 - 128 > 0x7F )
    return 3221225713LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4F706341u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  PoolWithTag[2] = a4;
  PoolWithTag[3] = a5;
  *((_DWORD *)PoolWithTag + 8) = v10;
  *((_DWORD *)PoolWithTag + 9) = v8;
  *((_BYTE *)PoolWithTag + 40) = 0;
  if ( v10 == 6 )
  {
    v13 = v8;
    v24 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, PoolWithTag);
    if ( v24 )
      v24 = -1073741823;
    v14 = v24;
  }
  else
  {
    v13 = v8;
    v14 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, PoolWithTag);
    if ( v14 )
      v14 = -1073741823;
  }
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v14;
  }
  else
  {
    *a6 = v12;
    v15 = 0LL;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v17 = *(_DWORD *)(i + 36);
      v15 = i;
      if ( v17 >= (unsigned int)v8 && (v17 != (_DWORD)v8 || *(_DWORD *)(i + 32) == v10) )
        break;
    }
    v18 = *(__int64 **)(i + 8);
    v19 = *v18;
    if ( *(__int64 **)(*v18 + 8) != v18 )
      __fastfail(3u);
    *v12 = v19;
    v12[1] = v18;
    *(_QWORD *)(v19 + 8) = v12;
    *v18 = (__int64)v12;
    if ( v15 && *(_DWORD *)(v15 + 36) == (_DWORD)v8 )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
    }
    else
    {
      if ( (unsigned int)v8 >= 0x1F )
        v20 = 0x80000000;
      else
        v20 = 1 << v8;
      AcpiRegisteredOpRegionMask |= v20;
      ExReleaseFastMutex(&AcpiOpRegionLock);
      v22 = *((unsigned int *)v12 + 9);
      if ( (unsigned int)(v22 - 8) <= 1 )
      {
        LOBYTE(v21) = 1;
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v22, v21);
      }
      else if ( a1 )
      {
        if ( (int)AMLIGetNameSpaceObject("_REG", a1, (unsigned __int64 *)&v25, 1u) >= 0 )
        {
          memset(v26, 0, sizeof(v26));
          WORD1(v26[0]) = 1;
          v26[2] = v13;
          WORD1(v26[5]) = 1;
          v26[7] = 1LL;
          AMLIAsyncEvalObject(v25, 0LL, 2u, v26, 0LL, 0LL);
          AMLIDereferenceHandleEx((__int64)v25);
        }
      }
    }
    return 0LL;
  }
}

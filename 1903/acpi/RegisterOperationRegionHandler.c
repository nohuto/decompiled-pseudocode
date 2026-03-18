/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C0090070
 * Callers:
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C00058B0 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00241C8 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00AE4E0 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B14C0 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BB424 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIRegEventHandler @ 0x1C0005980 (AMLIRegEventHandler.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0005C90 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int **a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // rbx
  __int64 v13; // r15
  int v14; // edi
  __int64 v15; // rdi
  __int64 i; // rax
  unsigned int **v17; // rcx
  unsigned int *v18; // rax
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // edx
  int v23; // eax
  __int64 *v24; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[10]; // [rsp+40h] [rbp-68h] BYREF

  v24 = 0LL;
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
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4F706341u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
  *(_QWORD *)PoolWithTag = PoolWithTag;
  *((_QWORD *)PoolWithTag + 2) = a4;
  *((_QWORD *)PoolWithTag + 3) = a5;
  PoolWithTag[8] = v10;
  PoolWithTag[9] = v8;
  *((_BYTE *)PoolWithTag + 40) = 0;
  if ( v10 == 6 )
  {
    v13 = v8;
    v23 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, PoolWithTag);
    if ( v23 )
      v23 = -1073741823;
    v14 = v23;
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
      v15 = i;
      if ( *(_DWORD *)(i + 36) >= (unsigned int)v8 && (*(_DWORD *)(i + 36) != (_DWORD)v8 || *(_DWORD *)(i + 32) == v10) )
        break;
    }
    v17 = *(unsigned int ***)(i + 8);
    v18 = *v17;
    if ( *((unsigned int ***)*v17 + 1) != v17 )
      __fastfail(3u);
    *(_QWORD *)v12 = v18;
    *((_QWORD *)v12 + 1) = v17;
    *((_QWORD *)v18 + 1) = v12;
    *v17 = v12;
    if ( v15 && *(_DWORD *)(v15 + 36) == (_DWORD)v8 )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
    }
    else
    {
      if ( (unsigned int)v8 >= 0x1F )
        v19 = 0x80000000;
      else
        v19 = 1 << v8;
      AcpiRegisteredOpRegionMask |= v19;
      ExReleaseFastMutex(&AcpiOpRegionLock);
      v21 = v12[9];
      if ( v21 - 8 <= 1 )
      {
        LOBYTE(v20) = 1;
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v21, v20);
      }
      else if ( a1 )
      {
        if ( (int)AMLIGetNameSpaceObject("_REG", a1, (unsigned __int64 *)&v24, 1) >= 0 )
        {
          memset(v25, 0, sizeof(v25));
          WORD1(v25[0]) = 1;
          v25[2] = v13;
          WORD1(v25[5]) = 1;
          v25[7] = 1LL;
          AMLIAsyncEvalObject(v24, 0LL, 2u, v25, 0LL, 0LL);
          AMLIDereferenceHandleEx((volatile signed __int32 *)v24);
        }
      }
    }
    return 0LL;
  }
}

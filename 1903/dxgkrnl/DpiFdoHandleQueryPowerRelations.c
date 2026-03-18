/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1C02A0560
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0156DE0 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008938 (DpiDisableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C00231F0 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // r15
  unsigned int *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r15
  __int64 v20; // rax
  int v21; // [rsp+70h] [rbp+8h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v2 = *(unsigned int **)(a2 + 56);
  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v21 = 4;
  if ( !*(_BYTE *)(a1 + 1159) )
  {
    v4 = -1073741637;
    goto LABEL_46;
  }
  if ( v2 )
    v5 = *v2;
  AcquireMiniportListMutex();
  v7 = qword_1C00A2778;
  if ( *(_QWORD *)v7 == v7 )
  {
LABEL_41:
    ReleaseMiniportListMutex();
    return v4;
  }
  v6 = v5;
  while ( 1 )
  {
    if ( *(_BYTE *)(v7 + 133) || *(_BYTE *)(v7 + 134) )
      goto LABEL_40;
    KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
    v8 = *(__int64 **)(v7 + 56);
    if ( (__int64 *)*v8 != v8 )
      break;
LABEL_39:
    KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
LABEL_40:
    v7 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 == qword_1C00A2778 )
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v8 + 480) && *((_DWORD *)v8 + 4) == 1953656900 )
    {
      if ( *((_DWORD *)v8 + 5) == 2 )
      {
        v9 = v8;
        goto LABEL_17;
      }
      if ( *((_DWORD *)v8 + 5) == 3 )
      {
        v10 = v8[341];
        if ( v10 )
          break;
      }
    }
LABEL_38:
    v8 = (__int64 *)*v8;
    if ( *v8 == *(_QWORD *)(v7 + 56) )
      goto LABEL_39;
  }
  v9 = *(__int64 **)(v10 + 64);
LABEL_17:
  KeEnterCriticalRegion();
  if ( *((_BYTE *)v9 + 484) )
    DpiDisableD3Requests(v9[3]);
  ExAcquireResourceSharedLite((PERESOURCE)v9[21], 1u);
  v11 = *((_DWORD *)v9 + 59);
  if ( v11 != 2 && (*((_DWORD *)v9 + 60) != 2 || ((v11 - 3) & 0xFFFFFFFC) != 0 || v11 == 4)
    || (v9[488] & 2) == 0
    || (*((_BYTE *)v9 + 3905) & 0x20) != 0 )
  {
    goto LABEL_35;
  }
  if ( v5 >= v6 + 1 )
    goto LABEL_34;
  v12 = v21 + v5;
  v23 = v12;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v12 + 15, 0x74727044u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v2 && v6 )
      memmove(PoolWithTag, v2, 8LL * (v6 - 1) + 16);
    else
      *PoolWithTag = 0;
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v2 = v18;
    *(_QWORD *)(a2 + 56) = v18;
    v5 = v23;
    v21 *= 2;
LABEL_34:
    ObfReferenceObject((PVOID)v8[19]);
    ++v6;
    *(_QWORD *)&v2[2 * (*v2)++ + 2] = v8[19];
LABEL_35:
    if ( *((_BYTE *)v9 + 484) )
      DpiEnableD3Requests(v9[3]);
    ExReleaseResourceLite((PERESOURCE)v9[21]);
    KeLeaveCriticalRegion();
    goto LABEL_38;
  }
  v4 = -1073741801;
  v20 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
  *(_QWORD *)(v20 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v20);
  if ( *((_BYTE *)v9 + 484) )
    DpiEnableD3Requests(v9[3]);
  ExReleaseResourceLite((PERESOURCE)v9[21]);
  KeLeaveCriticalRegion();
  KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
  ReleaseMiniportListMutex();
  v3 = a2;
LABEL_46:
  if ( v2 )
  {
    while ( v6 )
      ObfDereferenceObject(*(PVOID *)&v2[2 * --v6 + 2]);
    ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
  return v4;
}

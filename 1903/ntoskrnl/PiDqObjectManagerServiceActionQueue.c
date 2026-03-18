/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1407136D0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetActivityIdThread @ 0x140001C20 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140001C40 (IoClearActivityIdThread.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     McTemplateK0p @ 0x14029EDA0 (McTemplateK0p.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDqQueryRelease @ 0x1405B5F90 (PiDqQueryRelease.c)
 *     PnpIsNullGuid @ 0x1405B6094 (PnpIsNullGuid.c)
 *     PiDqQueryUnlock @ 0x1405B66FC (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x1405B6724 (PiDqQueryLock.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BB680 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryCompletePendedIrp @ 0x140713E9C (PiDqQueryCompletePendedIrp.c)
 *     PiDqAllocMem @ 0x140865204 (PiDqAllocMem.c)
 *     PiDqFreeMem @ 0x1408656C0 (PiDqFreeMem.c)
 *     PiDqObjectManagerLockData @ 0x1408656DC (PiDqObjectManagerLockData.c)
 *     PiDqObjectManagerUnlockData @ 0x140865778 (PiDqObjectManagerUnlockData.c)
 *     PiDqQueryMakeInconsistent @ 0x1408659E8 (PiDqQueryMakeInconsistent.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  PERESOURCE v1; // rbx
  PERESOURCE v2; // rdi
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  char v8; // cl
  char v9; // bl
  __int64 v10; // rax
  volatile signed __int32 *Address; // rcx
  PVOID v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rdi
  PVOID v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  PVOID *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  int OwnerTable_high; // eax
  _QWORD *result; // rax
  PVOID *i; // rbx
  char v26; // [rsp+20h] [rbp-60h]
  char v27; // [rsp+21h] [rbp-5Fh]
  PVOID P[2]; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+38h] [rbp-48h]
  PVOID v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  PERESOURCE v32; // [rsp+58h] [rbp-28h]
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF

  v32 = Resource;
  v30 = 0LL;
  v1 = Resource + 2;
  P[0] = 0LL;
  v2 = Resource;
  P[1] = 0LL;
  v3 = 1;
  v33 = 0uLL;
  v27 = 1;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    LODWORD(v6) = 0;
    v31 = 0LL;
    v29 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    PiDqObjectManagerLockData(v2);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v1->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v1->SystemResourcesList.Blink = &v1->SystemResourcesList;
      v1->SystemResourcesList.Flink = &v1->SystemResourcesList;
    }
    v8 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v8 = v3;
    v3 = v8;
    v9 = v8;
    if ( v8 )
    {
      LODWORD(v6) = v2[2].OwnerTable;
      v29 = v6;
      if ( (_DWORD)v6 )
      {
        v10 = PiDqAllocMem(8LL * (unsigned int)v6);
        v31 = v10;
        v5 = (PVOID *)v10;
        if ( v10 )
        {
          v7 = 0LL;
          Address = (volatile signed __int32 *)v2[1].Address;
          if ( Address == (volatile signed __int32 *)&v2[1].Address )
            goto LABEL_13;
          while ( (unsigned int)v7 < (unsigned int)v6 )
          {
            *(_QWORD *)(v10 + 8 * v7) = Address;
            v7 = (unsigned int)(v7 + 1);
            _InterlockedIncrement(Address + 53);
            Address = *(volatile signed __int32 **)Address;
            if ( Address == (volatile signed __int32 *)&v2[1].Address )
            {
              v3 = v9;
              goto LABEL_13;
            }
          }
        }
        v3 = 0;
      }
    }
LABEL_13:
    if ( !v3 )
    {
      for ( i = (PVOID *)v2[1].Address; i != &v2[1].Address; i = (PVOID *)*i )
      {
        PiDqQueryLock((__int64)i);
        PiDqQueryMakeInconsistent(i);
        PiDqQueryCompletePendedIrp(i);
        PiDqQueryUnlock((__int64)i);
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
    }
    PiDqObjectManagerUnlockData(v2, v7);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v3 && (_DWORD)v6 )
      {
        v14 = (__int64 *)v5;
        v15 = v30;
        v6 = (unsigned int)v6;
        do
        {
          v16 = *v14;
          if ( *(_QWORD *)(*v14 + 224) <= *((_QWORD *)v12 + 3) )
          {
            v26 = 0;
            if ( !PnpIsNullGuid(*(void **)(v16 + 24)) )
            {
              v33 = *(_OWORD *)*(_QWORD *)(v16 + 24);
              v15 = IoSetActivityIdThread(&v33);
              v26 = 1;
            }
            if ( byte_14042BDBA < 0 )
              McTemplateK0p(v17, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v16 + 24), v16);
            PiDqQueryLock(v16);
            v18 = *(_DWORD *)(v16 + 216);
            PiDqQueryUnlock(v16);
            if ( (v18 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v16, *((_QWORD *)v12 + 2));
              PiDqQueryLock(v16);
              if ( (*(_DWORD *)(v16 + 216) & 1) != 0 || *(_QWORD *)(v16 + 192) != v16 + 192 )
                PiDqQueryCompletePendedIrp(v16);
              PiDqQueryUnlock(v16);
            }
            if ( byte_14042BDBA < 0 )
              McTemplateK0p(v19, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v16 + 24), v16);
            if ( v26 )
              IoClearActivityIdThread(v15);
          }
          ++v14;
          --v6;
        }
        while ( v6 );
        v2 = v32;
        LODWORD(v6) = v29;
        v30 = v15;
        v5 = (PVOID *)v31;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    if ( v5 )
    {
      if ( (_DWORD)v6 )
      {
        v20 = v5;
        v21 = (unsigned int)v6;
        do
        {
          PiDqQueryRelease(*v20++);
          --v21;
        }
        while ( v21 );
      }
      PiDqFreeMem(v5);
    }
    PiDqObjectManagerLockData(v2);
    v1 = v2 + 2;
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v27 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    PiDqObjectManagerUnlockData(v2, v22);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  while ( v27 );
  return result;
}

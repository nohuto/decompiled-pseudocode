/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1406F8780
 * Callers:
 *     <none>
 * Callees:
 *     IoSetActivityIdThread @ 0x140006780 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x1400067A0 (IoClearActivityIdThread.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     McTemplateK0p @ 0x140288E20 (McTemplateK0p.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDqQueryRelease @ 0x1405910AC (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     PiPnpRtlObjectEventRelease @ 0x140596DE0 (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryCompletePendedIrp @ 0x1406DCC30 (PiDqQueryCompletePendedIrp.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rbx
  PERESOURCE v2; // rdi
  PERESOURCE v3; // r13
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int OwnerTable; // r12d
  char v7; // cl
  char v8; // bl
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  volatile signed __int32 *Address; // rcx
  PVOID v12; // r15
  __int64 v13; // rax
  __int64 *v14; // r13
  __int64 v15; // rdi
  PVOID v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rax
  PVOID v23; // r15
  PVOID *v24; // rbx
  __int64 v25; // rsi
  int OwnerTable_high; // eax
  _QWORD *result; // rax
  __int64 i; // rsi
  struct _KTHREAD *v29; // rax
  char v30; // [rsp+20h] [rbp-50h]
  char v31; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-38h]
  PVOID v34; // [rsp+40h] [rbp-30h]
  PVOID v35; // [rsp+48h] [rbp-28h]
  PERESOURCE v36; // [rsp+50h] [rbp-20h]
  __int128 v37; // [rsp+58h] [rbp-18h] BYREF

  v35 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v2 = Resource;
  v36 = Resource;
  v31 = 1;
  v3 = Resource + 2;
  v4 = 1;
  do
  {
    CurrentThread = KeGetCurrentThread();
    OwnerTable = 0;
    v34 = 0LL;
    v33 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v1);
    if ( (PERESOURCE)v3->SystemResourcesList.Flink == v3 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v3->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v3->SystemResourcesList.Blink = &v3->SystemResourcesList;
      v3->SystemResourcesList.Flink = &v3->SystemResourcesList;
    }
    v7 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v7 = v4;
    v4 = v7;
    v8 = v7;
    if ( v7 )
    {
      OwnerTable = (unsigned int)v2[2].OwnerTable;
      v33 = OwnerTable;
      if ( OwnerTable )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
        v34 = PoolWithTag;
        if ( PoolWithTag )
        {
          v10 = 0LL;
          Address = (volatile signed __int32 *)v2[1].Address;
          if ( Address == (volatile signed __int32 *)&v2[1].Address )
            goto LABEL_13;
          while ( (unsigned int)v10 < OwnerTable )
          {
            *((_QWORD *)PoolWithTag + v10) = Address;
            v10 = (unsigned int)(v10 + 1);
            _InterlockedIncrement(Address + 53);
            Address = *(volatile signed __int32 **)Address;
            if ( Address == (volatile signed __int32 *)&v2[1].Address )
            {
              v4 = v8;
              goto LABEL_13;
            }
          }
        }
        v4 = 0;
      }
    }
LABEL_13:
    if ( !v4 )
    {
      for ( i = (__int64)v2[1].Address; (PVOID *)i != &v2[1].Address; i = *(_QWORD *)i )
      {
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(i + 64, 0LL);
        *(_DWORD *)(i + 216) |= 1u;
        PiDqQueryFreeActiveData(i);
        PiDqQueryCompletePendedIrp(i);
        ExReleasePushLockEx(i + 64, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v4 && OwnerTable )
      {
        v14 = (__int64 *)v34;
        v15 = OwnerTable;
        v16 = v35;
        do
        {
          v17 = *v14;
          if ( *(_QWORD *)(*v14 + 224) <= *((_QWORD *)v12 + 3) )
          {
            v30 = 0;
            if ( !PnpIsNullGuid(*(void **)(v17 + 24)) )
            {
              v37 = *(_OWORD *)*(_QWORD *)(v17 + 24);
              v16 = IoSetActivityIdThread(&v37);
              v30 = 1;
            }
            if ( byte_140406846 < 0 )
              McTemplateK0p(v18, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v17 + 24), v17);
            v19 = KeGetCurrentThread();
            --v19->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
            v20 = *(_DWORD *)(v17 + 216);
            ExReleasePushLockEx(v17 + 64, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( (v20 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v17, *((_QWORD *)v12 + 2));
              v22 = KeGetCurrentThread();
              --v22->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(v17 + 64, 0LL);
              if ( (*(_DWORD *)(v17 + 216) & 1) != 0 || *(_QWORD *)(v17 + 192) != v17 + 192 )
                PiDqQueryCompletePendedIrp(v17);
              ExReleasePushLockEx(v17 + 64, 0LL);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            }
            if ( byte_140406846 < 0 )
              McTemplateK0p(v21, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v17 + 24), v17);
            if ( v30 )
              IoClearActivityIdThread(v16);
          }
          ++v14;
          --v15;
        }
        while ( v15 );
        v2 = v36;
        v35 = v16;
        OwnerTable = v33;
        v3 = v36 + 2;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    v23 = v34;
    if ( v34 )
    {
      if ( OwnerTable )
      {
        v24 = (PVOID *)v34;
        v25 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v24++);
          --v25;
        }
        while ( v25 );
      }
      ExFreePoolWithTag(v23, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    if ( (PERESOURCE)v3->SystemResourcesList.Flink == v3 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v31 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  while ( v31 );
  return result;
}

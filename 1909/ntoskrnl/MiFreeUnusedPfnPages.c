/*
 * XREFs of MiFreeUnusedPfnPages @ 0x14019D250
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v2; // r14
  struct _KTHREAD *CurrentThread; // r13
  unsigned int SessionId; // r15d
  ULONG_PTR v5; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned __int8 v7; // r14
  unsigned int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  struct _KTHREAD *v15; // rbx
  unsigned int v16; // edx
  unsigned __int8 v17; // r13
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v23; // r14
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // [rsp+38h] [rbp-31h]
  _QWORD v29[2]; // [rsp+40h] [rbp-29h] BYREF
  int v30; // [rsp+50h] [rbp-19h]
  int v31; // [rsp+54h] [rbp-15h]
  _BYTE v32[104]; // [rsp+58h] [rbp-11h] BYREF
  int v33; // [rsp+D0h] [rbp+67h] BYREF
  int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  int v35; // [rsp+E0h] [rbp+77h] BYREF
  int v36; // [rsp+E8h] [rbp+7Fh]

  memset(v32, 0, 0x20uLL);
  v31 = 0;
  v2 = &MiSystemPartition;
  v30 = 0;
  v29[0] = a1;
  v29[1] = v32;
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
    v2 = a1;
  v28 = (__int64)CurrentThread;
  SessionId = -1;
  v5 = (ULONG_PTR)(v2 + 23);
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 23), 0LL);
    if ( !a1 && *((_BYTE *)v2 + 196) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2 + 23);
      v34 = 0;
      v6 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v2 + 23)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      --v6->SpecialApcDisable;
      v23 = ++v6->AbAllocationRegionCount;
      v24 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v9 = !_BitScanReverse((unsigned int *)&v25, v24);
        if ( v9 )
          break;
        v26 = (__int64)&v6->LockEntries[v25];
        v24 &= ~(1 << v25);
        if ( (*(_BYTE *)(v26 + 26) & 1) != 0
          && (*(_DWORD *)(v26 + 32) & 1) == 0
          && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v26 + 40) == SessionId )
        {
          *(_BYTE *)(v26 + 26) &= ~1u;
          if ( *(_QWORD *)(v26 + 32) )
          {
            if ( v26 )
            {
              *(_BYTE *)(v26 + 32) |= 2u;
              if ( *(__int64 *)(v26 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
              v34 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
              *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v26 + 25) &= ~1u;
              *(_QWORD *)(v26 + 32) = 0LL;
              v27 = (v26 - (__int64)v6 - 800) / 96;
              if ( v23 == 1 )
                v6->AbEntrySummary |= 1 << v27;
              else
                _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v27);
              goto LABEL_74;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v6, v5, SessionId, 0LL);
LABEL_74:
      --v6->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, &v34);
      v9 = v6->SpecialApcDisable++ == -1;
      if ( !v9 )
        return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_27:
      if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
        KiCheckForKernelApcDelivery(v13);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    KeGenericCallDpc((__int64)MiFreeUnusedPfnPagesDpc, (__int64)v29);
    if ( v30 != 259 )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2 + 23);
    v33 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v2 + 23)) == 1 )
      v16 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      v16 = -1;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v19, v18);
      v36 = v19;
      if ( v9 )
        break;
      v20 = (__int64)&v15->LockEntries[v19];
      v18 &= ~(1 << v19);
      if ( (*(_BYTE *)(v20 + 26) & 1) != 0
        && (*(_DWORD *)(v20 + 32) & 1) == 0
        && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v20 + 40) == v16 )
      {
        *(_BYTE *)(v20 + 26) &= ~1u;
        if ( *(_QWORD *)(v20 + 32) )
        {
          if ( v20 )
          {
            *(_BYTE *)(v20 + 32) |= 2u;
            if ( *(__int64 *)(v20 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
            v33 = 0;
            v33 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
            *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v20 + 25) &= ~1u;
            *(_QWORD *)(v20 + 32) = 0LL;
            v21 = (v20 - (__int64)v15 - 800) / 96;
            if ( v17 == 1 )
              v15->AbEntrySummary |= 1 << v21;
            else
              _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v21);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)(v2 + 23), v16, 0LL);
LABEL_49:
    --v15->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v15, (__int64)(v2 + 23), &v33);
    v9 = v15->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery(v22);
    CurrentThread = (struct _KTHREAD *)v28;
    result = KiLeaveGuardedRegionUnsafe(v28);
    if ( !v29[0] )
      return result;
    KeWaitForGate((__int64)&v32[8], 18);
  }
  v2[10] = 0LL;
  *((_BYTE *)v2 + 196) = 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2 + 23);
  v35 = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v2 + 23)) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  --v6->SpecialApcDisable;
  v7 = ++v6->AbAllocationRegionCount;
  v8 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    if ( v9 )
      break;
    v11 = (__int64)&v6->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( v11 )
        {
          *(_BYTE *)(v11 + 32) |= 2u;
          if ( *(__int64 *)(v11 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
          v35 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
          *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v11 + 25) &= ~1u;
          *(_QWORD *)(v11 + 32) = 0LL;
          v12 = (v11 - (__int64)v6 - 800) / 96;
          if ( v7 == 1 )
            v6->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v12);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, v5, SessionId, 0LL);
LABEL_24:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, v5, &v35);
  v9 = v6->SpecialApcDisable++ == -1;
  if ( v9 )
    goto LABEL_27;
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

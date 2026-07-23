/*
 * XREFs of KiSwitchQueue @ 0x140112478
 * Callers:
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KiSwapToUmsThreadContinue @ 0x14029DE10 (KiSwapToUmsThreadContinue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 */

__int64 __fastcall KiSwitchQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 **v7; // rcx

  v3 = (__int64 *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v3);
  *(_QWORD *)(a1 + 232) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3);
  result = a2 + 48;
  v7 = *(__int64 ***)(a2 + 56);
  if ( *v7 != (__int64 *)(a2 + 48) )
    __fastfail(3u);
  *v3 = result;
  v3[1] = (__int64)v7;
  *v7 = v3;
  *(_QWORD *)(a2 + 56) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}

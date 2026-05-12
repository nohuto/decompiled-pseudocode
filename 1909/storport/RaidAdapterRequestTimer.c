/*
 * XREFs of RaidAdapterRequestTimer @ 0x1C0035E04
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AF0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterRequestTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTIMER *v4; // rcx

  v4 = (struct _KTIMER *)(a1 + 1664);
  if ( !a3 )
    return KeCancelTimer(v4);
  *(_QWORD *)(a1 + 1920) = a2;
  return KeSetCoalescableTimer(v4, (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1600));
}

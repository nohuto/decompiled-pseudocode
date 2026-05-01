/*
 * XREFs of CrmActivityDereference @ 0x180032030
 * Callers:
 *     CrmSrvActivityAllocate @ 0x1800318D8 (CrmSrvActivityAllocate.c)
 *     CrmSrvActivityStart @ 0x180031A58 (CrmSrvActivityStart.c)
 *     CrmSrvActivityStop @ 0x180031D50 (CrmSrvActivityStop.c)
 *     CrmSrvActivityFree @ 0x180031EE0 (CrmSrvActivityFree.c)
 *     CrmRegistrationCreateActivity @ 0x1800326EC (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18003ABCC (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18003ECD8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003EE0C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationRemoveActivity @ 0x18007E1F4 (CrmRegistrationRemoveActivity.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180031440 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup((__int64)a1);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  return v6;
}

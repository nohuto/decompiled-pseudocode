/*
 * XREFs of PnprQuiesceWorker @ 0x1405AAA30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnprCompleteWake @ 0x1402A02E0 (PnprCompleteWake.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnprQuiesceDevices @ 0x1405AA020 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1405AAB60 (PnprWakeDevices.c)
 *     PnprLockPagesForReplace @ 0x14086FDF8 (PnprLockPagesForReplace.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  struct _KEVENT *v3; // rcx
  int v4; // ebx
  PVOID Object[2]; // [rsp+40h] [rbp-68h] BYREF
  char v6[64]; // [rsp+50h] [rbp-58h] BYREF

  memset(v6, 0, 0x3CuLL);
  Object[0] = (PVOID)(PnprContext + 20760);
  Object[1] = (PVOID)(PnprContext + 20808);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = (struct _KEVENT *)PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 20856) = v2;
    KeSetEvent(v3 + 866, 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 20808), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 20832), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}

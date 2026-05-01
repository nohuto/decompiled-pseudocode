/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x18003F044
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180040440 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x180070CE0 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((char *)qword_18009BC30, a1 + 96, 0);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((char *)qword_18009BC38, a1 + 120, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}

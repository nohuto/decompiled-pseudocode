/*
 * XREFs of ?ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0290F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(DXG_GUEST_REMOTEOBJECTCHANNEL *this, void *a2)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v2 + 24) = 222LL;
  WdLogEvent5_WdAssertion(v2);
  return 0LL;
}

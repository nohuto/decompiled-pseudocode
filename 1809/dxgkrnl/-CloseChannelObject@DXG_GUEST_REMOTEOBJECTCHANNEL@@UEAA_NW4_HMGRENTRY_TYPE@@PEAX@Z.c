/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0259CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::CloseChannelObject(__int64 a1)
{
  __int64 v1; // rax

  v1 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v1 + 24) = 248LL;
  WdLogEvent5_WdAssertion(v1);
  return 0;
}

/*
 * XREFs of DrvOcclusionStateChangeNotify @ 0x1C013951C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvOcclusionStateChangeNotify()
{
  __int64 result; // rax
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v2[1] = retaddr;
  v2[0] = 1LL;
  result = ((__int64 (__fastcall *)(_QWORD *))gDxgkInterface[52])(v2);
  if ( (int)result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}

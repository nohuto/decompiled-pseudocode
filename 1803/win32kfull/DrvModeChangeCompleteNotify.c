/*
 * XREFs of DrvModeChangeCompleteNotify @ 0x1C0138DA0
 * Callers:
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C0138D0C (GreDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvModeChangeCompleteNotify()
{
  __int64 result; // rax
  __int64 v1; // rax
  int v2; // [rsp+20h] [rbp-18h] BYREF
  void *v3; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = retaddr;
  v2 = 7;
  result = ((__int64 (__fastcall *)(int *))gDxgkInterface[129])(&v2);
  if ( (int)result < 0 )
  {
    v1 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v1);
  }
  return result;
}

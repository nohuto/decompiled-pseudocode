/*
 * XREFs of PopPluginAbandonDevice @ 0x1402DA788
 * Callers:
 *     PoFxAbandonDevice @ 0x1406EE2A8 (PoFxAbandonDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

char __fastcall PopPluginAbandonDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 (__fastcall *v2)(__int64, __int64 *); // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 96);
  v5 = a2;
  if ( !v2(2LL, &v5) )
    PopFxBugCheck(0x605uLL, 2uLL, BugCheckParameter3, 0LL);
  return v6;
}

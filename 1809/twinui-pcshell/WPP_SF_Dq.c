/*
 * XREFs of WPP_SF_Dq @ 0x1801257A0
 * Callers:
 *     ?SetBehaviorFlags@CTaskWindow@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z @ 0x180125170 (-SetBehaviorFlags@CTaskWindow@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Dq(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_c7112eb849c034c9bca4c47c1b6552d2_Traceguids, 0xCu, &v5, 4LL, va, 8LL, 0LL);
}

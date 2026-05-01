/*
 * XREFs of WPP_SF_qD @ 0x18014EF70
 * Callers:
 *     ?GetBehaviorFlags@CTaskWindow@@UEAA?AW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0003@@XZ @ 0x18014E1F0 (-GetBehaviorFlags@CTaskWindow@@UEAA-AW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0003@@XZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qD(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, &WPP_ec79cc65924f314eb7ae55323d0afa97_Traceguids, 0xDu, va, 8LL, va1, 4LL, 0LL);
}

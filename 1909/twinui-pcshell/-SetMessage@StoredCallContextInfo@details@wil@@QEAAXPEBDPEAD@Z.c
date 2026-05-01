/*
 * XREFs of ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x180333C58
 * Callers:
 *     ?SetMessage@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXPEBDZZ @ 0x180333C00 (-SetMessage@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@.c)
 * Callees:
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800D3E70 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1801278D4 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18016FCD0 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::StoredCallContextInfo::SetMessage(LPVOID *this, char *a2, va_list a3)
{
  unsigned __int16 v4[2048]; // [rsp+20h] [rbp-1018h] BYREF

  wil::details::PrintLoggingMessage((wil::details *)v4, (unsigned __int16 *)a2, (__int64)a2, a3);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(this);
  wil::details::StoredCallContextInfo::AssignMessage((wil::details::StoredCallContextInfo *)this, v4);
}

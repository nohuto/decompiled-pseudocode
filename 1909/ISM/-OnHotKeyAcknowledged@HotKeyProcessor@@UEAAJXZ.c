/*
 * XREFs of ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x180146A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

__int64 __fastcall HotKeyProcessor::OnHotKeyAcknowledged(HotKeyProcessor *this)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801DE450 > 5 )
    TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1F6B, 0LL, 0LL, 2u, &pData);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17));
  return 0LL;
}

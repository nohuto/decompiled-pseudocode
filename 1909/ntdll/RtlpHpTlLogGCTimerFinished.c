/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x1801073CC
 * Callers:
 *     RtlpHpGCCallback @ 0x180067B20 (RtlpHpGCCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_18015F5C8 > 5 )
    return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BFAE, a3, a4, 2u, &pData);
  return result;
}

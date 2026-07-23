/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x180109ECC
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x18001D824 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180020014 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_18015F698 > 5 )
    return TlgWrite((TraceLoggingHProvider)&dword_18015F698, &unk_18012C7B4, a3, a4, 2u, &pData);
  return result;
}

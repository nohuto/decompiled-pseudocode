/*
 * XREFs of RtlpHpTlLogMemStats @ 0x180107428
 * Callers:
 *     RtlpHpSegFreeRangeRemove @ 0x180036634 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180036698 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180036F20 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004E58C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogMemStats(__int64 a1, __int64 *a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  __int64 *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  __int64 *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_18015F5C8 > 5 )
  {
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    v11 = &v5;
    v13 = &v6;
    v15 = &v7;
    v17 = &v8;
    v19 = &v9;
    v5 = a1;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18015F5C8, &unk_18012BF3E, a3, a4, 7u, &pData);
  }
  return result;
}

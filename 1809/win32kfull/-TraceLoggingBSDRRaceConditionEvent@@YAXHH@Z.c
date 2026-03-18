/*
 * XREFs of ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C01B978C
 * Callers:
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingBSDRRaceConditionEvent(int a1, int a2)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v3; // [rsp+50h] [rbp-38h]
  int v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+5Ch] [rbp-2Ch]
  int *v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+6Ch] [rbp-1Ch]
  int v9; // [rsp+90h] [rbp+8h] BYREF
  int v10; // [rsp+98h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v5 = 0;
      v8 = 0;
      v3 = &v9;
      v6 = &v10;
      v4 = 4;
      v7 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D4367, 0LL, 0LL, 4u, &pData);
    }
  }
}

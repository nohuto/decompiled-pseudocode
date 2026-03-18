/*
 * XREFs of ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C01986F8
 * Callers:
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingBSDRRaceConditionEvent(int a1, int a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v11;
      v8 = &v12;
      v6 = 4;
      v9 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2C6D, v2, v3, 4u, &pData);
    }
  }
}

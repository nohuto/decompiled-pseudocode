/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0136210
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent()
{
  char v0; // r9
  char v1; // r10
  char v2; // [rsp+30h] [rbp-68h] BYREF
  char v3; // [rsp+31h] [rbp-67h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  char *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v6 = 1;
      v3 = v0;
      v9 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3CE6, 0LL, 0LL, 4u, &pData);
    }
  }
}

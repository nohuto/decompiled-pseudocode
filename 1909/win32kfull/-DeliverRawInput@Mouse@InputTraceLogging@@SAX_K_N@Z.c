/*
 * XREFs of ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C000A540
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0085D10 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::DeliverRawInput()
{
  unsigned __int8 v0; // r9
  __int64 v1; // r10
  UINT32 cData; // r11d
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  UINT32 v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x40uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v3 = v0;
      v9 = &v3;
      v4 = v1;
      v7 = 8;
      v10 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6453, 0LL, 0LL, cData, &pData);
    }
  }
}

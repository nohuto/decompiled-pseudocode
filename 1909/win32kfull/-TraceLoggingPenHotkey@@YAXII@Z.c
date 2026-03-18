/*
 * XREFs of ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C01CE9F0
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPenHotkey(int a1, int a2)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v4; // [rsp+60h] [rbp+17h]
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int *v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  int *v8; // [rsp+80h] [rbp+37h]
  __int64 v9; // [rsp+88h] [rbp+3Fh]
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v11 = a2;
  v10 = a1;
  if ( (a1 & 0xA) == 0xA && (unsigned int)(a2 - 130) <= 1 && hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = 2048LL;
      v4 = &v2;
      v6 = &v10;
      v8 = &v11;
      v5 = 8LL;
      v7 = 4LL;
      v9 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E4D5C, 0LL, 0LL, 5u, &pData);
    }
  }
}

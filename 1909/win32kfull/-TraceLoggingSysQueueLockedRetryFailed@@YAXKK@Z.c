/*
 * XREFs of ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01CF4D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSysQueueLockedRetryFailed()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v4 = 0x1000000LL;
      v6 = &v4;
      v8 = &v2;
      v10 = &v3;
      v7 = 8LL;
      v2 = v1;
      v9 = 4LL;
      v3 = v0;
      v11 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E51A6, 0LL, 0LL, 5u, &pData);
    }
  }
}

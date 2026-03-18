/*
 * XREFs of ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C019A07C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSysQueueLockedRetryFailed()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v9 = &v4;
      v3 = v2;
      v7 = 4;
      v4 = (int)v1;
      v10 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2185, v0, v1, 4u, &pData);
    }
  }
}

/*
 * XREFs of ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x1C0041BE4
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C003FC60 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010CF00 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::SetAppClip(const struct tagRECT *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+50h] [rbp+7h]
  __int64 v5; // [rsp+58h] [rbp+Fh]
  __int64 v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  __int64 v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
    {
      v4 = v1;
      v6 = v1 + 4;
      v8 = v1 + 8;
      v10 = v1 + 12;
      v5 = v2;
      v7 = v2;
      v9 = v2;
      v11 = v2;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E701D, 0LL, 0LL, 6u, &pData);
    }
  }
}

/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00ABD90
 * Callers:
 *     EngAssociateSurface @ 0x1C0086A40 (EngAssociateSurface.c)
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     GreSelectPalette @ 0x1C0106150 (GreSelectPalette.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // [rsp+30h] [rbp-61h] BYREF
  __int64 v6; // [rsp+38h] [rbp-59h] BYREF
  __int64 v7; // [rsp+40h] [rbp-51h] BYREF
  __int64 v8; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-41h] BYREF
  int *v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+78h] [rbp-19h]
  __int64 *v12; // [rsp+80h] [rbp-11h]
  __int64 v13; // [rsp+88h] [rbp-9h]
  __int64 *v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  __int64 *v16; // [rsp+A0h] [rbp+Fh]
  __int64 v17; // [rsp+A8h] [rbp+17h]
  __int64 *v18; // [rsp+B0h] [rbp+1Fh]
  __int64 v19; // [rsp+B8h] [rbp+27h]
  __int64 *v20; // [rsp+C0h] [rbp+2Fh]
  __int64 v21; // [rsp+C8h] [rbp+37h]
  __int64 v22; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+100h] [rbp+6Fh] BYREF

  v23 = a3;
  v22 = a2;
  v8 = 0LL;
  v7 = 0LL;
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v5 = v3;
      v11 = 4LL;
      v10 = &v5;
      v12 = &v6;
      v14 = &v22;
      v16 = &v23;
      v18 = &v7;
      v20 = &v8;
      v6 = 0x2000000LL;
      v13 = (unsigned int)(v4 + 8);
      v15 = v13;
      v17 = v13;
      v19 = v13;
      v21 = v13;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019E056, 0LL, 0LL, v4 + 8, &pData);
    }
  }
}

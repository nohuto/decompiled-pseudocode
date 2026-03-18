/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38
 * Callers:
 *     GreExcludeClipRect @ 0x1C009CD2C (GreExcludeClipRect.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     NtGdiSelectBitmap @ 0x1C00FE660 (NtGdiSelectBitmap.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C01229A0 (NtGdiOffsetClipRgn.c)
 *     EngMarkBandingSurface @ 0x1C01305C0 (EngMarkBandingSurface.c)
 *     NtGdiInvertRgn @ 0x1C013CA50 (NtGdiInvertRgn.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     NtGdiFillPath @ 0x1C0140390 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0140A20 (NtGdiSelectClipPath.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C015EEF4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0160E74 (GreExtSelectClipRgnInternal.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     NtGdiPtVisible @ 0x1C02832D0 (NtGdiPtVisible.c)
 *     NtGdiFlattenPath @ 0x1C0290C20 (NtGdiFlattenPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C0291100 (NtGdiStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02913E0 (NtGdiWidenPath.c)
 *     NtGdiResizePalette @ 0x1C029BC50 (NtGdiResizePalette.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

char TraceLoggingWriteUnsupportedGdiUsage(__int64 a1, ...)
{
  _UNKNOWN **v1; // rax
  int v2; // r9d
  int v4; // [rsp+38h] [rbp-51h] BYREF
  __int64 v5; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  int *v7; // [rsp+68h] [rbp-21h]
  __int64 v8; // [rsp+70h] [rbp-19h]
  __int64 *v9; // [rsp+78h] [rbp-11h]
  __int64 v10; // [rsp+80h] [rbp-9h]
  va_list v11; // [rsp+88h] [rbp-1h]
  __int64 v12; // [rsp+90h] [rbp+7h]
  va_list v13; // [rsp+98h] [rbp+Fh]
  __int64 v14; // [rsp+A0h] [rbp+17h]
  va_list v15; // [rsp+A8h] [rbp+1Fh]
  __int64 v16; // [rsp+B0h] [rbp+27h]
  va_list v17; // [rsp+B8h] [rbp+2Fh]
  __int64 v18; // [rsp+C0h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+67h] BYREF
  va_list va; // [rsp+F0h] [rbp+67h]
  __int64 v22; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+6Fh]
  __int64 v24; // [rsp+100h] [rbp+77h] BYREF
  va_list va2; // [rsp+100h] [rbp+77h]
  va_list va3; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v1 = &retaddr;
  if ( hProvider > 5u )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v4 = v2;
      v8 = 4LL;
      v7 = &v4;
      v9 = &v5;
      va_copy(v11, va);
      va_copy(v13, va1);
      va_copy(v15, va2);
      va_copy(v17, va3);
      v5 = 0x2000000LL;
      v10 = 8LL;
      v12 = 8LL;
      v14 = 8LL;
      v16 = 8LL;
      v18 = 8LL;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D6F97, 0LL, 0LL, 8u, &pData);
    }
  }
  return (char)v1;
}

/*
 * XREFs of NtGdiSelectBitmap @ 0x1C00FE660
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0291554 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

HBITMAP __fastcall NtGdiSelectBitmap(HDC a1, HBITMAP a2)
{
  HBITMAP v3; // rbx
  unsigned __int16 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v8, a1);
  v3 = 0LL;
  if ( RFONTOBJ::bValid((RFONTOBJ *)v8) )
  {
    v4 = *(_WORD *)(v8[0] + 12LL);
    if ( v4 <= 1u )
    {
      v3 = hbmSelectBitmapInternal((struct XDCOBJ *)v8, a2, 0, 0, 0);
    }
    else
    {
      v5 = *(_QWORD *)(v8[0] + 48LL);
      if ( v5 )
        v6 = *(_DWORD *)(v5 + 40);
      else
        v6 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(1LL, v6, v4);
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  return v3;
}

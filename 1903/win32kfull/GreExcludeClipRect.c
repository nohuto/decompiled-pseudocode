/*
 * XREFs of GreExcludeClipRect @ 0x1C00758FC
 * Callers:
 *     NtGdiExcludeClipRect @ 0x1C00758E0 (NtGdiExcludeClipRect.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00EDBC0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00759DC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  ULONG v11; // ecx
  DC *v12[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    v11 = 6;
    goto LABEL_16;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v12, 0x80000204);
  v14.left = a2;
  v14.top = a3;
  v14.right = a4;
  v14.bottom = a5;
  if ( (*(_DWORD *)(v13[0] + 32LL) & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct ERECTL *)&v14);
    ERECTL::vOrder((ERECTL *)&v14);
    v8 = DC::iCombine(v12[0], &v14, 4);
    goto LABEL_4;
  }
  if ( (a2 & 0xF8000000) != 0 && (a2 & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v11 = 87;
LABEL_16:
    EngSetLastError(v11);
    v9 = 0;
    goto LABEL_6;
  }
  v8 = DC::iCombine(v12[0], (struct EXFORMOBJ *)v13, &v14, 4);
LABEL_4:
  v9 = v8;
  if ( v8 > 1 )
    v9 = 3;
LABEL_6:
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v9;
}

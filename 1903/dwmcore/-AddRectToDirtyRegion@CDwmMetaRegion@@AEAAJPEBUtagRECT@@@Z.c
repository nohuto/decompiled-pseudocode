/*
 * XREFs of ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x180181560
 * Callers:
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x180180E2C (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1801816AC (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddRectToDirtyRegion(HRGN *this, const struct tagRECT *a2)
{
  int v4; // edi
  HRGN RectRgn; // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  HRGN v8; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int LastError; // eax
  __int64 v12; // rcx

  v4 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( RectRgn )
  {
    if ( *this || (SetLastError(0), v8 = CreateRectRgn(0, 0, 0, 0), (*this = v8) != 0LL) )
    {
      SetLastError(0);
      if ( !CombineRgn(*this, *this, RectRgn, 2) )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v4, 0x2Du, 0LL);
      }
    }
    else
    {
      v9 = GetLastError();
      v4 = v9;
      if ( v9 > 0 )
        v4 = (unsigned __int16)v9 | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v4, 0x27u, 0LL);
    }
    DeleteObject(RectRgn);
  }
  else
  {
    v6 = GetLastError();
    v4 = v6;
    if ( v6 > 0 )
      v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0x23u, 0LL);
  }
  return (unsigned int)v4;
}

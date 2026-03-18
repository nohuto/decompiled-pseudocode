/*
 * XREFs of ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x18017F8B8
 * Callers:
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18017F1DC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x18017F9F4 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddRectToDirtyRegion(HRGN *this, const struct tagRECT *a2)
{
  signed int v4; // edi
  HRGN RectRgn; // rbx
  signed int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  HRGN v10; // rax
  signed int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  signed int LastError; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d

  v4 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( RectRgn )
  {
    if ( *this || (SetLastError(0), v10 = CreateRectRgn(0, 0, 0, 0), (*this = v10) != 0LL) )
    {
      SetLastError(0);
      if ( !CombineRgn(*this, *this, RectRgn, 2) )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v17, v16, v18);
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v4, 0x2Du);
      }
    }
    else
    {
      v11 = GetLastError();
      v4 = v11;
      if ( v11 > 0 )
        v4 = (unsigned __int16)v11 | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v13, v12, v14);
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v4, 0x27u);
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
      v4 = CheckGUIHandleQuota(v8, v7, v9);
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, 0x23u);
  }
  return (unsigned int)v4;
}

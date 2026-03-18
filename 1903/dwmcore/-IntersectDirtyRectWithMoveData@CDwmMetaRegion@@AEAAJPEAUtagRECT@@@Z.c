/*
 * XREFs of ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x180182438
 * Callers:
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x180180E2C (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180028244 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::IntersectDirtyRectWithMoveData(CDwmMetaRegion *this, struct tagRECT *a2)
{
  int v2; // ebx
  HRGN v3; // r14
  HRGN v4; // rsi
  HRGN RectRgn; // r15
  signed int LastError; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  signed int v17; // eax
  __int64 v18; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_BYTE *)this + 40) || !a2 )
    return (unsigned int)v2;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0x171u, 0LL);
    goto LABEL_36;
  }
  SetLastError(0);
  v3 = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( !v3 )
  {
    v10 = GetLastError();
    v2 = v10;
    if ( v10 > 0 )
      v2 = (unsigned __int16)v10 | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x176u, 0LL);
    goto LABEL_36;
  }
  SetLastError(0);
  v4 = CreateRectRgn(0, 0, 0, 0);
  if ( !v4 )
  {
    v12 = GetLastError();
    v2 = v12;
    if ( v12 > 0 )
      v2 = (unsigned __int16)v12 | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v2, 0x178u, 0LL);
    goto LABEL_36;
  }
  SetLastError(0);
  if ( !CombineRgn(v4, v4, *((HRGN *)this + 3), 2) )
  {
    v14 = GetLastError();
    v2 = v14;
    if ( v14 > 0 )
      v2 = (unsigned __int16)v14 | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v2, 0x17Cu, 0LL);
    goto LABEL_36;
  }
  OffsetRgn(v4, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  SetLastError(0);
  v16 = CombineRgn(RectRgn, v3, v4, 1);
  if ( !v16 )
  {
    v17 = GetLastError();
    v2 = v17;
    if ( v17 > 0 )
      v2 = (unsigned __int16)v17 | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v2, 0x182u, 0LL);
    goto LABEL_36;
  }
  if ( v16 != 1 )
  {
    CDwmMetaRegion::ClearMoveData(this);
LABEL_36:
    if ( v2 < 0 )
      CDwmMetaRegion::ClearMoveData(this);
  }
  if ( v3 )
    DeleteObject(v3);
  if ( v4 )
    DeleteObject(v4);
  if ( RectRgn )
    DeleteObject(RectRgn);
  return (unsigned int)v2;
}

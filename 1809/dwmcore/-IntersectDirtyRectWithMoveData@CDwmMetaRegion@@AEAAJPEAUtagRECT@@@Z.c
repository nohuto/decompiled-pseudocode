/*
 * XREFs of ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x18018071C
 * Callers:
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18017F1DC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180094968 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::IntersectDirtyRectWithMoveData(CDwmMetaRegion *this, struct tagRECT *a2)
{
  signed int v2; // ebx
  HRGN v3; // r14
  HRGN v4; // rsi
  HRGN RectRgn; // r15
  signed int LastError; // eax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  signed int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  signed int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  signed int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // eax
  signed int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  int v28; // r8d

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
      v2 = CheckGUIHandleQuota(v10, v9, v11);
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v2, 0x171u);
    goto LABEL_36;
  }
  SetLastError(0);
  v3 = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( !v3 )
  {
    v12 = GetLastError();
    v2 = v12;
    if ( v12 > 0 )
      v2 = (unsigned __int16)v12 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v14, v13, v15);
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v2, 0x176u);
    goto LABEL_36;
  }
  SetLastError(0);
  v4 = CreateRectRgn(0, 0, 0, 0);
  if ( !v4 )
  {
    v16 = GetLastError();
    v2 = v16;
    if ( v16 > 0 )
      v2 = (unsigned __int16)v16 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v18, v17, v19);
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v2, 0x178u);
    goto LABEL_36;
  }
  SetLastError(0);
  if ( !CombineRgn(v4, v4, *((HRGN *)this + 3), 2) )
  {
    v20 = GetLastError();
    v2 = v20;
    if ( v20 > 0 )
      v2 = (unsigned __int16)v20 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v22, v21, v23);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v2, 0x17Cu);
    goto LABEL_36;
  }
  OffsetRgn(v4, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  SetLastError(0);
  v24 = CombineRgn(RectRgn, v3, v4, 1);
  if ( !v24 )
  {
    v25 = GetLastError();
    v2 = v25;
    if ( v25 > 0 )
      v2 = (unsigned __int16)v25 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v27, v26, v28);
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v2, 0x182u);
    goto LABEL_36;
  }
  if ( v24 != 1 )
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

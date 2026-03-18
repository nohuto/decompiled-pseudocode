/*
 * XREFs of ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18017F7A0
 * Callers:
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180218060 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18017F874 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRectangle(
        CDwmMetaRegion *this,
        const struct tagRECT *a2,
        const struct tagPOINT *a3)
{
  signed int LastError; // eax
  __int64 v7; // rcx
  int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  HGDIOBJ ho; // [rsp+48h] [rbp+10h] BYREF

  SetLastError(0);
  ho = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( ho )
  {
    v9 = CDwmMetaRegion::AddMoveRegion(this, (HRGN *)&ho, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Eu, 0LL);
    if ( ho )
      DeleteObject(ho);
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v8, 0x7Cu, 0LL);
  }
  return (unsigned int)v8;
}

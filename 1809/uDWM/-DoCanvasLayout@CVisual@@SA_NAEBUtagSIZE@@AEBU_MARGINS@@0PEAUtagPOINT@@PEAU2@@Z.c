/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x18000B788
 * Callers:
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x18000B670 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800AF9A0 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r11d
  int cxRightWidth; // eax
  int cyBottomHeight; // ebx
  int cyTopHeight; // r10d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  char v13; // r8
  LONG cx; // ecx
  int v15; // ecx
  LONG cy; // eax
  int v17; // eax
  int v19; // eax
  int v20; // eax
  struct tagPOINT v21; // [rsp+0h] [rbp-10h]
  unsigned __int64 v22; // [rsp+38h] [rbp+28h]
  struct tagSIZE v23; // [rsp+38h] [rbp+28h]

  cxLeftWidth = a2->cxLeftWidth;
  cxRightWidth = a2->cxRightWidth;
  cyBottomHeight = a2->cyBottomHeight;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL && cyTopHeight == 0x7FFFFFFF && cyBottomHeight == 0x7FFFFFFF )
    return 0;
  v11 = (unsigned __int64)*a3;
  v22 = (unsigned __int64)*a3;
  v12 = HIDWORD(*(unsigned __int64 *)a3);
  v13 = 1;
  if ( cxRightWidth == 0x7FFFFFFF )
  {
    v20 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v20 = a2->cxLeftWidth;
    v21.x = v20;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v21.x = a2->cxLeftWidth;
      v15 = cx - cxRightWidth - cxLeftWidth;
      goto LABEL_5;
    }
    v21.x = cx - v11 - cxRightWidth;
  }
  v15 = v22;
LABEL_5:
  if ( cyBottomHeight == 0x7FFFFFFF )
  {
    v19 = 0;
    if ( cyTopHeight != 0x7FFFFFFF )
      v19 = a2->cyTopHeight;
    goto LABEL_25;
  }
  cy = a1->cy;
  if ( cyTopHeight == 0x7FFFFFFF )
  {
    v19 = cy - v12 - cyBottomHeight;
LABEL_25:
    v21.y = v19;
    v17 = HIDWORD(v22);
    goto LABEL_8;
  }
  v21.y = a2->cyTopHeight;
  v17 = cy - cyTopHeight - cyBottomHeight;
LABEL_8:
  if ( v15 <= 0 )
    v15 = 0;
  v23.cx = v15;
  if ( v17 <= 0 )
    v17 = 0;
  v23.cy = v17;
  *a5 = v23;
  *a4 = v21;
  return v13;
}

/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1800D799C
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D7730 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::AddPoint(
        struct tagPOINT *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v5; // edi
  int v8; // ecx
  unsigned int y_low; // ebx
  unsigned int v11; // r8d
  char v12; // dl
  char v13; // r14
  bool v14; // zf
  bool v15; // sf
  __int64 v16; // rbp
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // ecx
  int x_low; // edx
  LONG v22; // esi
  LONG v23; // eax
  int v24; // r9d
  LONG v25; // ecx
  char v26; // cl
  LONG y; // eax
  __int16 v28; // ax
  unsigned int x_high; // r8d

  v5 = a3->x - this[7].x;
  v8 = a3->y - this[7].y;
  y_low = LOWORD(this[4].y);
  v11 = abs32(v5);
  if ( v11 <= y_low && abs32(v8) <= HIWORD(this[4].y) && LOWORD(this[4].y) && HIWORD(this[4].y) && !a4 )
    return;
  v12 = BYTE2(this[3].y);
  v13 = 0;
  this[7] = *a3;
  if ( (v12 & 2) == 0 )
  {
    v13 = 1;
    BYTE2(this[3].y) = v12 | 2;
    if ( v11 <= y_low )
    {
      v14 = v8 == 0;
      v15 = v8 < 0;
    }
    else
    {
      v14 = v5 == 0;
      v15 = v5 < 0;
    }
    v16 = *((_QWORD *)a2 + 149);
    v17 = HIWORD(this[2].y) >> 1;
    v18 = v17 + LOWORD(this[2].x);
    v19 = HIWORD(this[2].y) - v17;
    v20 = -v18;
    if ( !v15 && !v14 )
      v20 = v18;
    x_low = LOWORD(this[3].x);
    if ( v11 <= y_low )
    {
      v24 = v20 - v19 + HIDWORD(v16);
      v23 = x_low + v16;
      v22 = v19 + v20 + HIDWORD(v16);
      v25 = v16 - x_low;
    }
    else
    {
      v22 = x_low + HIDWORD(v16);
      v23 = v19 + v20 + v16;
      v24 = HIDWORD(v16) - x_low;
      v25 = v16 + v20 - v19;
    }
    this[5].x = v25;
    this[6].x = v23;
    this[5].y = v24;
    this[6].y = v22;
    v12 = BYTE2(this[3].y);
    this[8] = this[7];
    this[9].x &= y_low < v11 ? -33 : -17;
  }
  v26 = v12;
  if ( (v12 & 6) == 2 )
  {
    if ( !HIWORD(this[2].y) )
    {
      v26 = v12 | 4;
LABEL_25:
      BYTE2(this[3].y) = v26;
      goto LABEL_26;
    }
    if ( a3->x < this[5].x || a3->x > this[6].x )
    {
      v26 = v12 | 4;
      this[9].x &= ~0x20u;
      goto LABEL_25;
    }
    y = a3->y;
    if ( y < this[5].y || (v26 = v12, y > this[6].y) )
    {
      v26 = v12 | 4;
      this[9].x &= ~0x10u;
      goto LABEL_25;
    }
  }
LABEL_26:
  v28 = this[3].y;
  LOWORD(this[4].y) = v28;
  HIWORD(this[4].y) = v28;
  if ( v13
    || a4
    || (x_high = HIWORD(this[3].x), abs32(this[7].x - this[8].x) > x_high)
    || abs32(this[7].y - this[8].y) > x_high
    || !HIWORD(this[3].x) )
  {
    BYTE2(this[3].y) = v26 | 8;
  }
}

/*
 * XREFs of ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1800C05D0
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800C0320 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 */

void __fastcall CursorAttraction::UpdateAttractionParameters(struct tagPOINT *this, const struct tagPOINT *a2)
{
  LONG y; // r10d
  LONG v4; // r8d
  LONG x; // r10d
  LONG v6; // r8d
  LONG v7; // ecx
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm0_4

  this[2] = *a2;
  y = a2->y;
  if ( this->y > y || this[1].y < y )
  {
    v4 = this[1].y;
    if ( (int)abs32(y - this->y) < (int)abs32(y - v4) )
      v4 = this->y;
    this[2].y = v4;
  }
  x = a2->x;
  if ( this->x > a2->x || this[1].x < x )
  {
    v6 = this[1].x;
    if ( (int)abs32(x - this->x) < (int)abs32(x - v6) )
      v6 = this->x;
    this[2].x = v6;
  }
  v7 = this[2].x;
  if ( v7 == a2->x && this[2].y == a2->y )
  {
    v8 = 0.0;
    v9 = 0.0;
  }
  else
  {
    v10 = (float)(this[2].y - a2->y);
    v11 = (float)(v7 - a2->x);
    v12 = sqrtf_0((float)(v11 * v11) + (float)(v10 * v10));
    v8 = (float)(v10 / v12) * *(float *)&this[4].y;
    v9 = (float)(v11 / v12) * *(float *)&this[4].y;
  }
  *(float *)&this[3].x = v9;
  *(float *)&this[3].y = v8;
}

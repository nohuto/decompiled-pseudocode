/*
 * XREFs of ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x18010BE9C
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010B9B0 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x18010BFC4 (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouchDown(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        int a3,
        __int64 a4,
        const struct TouchContactInfo *a5)
{
  int v5; // eax
  _QWORD *v6; // r8
  __int64 v7; // r10
  __int16 v8; // r11

  *((_WORD *)this + 8) &= ~2u;
  v5 = *((unsigned __int16 *)this + 14);
  *((_DWORD *)this + 33) = a3;
  *((_WORD *)this + 8) |= 0x200u;
  *((_DWORD *)this + 5) &= 0xFFFFFFF1;
  *((_DWORD *)this + 5) |= 1u;
  *((_DWORD *)this + 33) += v5;
  if ( (*((_BYTE *)a2 + 12) & 2) != 0
    && (*((_WORD *)this + 8) & 0x80u) != 0
    && a3 - *((_DWORD *)this + 32) <= (unsigned int)*((unsigned __int16 *)this + 13)
    && ClickRecognizer::PointsWithinThreshold(
         (ClickRecognizer *)0x200,
         (const struct tagPOINT *)this + 15,
         (const struct tagPOINT *)((char *)a5 + 4),
         *((unsigned __int16 *)this + 12)) )
  {
    *(_WORD *)(v7 + 16) = v8 | 9;
    *(_QWORD *)(v7 + 56) = *v6;
  }
}

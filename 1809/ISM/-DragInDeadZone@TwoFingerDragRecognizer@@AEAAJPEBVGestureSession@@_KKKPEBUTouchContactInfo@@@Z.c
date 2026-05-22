/*
 * XREFs of ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8C3C
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D88A0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1800D8E10 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragInDeadZone(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  _DWORD *v7; // r8
  unsigned int v8; // ecx
  int v9; // r9d
  int v10; // r10d

  if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  else
  {
    v8 = *((unsigned __int16 *)this + 39);
    v9 = (v7[11] + v7[1]) / 2;
    v10 = (v7[12] + v7[2]) / 2;
    if ( abs32(v9 - *((_DWORD *)this + 13)) > v8 || abs32(v10 - *((_DWORD *)this + 14)) > v8 || !*((_WORD *)this + 39) )
    {
      *(_QWORD *)((char *)this + 52) = __PAIR64__(v10, v9);
      *(_QWORD *)((char *)this + 60) = __PAIR64__(v10, v9);
      *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0xFFFA | 1;
      *((_DWORD *)this + 5) = 3;
    }
  }
  return 0LL;
}

/*
 * XREFs of ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D88A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8A1C (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8B28 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8C3C (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1800D8E10 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::Add(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  _WORD *v6; // r14
  unsigned int v7; // ebx
  __int16 v8; // di
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // r8
  __int16 v15; // di
  __int16 v16; // ax
  __int64 v18; // [rsp+50h] [rbp+8h]

  v6 = (_WORD *)((char *)this + 16);
  v7 = 0;
  v8 = *((_WORD *)this + 8);
  if ( (v8 & 8) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *v6 = 0;
    v8 = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    v8 &= ~8u;
    *((_DWORD *)this + 5) = 0;
    *v6 = v8;
    v11 = 0;
  }
  else
  {
    v11 = *((_DWORD *)this + 5);
  }
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
          {
            *((_DWORD *)this + 5) = 4;
            v15 = v8 & 0xFFF7;
            v16 = 0;
          }
          else
          {
            v15 = v8 | 1;
            LODWORD(v18) = (v14[11] + v14[1]) / 2;
            HIDWORD(v18) = (v14[12] + v14[2]) / 2;
            *(_QWORD *)((char *)this + 52) = v18;
            v16 = v15 & 0xFFFB;
          }
          *v6 = v15;
          *v6 = v16;
        }
        return v7;
      }
      return (unsigned int)TwoFingerDragRecognizer::DragInDeadZone(this, a2, a3, a4, a5, a6);
    }
    else
    {
      return (unsigned int)TwoFingerDragRecognizer::DragOneFingerDown(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)TwoFingerDragRecognizer::DragInactive(this, a2, a3, a4, a5, a6);
  }
}

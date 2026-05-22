/*
 * XREFs of ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D120
 * Callers:
 *     <none>
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18010D22C (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z @ 0x18010D2F0 (-DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D348 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D3F8 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D510 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::Add(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v6; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v6 = 0;
  if ( (*((_BYTE *)this + 16) & 8) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 5) = 0;
    v9 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 5);
  }
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
          {
            *((_WORD *)this + 8) = 0;
            *((_DWORD *)this + 5) = 4;
          }
          else
          {
            TwoFingerDragRecognizer::DeliverGesture(this, 0, a6);
          }
        }
        return v6;
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

/*
 * XREFs of ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1800D8E10
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D88A0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8A1C (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8B28 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8C3C (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerDragRecognizer::ContactsAreValid(
        TwoFingerDragRecognizer *this,
        int a2,
        const struct TouchContactInfo *a3)
{
  unsigned int v4; // r10d
  _DWORD *v5; // rdx
  unsigned __int16 *i; // r9
  int v7; // r9d
  unsigned int v8; // ecx
  int v9; // r9d
  unsigned int v10; // ecx

  if ( a2 == 2 )
  {
    v4 = 0;
    v5 = (_DWORD *)((char *)this + 28);
    for ( i = (unsigned __int16 *)((char *)a3 + 2); *v5 == *i; i += 20 )
    {
      ++v4;
      ++v5;
      if ( v4 >= 2 )
      {
        v7 = *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 12);
        v8 = *((unsigned __int16 *)this + 38);
        if ( abs32(*((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11)) <= v8 && abs32(v7) <= v8 )
        {
          if ( v8 )
          {
            v9 = v7 - (*((_DWORD *)this + 10) - *((_DWORD *)this + 12));
            v10 = *((unsigned __int16 *)this + 43);
            if ( abs32(*((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11) - (*((_DWORD *)this + 9) - *((_DWORD *)this + 11))) <= v10
              && abs32(v9) <= v10
              && *((_WORD *)this + 43) )
            {
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

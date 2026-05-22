/*
 * XREFs of ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x18010CFFC
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010CEF0 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D118 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D1C8 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010D2E0 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x18010C3C4 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

char __fastcall TwoFingerDragRecognizer::ContactsAreValid(
        TwoFingerDragRecognizer *this,
        int a2,
        const struct TouchContactInfo *a3)
{
  unsigned int v3; // r10d
  _DWORD *v4; // rdx
  unsigned __int16 *i; // r9
  int v6; // ebx
  unsigned int v7; // r9d
  int v8; // rcx^4
  __int64 v9; // r11
  int v10; // edx
  unsigned int v11; // r9d
  struct tagPOINT v13; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 2 )
  {
    v3 = 0;
    v4 = (_DWORD *)((char *)this + 28);
    for ( i = (unsigned __int16 *)((char *)a3 + 2); *v4 == *i; i += 20 )
    {
      ++v3;
      ++v4;
      if ( v3 >= 2 )
      {
        v6 = *((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11);
        v7 = *((unsigned __int16 *)this + 38);
        v13 = (struct tagPOINT)__PAIR64__(*((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 12), v6);
        if ( !GestureRecognizer::ExceedsThreshold(*(GestureRecognizer **)&v13, &v13, v7, v7) )
        {
          v10 = *(_DWORD *)(v9 + 40) - *(_DWORD *)(v9 + 48);
          v11 = *(unsigned __int16 *)(v9 + 86);
          v13.x = *(_DWORD *)(v9 + 44) + v6 - *(_DWORD *)(v9 + 36);
          v13.y = v8 - v10;
          if ( !GestureRecognizer::ExceedsThreshold(*(GestureRecognizer **)&v13, &v13, v11, v11) )
            return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

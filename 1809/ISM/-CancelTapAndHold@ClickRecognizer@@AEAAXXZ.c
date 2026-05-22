/*
 * XREFs of ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1800D7144
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D6DB0 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1800D6F68 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1800D7190 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::CancelTapAndHold(ClickRecognizer *this)
{
  __int16 v1; // dx
  __int16 v2; // dx
  int v3; // eax
  __int64 v4; // rax

  v1 = *((_WORD *)this + 8);
  if ( (v1 & 0x200) != 0 )
  {
    v2 = v1 & 0xFDFF;
    v3 = *((_DWORD *)this + 5) & 0xF;
    *((_WORD *)this + 8) = v2;
    if ( (_BYTE)v3 == 3 )
    {
      v4 = *((_QWORD *)this + 14);
      *((_WORD *)this + 8) = v2 | 0x20;
      *(_QWORD *)((char *)this + 84) = v4;
      *((_DWORD *)this + 23) = 2;
    }
  }
  *((_DWORD *)this + 5) &= 0xFFFFFFF0;
}

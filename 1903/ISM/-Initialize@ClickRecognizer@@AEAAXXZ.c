/*
 * XREFs of ?Initialize@ClickRecognizer@@AEAAXXZ @ 0x18010BD74
 * Callers:
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x18010B8E0 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x18010C070 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::Initialize(ClickRecognizer *this)
{
  *((_WORD *)this + 8) &= 0x80u;
  *((_WORD *)this + 8) |= 2u;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 10) = 12;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 13) = 12;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 16) = 16;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 20) = 16;
}

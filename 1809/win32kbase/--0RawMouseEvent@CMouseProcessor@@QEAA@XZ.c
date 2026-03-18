/*
 * XREFs of ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0031B00
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::RawMouseEvent::RawMouseEvent(
        CMouseProcessor::RawMouseEvent *this)
{
  CMouseProcessor::RawMouseEvent *result; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 104) = 0;
  *(_QWORD *)((char *)this + 92) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)((char *)this + 108) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 29) = 0;
  *(_QWORD *)((char *)this + 124) = 0LL;
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}

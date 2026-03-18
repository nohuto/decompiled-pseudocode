/*
 * XREFs of ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0033B60
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::RawMouseEvent::RawMouseEvent(
        CMouseProcessor::RawMouseEvent *this)
{
  CMouseProcessor::RawMouseEvent *result; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)((char *)this + 108) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 29) = 0;
  *((_BYTE *)this + 136) = 0;
  *(_QWORD *)((char *)this + 124) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 33) = 0;
  *(_QWORD *)((char *)this + 140) = 0LL;
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}

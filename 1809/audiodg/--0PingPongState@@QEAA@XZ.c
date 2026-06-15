/*
 * XREFs of ??0PingPongState@@QEAA@XZ @ 0x140059718
 * Callers:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400592D4 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

PingPongState *__fastcall PingPongState::PingPongState(PingPongState *this)
{
  PingPongState *result; // rax

  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 8) = 3LL;
  *((_DWORD *)this + 33) = 3;
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 6) = 2;
  *(_QWORD *)((char *)this + 28) = 2LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 15) = 2;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 2LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 2LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 27) = 2;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 29) = 1;
  *((_DWORD *)this + 30) = 2;
  *((_DWORD *)this + 31) = 1;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}

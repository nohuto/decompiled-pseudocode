/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C00A9718
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C00A8E30 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005DDE0 (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00A9BEC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1C00A9C40 (--0MousePerfSummary@@QEAA@XZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  unsigned __int64 v2; // r8
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 16) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  memset((char *)this + 88, 0, 0xA00uLL);
  `vector constructor iterator'(
    (char *)this + 88,
    0xA0uLL,
    v2,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 662) = 0;
  *((_DWORD *)this + 668) = 1;
  memset((char *)this + 2680, 0, 0x60uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 2776));
  *((_QWORD *)this + 392) = 0LL;
  *((_QWORD *)this + 393) = 0LL;
  *((_QWORD *)this + 394) = 0LL;
  *((_WORD *)this + 1615) = 7;
  *((_QWORD *)this + 404) = 0LL;
  *((_QWORD *)this + 405) = 0LL;
  *((_QWORD *)this + 406) = 0LL;
  *((_BYTE *)this + 3256) = 0;
  *((_BYTE *)this + 3260) = 0;
  *((_QWORD *)this + 408) = 0LL;
  memset((char *)this + 3272, 0, 0x78uLL);
  *((_BYTE *)this + 3392) = 0;
  *((_DWORD *)this + 850) = 0;
  *((_BYTE *)this + 3424) = 0;
  *((_DWORD *)this + 857) = 0;
  *((_QWORD *)this + 429) = 0LL;
  *((_DWORD *)this + 860) = 0;
  *((_DWORD *)this + 861) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 3448, 0, 0x48uLL);
  *((_QWORD *)this + 440) = 0LL;
  *((_QWORD *)this + 426) = 0LL;
  *((_QWORD *)this + 427) = 0LL;
  *((_QWORD *)this + 441) = 0LL;
  *((_QWORD *)this + 442) = 0LL;
  *((_WORD *)this + 1772) = 0;
  *((_QWORD *)this + 444) = &CPushLock::`vftable';
  *((_QWORD *)this + 445) = 0LL;
  *((_QWORD *)this + 446) = 0LL;
  *((_QWORD *)this + 447) = 0LL;
  *((_BYTE *)this + 3584) = 0;
  memset((char *)this + 3592, 0, 0x380uLL);
  *((_WORD *)this + 2244) = 0;
  *((_QWORD *)this + 562) = (char *)this + 3592;
  *((_BYTE *)this + 4504) = 0;
  *((_BYTE *)this + 4516) = 0;
  *((_BYTE *)this + 4520) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  result = this;
  *((_QWORD *)this + 332) = 0LL;
  *((_QWORD *)this + 333) = 0LL;
  return result;
}

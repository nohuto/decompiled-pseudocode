/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C005FCF0
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0060E70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005CD7C (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00601CC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1C0060220 (--0MousePerfSummary@@QEAA@XZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
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
  *((_QWORD *)this + 397) = 0LL;
  *((_QWORD *)this + 398) = 0LL;
  *((_QWORD *)this + 399) = 0LL;
  *((_WORD *)this + 1635) = 7;
  *((_QWORD *)this + 409) = 0LL;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_BYTE *)this + 3296) = 0;
  *((_BYTE *)this + 3300) = 0;
  *((_QWORD *)this + 413) = 0LL;
  memset((char *)this + 3312, 0, 0x78uLL);
  *((_BYTE *)this + 3432) = 0;
  *((_DWORD *)this + 860) = 0;
  *((_BYTE *)this + 3464) = 0;
  *((_DWORD *)this + 867) = 0;
  *((_QWORD *)this + 434) = 0LL;
  *((_DWORD *)this + 870) = 0;
  *((_DWORD *)this + 871) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 3488, 0, 0x48uLL);
  *((_QWORD *)this + 445) = 0LL;
  *((_QWORD *)this + 431) = 0LL;
  *((_QWORD *)this + 432) = 0LL;
  *((_QWORD *)this + 446) = 0LL;
  *((_QWORD *)this + 447) = 0LL;
  *((_WORD *)this + 1792) = 0;
  *((_QWORD *)this + 449) = &CPushLock::`vftable';
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_BYTE *)this + 3624) = 0;
  memset((char *)this + 3632, 0, 0x380uLL);
  *((_WORD *)this + 2264) = 0;
  *((_QWORD *)this + 567) = (char *)this + 3632;
  *((_BYTE *)this + 4544) = 0;
  *((_BYTE *)this + 4556) = 0;
  *((_BYTE *)this + 4560) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  result = this;
  *((_QWORD *)this + 332) = 0LL;
  *((_QWORD *)this + 333) = 0LL;
  return result;
}

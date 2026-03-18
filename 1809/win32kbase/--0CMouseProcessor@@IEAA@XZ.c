/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C0005FE0
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005F40 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00065BC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C0006A44 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00077C0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 18) = (unsigned int)PsGetCurrentThreadId();
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_DWORD *)this + 23) = 0;
  memset((char *)this + 96, 0, 0x900uLL);
  `vector constructor iterator'(
    (char *)this + 96,
    0x90uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 600) = 0;
  *((_DWORD *)this + 606) = 1;
  *(_QWORD *)((char *)this + 2428) = 0LL;
  *(_QWORD *)((char *)this + 2436) = 0LL;
  *((_QWORD *)this + 306) = 0LL;
  *((_WORD *)this + 1259) = 7;
  *((_QWORD *)this + 315) = 0LL;
  *((_QWORD *)this + 316) = 0LL;
  *((_BYTE *)this + 2536) = 0;
  *(_QWORD *)((char *)this + 2540) = 0LL;
  memset((char *)this + 2552, 0, 0xB0uLL);
  *((_BYTE *)this + 2728) = 0;
  *((_DWORD *)this + 684) = 0;
  *((_BYTE *)this + 2760) = 0;
  *((_DWORD *)this + 691) = 0;
  *((_QWORD *)this + 346) = 0LL;
  *((_DWORD *)this + 694) = 0;
  *((_DWORD *)this + 695) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 2784, 0, 0x48uLL);
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_QWORD *)this + 344) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_WORD *)this + 1440) = 0;
  CBaseProcessor::InitRecorderLog(this, L"MouseProcessor");
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 301) = 0LL;
  *((_QWORD *)this + 302) = 0LL;
  return result;
}

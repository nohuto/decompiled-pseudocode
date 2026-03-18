/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C014A348
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A480 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00064AC (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C0006A44 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 344, 0, 0xB0uLL);
  *((_BYTE *)this + 520) = 0;
  memset((char *)this + 608, 0, 0x700uLL);
  *((_QWORD *)this + 301) = 0LL;
  *((_QWORD *)this + 302) = 0LL;
  *((_QWORD *)this + 303) = 0LL;
  *((_QWORD *)this + 304) = 0LL;
  *((_BYTE *)this + 2400) = 0;
  CBaseProcessor::InitRecorderLog(this, L"CPTPProcessor");
  *((_QWORD *)this + 73) = 0LL;
  result = this;
  *((_QWORD *)this + 74) = 0LL;
  return result;
}

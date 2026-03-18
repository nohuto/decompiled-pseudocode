/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x1C0177B68
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0177C9C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C005DE30 (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 25) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 424, 0, 0x78uLL);
  *((_BYTE *)this + 544) = 0;
  memset((char *)this + 640, 0, 0x6ECuLL);
  *((_QWORD *)this + 302) = 0LL;
  result = this;
  *((_QWORD *)this + 303) = 0LL;
  *((_QWORD *)this + 304) = 0LL;
  *((_QWORD *)this + 305) = 0LL;
  *((_BYTE *)this + 2412) = 0;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 105) &= ~2u;
  *((_DWORD *)this + 104) = 0;
  return result;
}

/*
 * XREFs of ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x1800E0E94
 * Callers:
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0D40 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800E0EF0 (--0CMmcssTask@@QEAA@XZ.c)
 */

CMit *__fastcall CMit::CMit(CMit *this, struct CComposition *a2)
{
  CMit *result; // rax

  *(_QWORD *)this = a2;
  CMmcssTask::CMmcssTask((CMit *)((char *)this + 32));
  *((_QWORD *)this + 15) = -1LL;
  *((_QWORD *)this + 2) = -1LL;
  *((_QWORD *)this + 14) = -1LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 16) = 0LL;
  CMit::s_pMessageSession = 0LL;
  CMit::s_pMessageCallSendHost = 0LL;
  CMit::s_pSystemInputHost = 0LL;
  return result;
}

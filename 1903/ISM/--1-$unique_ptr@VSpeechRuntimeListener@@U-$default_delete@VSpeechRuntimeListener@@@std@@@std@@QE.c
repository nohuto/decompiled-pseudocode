/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800957C8
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x18009572D (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x180098620 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(SpeechRuntimeListener **a1)
{
  SpeechRuntimeListener *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x58);
  }
}

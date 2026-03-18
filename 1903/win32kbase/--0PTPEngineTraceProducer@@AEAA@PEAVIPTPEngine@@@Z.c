/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C019A2B4
 * Callers:
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C019A3A8 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 40, 0, 0x1FCuLL);
  v3 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 3);
  *((_QWORD *)this + 69) = 0LL;
  (**v3)(v3, (char *)this + 16);
  return this;
}

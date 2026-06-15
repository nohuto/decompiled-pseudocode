/*
 * XREFs of ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x140005400
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140005364 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140005510 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  v2 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  memset_0((char *)this + 72, 0, 0x20uLL);
  *v2 = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  *((_QWORD *)this + 14) = v2;
  *((_WORD *)this + 60) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 13) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 10000LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 5000LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 30000LL;
  *((_QWORD *)this + 24) = 0LL;
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear((char *)this + 104);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(__int64, char *, char *, char *))(*(_QWORD *)v3 + 40LL))(
      v3,
      (char *)this + 136,
      (char *)this + 168,
      (char *)this + 176);
  return this;
}

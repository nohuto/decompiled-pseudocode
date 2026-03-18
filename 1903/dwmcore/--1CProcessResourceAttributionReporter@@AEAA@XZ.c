/*
 * XREFs of ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180179174
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(PTP_WORK *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx
  void **v3; // rbx
  void **v4; // rsi

  WaitForThreadpoolWorkCallbacks(this[1], 1);
  CloseThreadpoolWork(this[1]);
  v2 = (void (__fastcall ***)(_QWORD, _QWORD))this[7];
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void **)this[4];
  if ( v3 )
  {
    v4 = (void **)this[5];
    if ( v3 != v4 )
    {
      do
      {
        if ( *v3 )
          operator delete(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = (void **)this[4];
    }
    std::_Deallocate<16,0>(v3, (this[6] - (PTP_WORK)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    this[4] = 0LL;
    this[5] = 0LL;
    this[6] = 0LL;
  }
}

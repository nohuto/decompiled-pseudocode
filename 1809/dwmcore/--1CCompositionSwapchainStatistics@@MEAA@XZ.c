/*
 * XREFs of ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x1801DB6B8
 * Callers:
 *     ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x1801DB750 (--_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(
        CCompositionSwapchainStatistics *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CCompositionSwapchainStatistics::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, 88 * ((*((_QWORD *)this + 5) - (_QWORD)v3) / 88LL));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}

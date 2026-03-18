/*
 * XREFs of ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18019E630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213C38 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

void __fastcall CGenericInk::ComputeBackgroundBlendInfo(CGenericInk *this, bool *a2, bool *a3)
{
  int v4; // ebx
  signed int ResourceNoRef; // eax
  __int64 v6; // rcx

  *a2 = 0;
  v4 = 0;
  ResourceNoRef = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef((CGenericInk *)((char *)this + 80));
  if ( ResourceNoRef < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ResourceNoRef, 0x1D6u, 0LL);
  else
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*MEMORY[0x68] + 24LL))(MEMORY[0x68]);
  *a3 = v4 != 0;
}

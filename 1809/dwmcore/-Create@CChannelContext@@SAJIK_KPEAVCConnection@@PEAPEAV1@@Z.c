/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180095D68
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180096288 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800949B0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x180095E50 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x180095EA8 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18009600C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannelContext::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct CConnection *a4,
        struct CChannelContext **a5)
{
  unsigned int v7; // esi
  int ProcessAttribution; // eax
  CChannelContext *v10; // rax
  unsigned int v11; // ecx
  CChannelContext *v12; // rbx
  CResourceTable *v13; // rax
  CResourceTable *v14; // rax
  unsigned int v15; // ecx
  CResourceTable *v16; // rdi
  struct CProcessAttribution *v18[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0;
  v18[0] = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_180307EB0, a2, a3, v18);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v10 = (CChannelContext *)WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CChannelContext::CChannelContext(v10, a1, a2, v18[0], a4);
  if ( v12 )
  {
    v13 = (CResourceTable *)WPF::ProcessHeapImpl::AllocClear(0x50uLL);
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v14 = CResourceTable::CResourceTable(v13, a1, v18[0]);
    v16 = v14;
    if ( v14 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v14)(v14);
      *((_QWORD *)v12 + 3) = v16;
      *a5 = v12;
      v12 = 0LL;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x33u);
    }
    if ( v12 )
      CChannelContext::`vector deleting destructor'(v12, 1);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x30u);
  }
  ReleaseInterface<CConnection>(v18);
  return v7;
}

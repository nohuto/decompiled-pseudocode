/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x18004C6C0
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18004C5D4 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x18004B140 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18004C7A8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x18004C7D0 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x18004C828 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18004CF4C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
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
  __int64 v10; // r8
  CChannelContext *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ecx
  CChannelContext *v14; // rbx
  CResourceTable *v15; // rax
  __int64 v16; // r8
  CResourceTable *v17; // rax
  unsigned int v18; // ecx
  CResourceTable *v19; // rdi
  struct CProcessAttribution *v21[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0;
  v21[0] = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(lpMem, a2, a3, v21);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr, v10);
  v11 = (CChannelContext *)DefaultHeap::AllocClear(0x58uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v12);
  v14 = CChannelContext::CChannelContext(v11, a1, a2, v21[0], a4);
  if ( v14 )
  {
    v15 = (CResourceTable *)DefaultHeap::AllocClear(0x50uLL);
    if ( !v15 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v16);
    v17 = CResourceTable::CResourceTable(v15, a1, v21[0]);
    v19 = v17;
    if ( v17 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v17)(v17);
      *((_QWORD *)v14 + 3) = v19;
      *a5 = v14;
      v14 = 0LL;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2Fu, 0LL);
    }
    if ( v14 )
      CChannelContext::`vector deleting destructor'(v14, 1);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  ReleaseInterface<CProcessAttribution>(v21);
  return v7;
}

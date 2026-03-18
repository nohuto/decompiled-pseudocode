/*
 * XREFs of ?Initialize@CGlobalComposition@@AEAAJXZ @ 0x1800E1170
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800DFE48 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalComposition::Initialize(CGlobalComposition *this)
{
  char *v2; // rax
  __int64 v3; // r8
  volatile signed __int32 *v4; // rbx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)DefaultHeap::AllocClear(0x78uLL);
  v4 = (volatile signed __int32 *)v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v3);
  *((_DWORD *)v2 + 2) = 0;
  *(_QWORD *)v2 = &CWindowManager::`vftable';
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)(v2 + 48),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  _InterlockedIncrement(v4 + 2);
  *((_QWORD *)this + 166) = v4;
  v5 = CComposition::Initialize(this);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x57u, 0LL);
  return v7;
}

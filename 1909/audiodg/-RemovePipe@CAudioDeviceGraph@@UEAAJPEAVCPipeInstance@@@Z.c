/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140038710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040E8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7EC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14003554C (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CPipeInstance **this, struct IUnknown **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  struct IUnknown *v6; // rax
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  CAudioDeviceGraph::RegisterSpatialPipe(this - 2, (struct CPipeInstance *)a2, 0);
  CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)a2);
  v6 = a2[31];
  v8 = v6;
  while ( v6 )
  {
    v5 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, (_QWORD **)&v8);
    v6 = v8;
    *(_QWORD *)(v5 + 8) = -1LL;
  }
  if ( a2[19] )
    ATL::AtlComPtrAssign(a2 + 19, 0LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

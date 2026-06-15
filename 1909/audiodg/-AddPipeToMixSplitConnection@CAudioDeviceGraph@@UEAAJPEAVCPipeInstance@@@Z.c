/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9D4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14000DAA0 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD **Head; // rax
  __int64 v6; // rax
  int v7; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  Head = (_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*((_QWORD *)this + 18) + 64LL));
  v6 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
  v7 = CPipeInstance::ResolvePendingConnections(a2, -1LL, *(_QWORD *)(*(_QWORD *)v6 + 8LL), 0LL);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v7;
}

/*
 * XREFs of ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x140003EE4
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DC4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140003F50 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CPipeInstance::RemoveDummyProcessNodes(CPipeInstance *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 3);
  while ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v3 + 40) == 4 )
    {
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)this + 16);
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    }
  }
}

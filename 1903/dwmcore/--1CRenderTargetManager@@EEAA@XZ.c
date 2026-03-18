/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x180188CDC
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180188D20 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180189164 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 7));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
}

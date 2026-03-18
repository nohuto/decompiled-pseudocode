/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x180152724
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180152760 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152AAC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
}

/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x1801875FC
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180187640 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180187A84 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 7));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
}

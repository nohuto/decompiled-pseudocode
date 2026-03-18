/*
 * XREFs of ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C005A1F4
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000EFE0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059E00 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C005A2D4 (-PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060178 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00123F0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetPresentId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v4 >= 0 )
  {
    *a2 = *((_QWORD *)this + 16);
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v4;
}

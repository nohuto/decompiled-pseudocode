/*
 * XREFs of ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0053824
 * Callers:
 *     ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0053904 (-PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059088 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
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

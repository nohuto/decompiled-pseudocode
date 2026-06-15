/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x1800FB930
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x180071CE0 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002A5DC (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800FBC50 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

void __fastcall CSebNotifier::~CSebNotifier(PTP_TIMER *this)
{
  if ( this[12] )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease((CSebNotifier *)this);
    CloseThreadpoolTimer(this[12]);
    this[12] = 0LL;
  }
  CSebNotifier::PublishSebEvent((CSebNotifier *)this, 0);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 1));
}

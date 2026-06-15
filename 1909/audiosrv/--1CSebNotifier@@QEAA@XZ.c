/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x1800FB490
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x18007414C (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002D46C (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800FB7B0 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
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

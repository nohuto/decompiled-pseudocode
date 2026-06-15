/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x1800EF990
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x18006F39A (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18001470C (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800EFBE0 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
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

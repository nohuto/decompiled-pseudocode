/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800AFA90
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x18005FFB0 (--1AudioJournal@@QEAA@XZ.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$1 @ 0x18006F347 (_AudioJournal--AudioJournal_--_1_--dtor$1.c)
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800AFF40 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(struct _TP_POOL **this)
{
  struct _TP_POOL *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseThreadpool(v2);
    *this = 0LL;
  }
  _Mtx_destroy_in_situ((_Mtx_t)(this + 11));
}

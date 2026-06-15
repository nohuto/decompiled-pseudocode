/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800BE498
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x1800635DC (--1AudioJournal@@QEAA@XZ.c)
 *     _AudioJournal::AudioJournal_::_1_::dtor$1 @ 0x1800717D5 (_AudioJournal--AudioJournal_--_1_--dtor$1.c)
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800BE990 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
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

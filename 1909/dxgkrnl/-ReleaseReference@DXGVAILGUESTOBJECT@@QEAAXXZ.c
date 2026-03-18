/*
 * XREFs of ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02913C4
 * Callers:
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C029143C (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02923BC (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0292998 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0293810 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007758 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C00498FC (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ @ 0x1C0290B44 (-DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ.c)
 */

void __fastcall DXGVAILGUESTOBJECT::ReleaseReference(DXGVAILGUESTOBJECT *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18736LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 1975LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( (*((_DWORD *)this + 2))-- == 1 )
  {
    DXGVAILGUESTOBJECT::DestroyVmBusGuestSubscribers(this);
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGVAILGUESTOBJECT *)((char *)this + 16));
    operator delete(this);
  }
}

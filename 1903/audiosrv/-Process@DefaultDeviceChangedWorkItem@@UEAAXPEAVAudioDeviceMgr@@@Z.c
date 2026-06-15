/*
 * XREFs of ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1801463B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DefaultDeviceChangedWorkItem::Process(DefaultDeviceChangedWorkItem *this, struct AudioDeviceMgr *a2)
{
  AudioDeviceMgr::ProcessOnDefaultDeviceChanged(
    a2,
    *((unsigned int *)this + 5),
    *((unsigned int *)this + 4),
    *((_QWORD *)this + 1));
}

/*
 * XREFs of ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140033290
 * Callers:
 *     ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14003312C (--0-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400331D0 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x1400110DC (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffloadGraph *__fastcall CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(
        CSystemAudioDeviceOffloadGraph *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 98) = 0;
  v2 = (char *)this + 400;
  memset_0((char *)this + 400, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return this;
}

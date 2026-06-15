/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140011304
 * Callers:
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14001135C (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140032B1C (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x1400110DC (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 92) = 0;
  v2 = (char *)this + 376;
  memset_0((char *)this + 376, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  return this;
}

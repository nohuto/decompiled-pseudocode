/*
 * XREFs of ??0AudioDeviceMgr@@IEAA@XZ @ 0x18005756C
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x180062B44 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180057AB0 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
AudioDeviceMgr *__fastcall AudioDeviceMgr::AudioDeviceMgr(AudioDeviceMgr *this)
{
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClientInternal'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((AudioDeviceMgr *)((char *)this + 80));
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((AudioDeviceMgr *)((char *)this + 168));
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}

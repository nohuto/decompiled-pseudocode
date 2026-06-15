/*
 * XREFs of ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800BD3D4
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7420 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C76F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800BD154 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvVolumeTelemetry::Update(AudioSrvVolumeTelemetry *this)
{
  ULONGLONG TickCount64; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  TickCount64 = GetTickCount64();
  if ( AudioSrvVolumeTelemetry::LogTelemetry(this) )
  {
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 2) = TickCount64;
  }
  else
  {
    ++*((_DWORD *)this + 6);
  }
  *((_QWORD *)this + 1) = TickCount64;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}

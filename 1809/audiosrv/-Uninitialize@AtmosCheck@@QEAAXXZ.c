/*
 * XREFs of ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x180124E48 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x1801375A4 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ @ 0x18013802C (-CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801380B8 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013C1EC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall AtmosCheck::Uninitialize(AtmosCheck *this)
{
  __int64 v2; // rbp
  DWORD *v3; // rsi
  unsigned __int64 v4; // rdi
  HRESULT v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  HKEY v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 552) = 1;
  *((_BYTE *)this + 75) = 0;
  if ( *((_BYTE *)this + 184) )
  {
    v2 = 0LL;
    v3 = (DWORD *)*((_QWORD *)this + 66);
    v4 = (unsigned __int64)(*((_QWORD *)this + 67) - (_QWORD)v3 + 3LL) >> 2;
    if ( (unsigned __int64)v3 > *((_QWORD *)this + 67) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = CoCancelCall(*v3, 0);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7B,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)v5);
        ++v3;
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
  AtmosCheck::UninitializeAppServiceMode(this);
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    UnregisterWaitEx(v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    CloseHandle(v7);
    *((_QWORD *)this + 10) = 0LL;
  }
  AtmosCheck::CancelLicenseRefreshTimer(this);
  AtmosCheck::CancelDeviceIdRecheckTimer(this);
  v8 = (void *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    if ( *((_QWORD *)this + 13) )
    {
      UnregisterWaitEx(*((HANDLE *)this + 13), (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      v8 = (void *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 13) = 0LL;
    }
    CloseHandle(v8);
    *((_QWORD *)this + 14) = 0LL;
  }
  v9 = (HKEY)*((_QWORD *)this + 12);
  if ( v9 )
  {
    RegCloseKey(v9);
    *((_QWORD *)this + 12) = 0LL;
  }
  AtmosCheck::UnregisterAppDeploymentNotifications(this);
}

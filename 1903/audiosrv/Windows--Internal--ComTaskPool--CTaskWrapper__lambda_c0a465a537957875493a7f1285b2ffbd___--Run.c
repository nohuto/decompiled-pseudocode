/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18004FB90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180046754 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800500B0 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005014C (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800510D8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x180140038 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run(
        __int64 a1)
{
  __int64 v2; // r9
  void *v3; // rdx
  int v4; // eax
  const GUID *v5; // r8
  const GUID *v6; // r9
  signed int LastError; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  signed int v10; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  signed int *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  AtmosCheck::RefreshSpatialAudioLicenseModelState(*(AtmosCheck **)(a1 + 16), 0LL);
  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(*(AtmosCheck **)(a1 + 16));
    v2 = *(_QWORD *)(a1 + 16);
    if ( *(_BYTE *)(v2 + 216) )
    {
      v4 = AtmosCheck::RegisterForShellWnfNotifications(*(AtmosCheck **)(a1 + 16));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E6,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v4);
      AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)(a1 + 16), 0, v5, v6);
    }
    else
    {
      v3 = *(void **)(v2 + 104);
      if ( v3
        && !RegisterWaitForSingleObject(
              (PHANDLE)(v2 + 112),
              v3,
              AtmosCheck::StaticClientAtmosCheckEventFired,
              (PVOID)v2,
              0xFFFFFFFF,
              0x18u) )
      {
        if ( (unsigned int)dword_1801B64F0 > 2 )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v14 = 0;
          v10 = LastError;
          v12 = &v10;
          v13 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D57B, v8, v9, 3u, &pData);
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + 98LL) = 1;
      }
    }
    AtmosCheck::UpdateLicenseRefreshTimer(*(PVOID *)(a1 + 16));
  }
}

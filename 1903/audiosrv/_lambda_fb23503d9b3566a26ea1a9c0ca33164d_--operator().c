/*
 * XREFs of _lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator() @ 0x18006A6E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fb23503d9b3566a26ea1a9c0ca33164d___::Run @ 0x18006B400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fb23503d9b3566a26ea1a9c0ca33164d___--Run.c)
 * Callees:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180043548 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800500B0 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18006A9B8 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013F864 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rcx
  bool *v3; // rdx
  AtmosCheck *v4; // rax
  const WCHAR *v5; // r8
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(AtmosCheck **)a1;
  v3 = *(bool **)(a1 + 24);
  if ( *((_BYTE *)v2 + 216) )
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckForAllEndpoints(v2, v3);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 98LL) && AtmosCheck::CheckInstalledAppServicesAvailable(*(AtmosCheck **)a1) )
      *(_BYTE *)(*(_QWORD *)a1 + 98LL) = 1;
  }
  else
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckInternalLegacy(v2, v3);
    if ( **(int **)(a1 + 16) >= 0 )
    {
      v4 = *(AtmosCheck **)a1;
      pvData = 0;
      v5 = L"AudioSrvLicenseResult";
      pcbData = 4;
      if ( !*((_BYTE *)v4 + 99) )
        v5 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v5,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        **(_DWORD **)(a1 + 8) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = pvData;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = pvData;
      }
      Microsoft::WRL::Wrappers::CriticalSection::Lock(
        (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 56LL),
        &lpCriticalSection);
      if ( *(_DWORD *)(*(_QWORD *)a1 + 184LL) == 8 )
        *(_BYTE *)(*(_QWORD *)a1 + 98LL) = 1;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 99LL) )
    AtmosCheck::UpdateLicenseRefreshTimer(*(AtmosCheck **)a1);
}

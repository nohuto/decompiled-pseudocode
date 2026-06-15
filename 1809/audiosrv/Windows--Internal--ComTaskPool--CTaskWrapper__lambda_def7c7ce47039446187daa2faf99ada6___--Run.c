/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___::Run @ 0x1800685C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800159D4 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___::Run(
        __int64 a1)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = AtmosCheck::RefreshSpatialAudioLicenseModelState(*(AtmosCheck **)(a1 + 16), 0LL);
  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    result = AtmosCheck::RegisterAppDeploymentNotifications(*(AtmosCheck **)(a1 + 16));
    v3 = *(AtmosCheck **)(a1 + 16);
    if ( *((_BYTE *)v3 + 184) )
      return AtmosCheck::PerformLicenseCheck(v3, 0);
  }
  return result;
}

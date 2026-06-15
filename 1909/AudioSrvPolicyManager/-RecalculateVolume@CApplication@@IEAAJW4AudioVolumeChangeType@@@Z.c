/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000E474
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E6E8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010B4C (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180013788 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 448) )
      CProcess::RecalculateVolume(v5, a2);
  }
  CApplication::NotifyVolumePolicyChange((CApplication *)a1);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

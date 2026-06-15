/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000ED58
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x18000ECC8 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x1800281C0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000EF38 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800100BC (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800101A4 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800102B8 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800140DC (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD24 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002585C (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this)
{
  int v2; // esi
  _QWORD *v3; // rdi
  CProcess *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = (CProcess *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*((_DWORD *)v4 + 112) )
      v2 += CProcess::GetActiveRenderStreamCount(v4, 2u);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v2 || (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
    {
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    }
  }
  else
  {
    CApplication::AddCategoryOverrideToProcesses(this, 4LL, 4LL, 1LL);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}

/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001CCBC
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x18000EC98 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEC0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x18001CDE0 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001008C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180010288 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025764 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025838 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  unsigned int v6; // r15d
  int v7; // edi
  BOOL v8; // r14d
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = *((_DWORD *)a2 + 53);
  v7 = 1;
  v8 = (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 0) && *((_DWORD *)a2 + 52)
    || (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
    && (unsigned int)CApplication::IsBackgroundAudioCapable(a2);
  if ( !a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
    v12 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v9 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v9 )
    {
      v10 = v9[2];
      v9 = (_QWORD *)*v9;
      if ( !*(_DWORD *)(v10 + 448) && *(_DWORD *)(v10 + 520) )
      {
        a3 = 1;
        break;
      }
    }
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    if ( !a3 )
      v7 = 0;
  }
  if ( !v8 || v7 )
    TsSessionIdRemoveActiveMediaApp(v6, a2);
  else
    TsSessionIdAddActiveMediaApp(v6, a2);
  if ( v5 )
    LeaveCriticalSection(v5);
}

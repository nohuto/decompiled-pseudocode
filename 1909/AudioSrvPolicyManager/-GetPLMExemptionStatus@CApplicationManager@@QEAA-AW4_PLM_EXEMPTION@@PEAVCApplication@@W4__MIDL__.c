/*
 * XREFs of ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001C3AC
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001C48C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000E584 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001008C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180010100 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180010174 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800101E8 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180010288 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetPLMExemptionStatus(__int64 a1, CApplication *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *((_DWORD *)a2 + 146) )
  {
    v6 = *((_DWORD *)a2 + 147);
  }
  else if ( dword_18003DE10[(int)CApplication::Category((__int64)a2)]
         && (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
         || (v6 = 1, a3)
         && ((unsigned int)CApplication::IsBackgroundAudioCapable(a2)
          && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
          && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1)
          && !(unsigned int)CApplication::HasBackgroundAudioTask(a2)
          || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2)) )
  {
    v6 = 2;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}

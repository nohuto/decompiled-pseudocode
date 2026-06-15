/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001C48C
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000FF30 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD34 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_SSSSSSS @ 0x180018078 (WPP_SF_SSSSSSS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180018608 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001C274 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001C3AC (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        const wchar_t **a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  int SoundLevel; // eax
  int v11; // r14d
  const wchar_t *v12; // r15
  const wchar_t *v13; // rax
  __int64 v14; // r11
  const wchar_t *v15; // rdx
  const wchar_t *v16; // r8
  const wchar_t *v17; // r9
  const wchar_t *v18; // r10

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  SoundLevel = CApplicationManager::GetSoundLevel((__int64)this, (CApplication *)a2);
  v11 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 142) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 143);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus((__int64)this, (CApplication *)a2, SoundLevel);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v12 = L"Not computed";
    if ( a4 )
      v12 = SoundLevelToString(*(_DWORD *)a4);
    v13 = SoundLevelToString(v11);
    WPP_SF_SSSSSSS(*(_QWORD *)(v14 + 16), (__int64)v15, (__int64)v16, a2[3], v13, v18, v12, v15, v17, v16);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}

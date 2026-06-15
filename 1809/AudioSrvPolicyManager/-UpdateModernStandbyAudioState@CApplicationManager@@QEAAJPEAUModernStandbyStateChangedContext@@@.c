/*
 * XREFs of ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJPEAUModernStandbyStateChangedContext@@@Z @ 0x180020730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001EBF8 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001EF3C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UpdateModernStandbyAudioState(
        CApplicationManager *this,
        struct ModernStandbyStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_DWORD *)this + 6) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids,
        *(_DWORD *)a2);
    }
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)a2, 3u);
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *(_DWORD *)a2, 0);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}

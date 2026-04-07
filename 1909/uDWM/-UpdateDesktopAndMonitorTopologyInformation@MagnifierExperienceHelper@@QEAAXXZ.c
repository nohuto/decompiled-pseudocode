/*
 * XREFs of ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800B554C
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x1800140C0 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBN@Z @ 0x1800B5220 (--0MagnifierExperienceHelper@@QEAA@AEBN@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(MagnifierExperienceHelper *this)
{
  unsigned __int64 v1; // xmm0_8

  v1 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444), 8).m128i_u64[0];
  *((double *)this + 1) = (double)SHIDWORD(v1);
  *(double *)this = (double)(int)v1;
  *((double *)this + 3) = (double)SHIDWORD(v1) * 0.5;
  *((_OWORD *)this + 2) = 0uLL;
  *((double *)this + 2) = (double)(int)v1 * 0.5;
}

/*
 * XREFs of ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x1800907C0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowList::GetColorizationParameters(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *a2)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // xmm0_8
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v4 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532), 8).m128i_u64[0];
  *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  *(_QWORD *)((char *)a2 + 12) = v4;
  *((_DWORD *)a2 + 5) = v3.m128i_i32[0];
  *((_DWORD *)a2 + 6) = v3.m128i_i32[1];
  *((_DWORD *)a2 + 7) = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
}

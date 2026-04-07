/*
 * XREFs of ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180085060
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800061C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x180083B38 (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTU.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008474C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierSyncApiMessage(
        struct _RTL_GENERIC_TABLE *a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        CMagnifier *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v9; // ebx
  int v13; // esi
  int v14; // eax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v13 = -2147023728;
  if ( dword_1800DEE98 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEE98);
    if ( dword_1800DEE98 == -1 )
    {
      dword_1800DEDE8 = -2147023728;
      Init_thread_footer(&dword_1800DEE98);
    }
  }
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1073741925 && a4 )
  {
    a6 = 0LL;
    *a8 = 44;
    v14 = CMagnifierControl::LookupAndValidateMagnifier(a1, *(_QWORD *)(a3 + 48), &a6);
    v9 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2147023728 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDE8, 1LL, v14, 0x1DBu);
        goto LABEL_14;
      }
      v9 = 0;
    }
    else
    {
      v13 = CMagnifier::OnCaptureRTBitsWorker(
              a6,
              *(_QWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 72),
              (const struct MAGN_UPDATE_TEXTURES_PARAM *)(a3 + 8),
              (struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *)a3);
    }
    if ( a7 )
      *a7 = v13;
    *(_DWORD *)a3 = 1073741926;
    *(_DWORD *)(a3 + 4) = v13;
  }
LABEL_14:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v9;
}

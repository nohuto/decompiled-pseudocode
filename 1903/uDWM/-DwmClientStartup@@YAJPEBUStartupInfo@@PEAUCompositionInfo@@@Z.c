/*
 * XREFs of ?DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x1800497E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180049890 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DwmClientStartup(const struct StartupInfo *a1, struct CompositionInfo *a2)
{
  struct CDesktopManager **v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  if ( dword_1800DEBF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEBF0);
    if ( dword_1800DEBF0 == -1 )
    {
      dword_1800DC070 = -2147024846;
      dword_1800DC074 = -2003302655;
      Init_thread_footer(&dword_1800DEBF0);
    }
  }
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = CDesktopManager::Create(a1, a2, v4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC070, 2u, v5, 0x4Cu, v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}

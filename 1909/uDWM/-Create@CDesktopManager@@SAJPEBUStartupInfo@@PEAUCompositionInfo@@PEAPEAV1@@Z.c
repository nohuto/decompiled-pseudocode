/*
 * XREFs of ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x1800438C4
 * Callers:
 *     ?DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x1800436B0 (-DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180043760 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::Create(
        const struct StartupInfo *a1,
        struct CompositionInfo *a2,
        struct CDesktopManager **a3)
{
  CDesktopManager *v5; // rax
  CDesktopManager *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = (CDesktopManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            800LL);
  if ( v5 )
    v6 = CDesktopManager::CDesktopManager(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = CDesktopManager::Initialize(v6, a1, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3ED4, 1u, v7, 0x613u, v10);
    }
    else
    {
      g_pdmInstance = v6;
      v6 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3ED4, 1u, -2147024882, 0x60Fu, v10);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v8;
}

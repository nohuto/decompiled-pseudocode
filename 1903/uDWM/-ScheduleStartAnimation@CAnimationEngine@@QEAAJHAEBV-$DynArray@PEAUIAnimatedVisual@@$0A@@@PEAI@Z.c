/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180007414
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180007ACC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002FA1C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A56E4 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A5AFC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800AE4DC (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180007510 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct IAnimatedVisual **v4; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rax
  struct IAnimatedVisual **v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r9d
  int started; // eax
  void *v16; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v9 = -2147024809;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v17 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 8LL * *(unsigned int *)(a3 + 24);
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      v10 = -1LL;
    v11 = (struct IAnimatedVisual **)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       v10);
    v12 = 0LL;
    v4 = v11;
    if ( v11 )
    {
      v13 = *(_DWORD *)(a3 + 24);
      if ( v13 )
      {
        do
        {
          v11[v12] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v12);
          v12 = (unsigned int)(v12 + 1);
          v13 = *(_DWORD *)(a3 + 24);
        }
        while ( (unsigned int)v12 < v13 );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, a2, v11, v13, a4);
      v9 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xA3u, v16);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Du, v16);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct IAnimatedVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v9;
}

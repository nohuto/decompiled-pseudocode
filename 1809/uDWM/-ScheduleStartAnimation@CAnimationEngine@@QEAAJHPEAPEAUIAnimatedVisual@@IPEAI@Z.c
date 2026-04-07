/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180030A20
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180030924 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800AC6F0 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180030DD0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180030E20 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qdq @ 0x18009E350 (McTemplateU0qdq.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rax
  int started; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  CDesktopManager *v15; // rcx
  int v17; // eax
  unsigned int v18; // eax
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v20; // [rsp+60h] [rbp+8h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  v20 = 0LL;
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_WORD *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)v11 = &CAnimationEngine::CTransitionVisualSet::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 16) = v10;
    *(_DWORD *)(v11 + 28) = a2;
  }
  v20 = (CBaseObject *)v11;
  if ( v11 )
  {
    started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
    if ( started < 0 )
    {
      v18 = 130;
    }
    else
    {
      v13 = *((_DWORD *)this + 16);
      v14 = v13 + 1;
      started = v13 + 1 < v13 ? 0x80070216 : 0;
      if ( v13 + 1 < v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 15) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v20);
        started = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v13) = v20;
        *((_DWORD *)this + 16) = v14;
      }
      if ( started < 0 )
      {
        v18 = 131;
      }
      else
      {
        v15 = CDesktopManager::s_pDesktopManagerInstance;
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(v15);
        if ( started >= 0 )
          goto LABEL_12;
        v18 = 135;
      }
    }
  }
  else
  {
    started = -2147024882;
    v18 = 128;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, v18);
  if ( v20 )
    CBaseObject::Release(v20);
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return (unsigned int)started;
}

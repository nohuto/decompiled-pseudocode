/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800AA16C
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000491C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180030924 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180030DD0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18003B134 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AA0C4 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  __int64 v6; // rdi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // rsi
  int started; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int128 v14; // xmm1
  struct tagRECT si128; // xmm6
  char v16; // cl
  int v17; // edx
  int v18; // eax
  __int64 v20; // [rsp+38h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+40h] [rbp-21h] BYREF
  __int128 v22; // [rsp+48h] [rbp-19h] BYREF
  int v23; // [rsp+58h] [rbp-9h]
  int v24; // [rsp+5Ch] [rbp-5h]
  int v25; // [rsp+60h] [rbp-1h]
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = 0LL;
  *((_BYTE *)this + 32) = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0LL;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( v7 )
  {
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
    if ( started >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              72LL);
      v6 = v11;
      if ( v11 )
      {
        v12 = *((_QWORD *)this + 3);
        v13 = *((_DWORD *)a2 + 3);
        *(_DWORD *)(v11 + 16) = 1;
        *(_QWORD *)v11 = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
        *(_QWORD *)(v11 + 8) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
        *(_DWORD *)(v11 + 32) = v13;
        *(_OWORD *)(v11 + 40) = *(_OWORD *)(v12 + 616);
        v14 = *(_OWORD *)(v12 + 616);
        *(_QWORD *)(v11 + 24) = v12;
        *(_OWORD *)(v11 + 56) = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        if ( *((_DWORD *)a2 + 3) == 5 )
        {
          si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
          v16 = *(_BYTE *)(*((_QWORD *)this + 3) + 632LL);
          rc = si128;
          v17 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60) * 81.0);
          if ( !v16 )
            v17 = -v17;
          OffsetRect(&rc, v17, 0);
          *(struct tagRECT *)(v6 + 56) = rc;
          *(struct tagRECT *)(v6 + 40) = si128;
        }
        v20 = v6;
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v22, 8u, 1, &v20);
        started = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
        if ( started >= 0 )
        {
          started = CAnimationEngine::ScheduleStartAnimation(v8, 74, (__int64)&v22, (unsigned int *)this + 9);
          if ( started >= 0 )
          {
            started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
            if ( started >= 0 )
              goto LABEL_25;
            v10 = 58;
          }
          else
          {
            v10 = 56;
          }
        }
        else
        {
          v10 = 52;
        }
      }
      else
      {
        started = -2147024882;
        v10 = 39;
      }
    }
    else
    {
      v10 = 38;
    }
  }
  else
  {
    started = -2147024882;
    v10 = 37;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v10);
  CAccentTransition::CleanupAnimation(this);
LABEL_25:
  if ( v8 )
    CAnimationEngine::Release(v8);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  DynArrayImpl<0>::~DynArrayImpl<0>(&v22);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)started;
}

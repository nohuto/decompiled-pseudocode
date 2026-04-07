/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A56E4
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800A5940 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800A5A60 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A5EF4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180005934 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800073E8 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180007414 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180007CB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A550C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // r14
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int started; // eax
  int v11; // eax
  int v12; // r8d
  void *v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  unsigned int v18; // [rsp+44h] [rbp-Ch]
  unsigned int v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF

  v17 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual((struct CAnimatedTransitionVisual **)this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x16Eu);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v20 = *((_QWORD *)this + 39);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8, 1, &v20);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 < 0 )
    {
      v15 = 370;
LABEL_10:
      v6 = v3;
      goto LABEL_11;
    }
    v7 = *((_QWORD *)this + 39);
    *(_DWORD *)(v7 + 736) = 76;
    *(_DWORD *)(v7 + 740) = 2;
    v20 = *((_QWORD *)this + 40);
    if ( v19 + 1 < v19 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_22:
      v15 = 373;
      goto LABEL_10;
    }
    if ( v19 + 1 > v18 )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8, 1, &v20);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
      if ( v3 < 0 )
        goto LABEL_22;
    }
    else
    {
      v8 = v19++;
      *(_QWORD *)(v16 + 8 * v8) = v20;
    }
    v9 = *((_QWORD *)this + 40);
    *(_DWORD *)(v9 + 736) = 76;
    *(_DWORD *)(v9 + 740) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v16, (unsigned int *)this + 90);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CScreenRotation *)((char *)this + 280));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 380) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v13 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v13 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)v13, v12);
        goto LABEL_31;
      }
      v15 = 379;
    }
    else
    {
      v15 = 378;
    }
    v6 = started;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v15);
LABEL_31:
    CAnimationEngine::Release(v4);
    goto LABEL_32;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x170u);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  return (unsigned int)v3;
}

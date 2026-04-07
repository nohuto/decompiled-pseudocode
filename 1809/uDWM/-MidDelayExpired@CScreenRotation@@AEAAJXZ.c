/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A0F24
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800A1170 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800A1290 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A1720 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180030924 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18003B134 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A0D44 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
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
  int v9; // eax
  __int64 v10; // rax
  int started; // eax
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
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual(this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x16Fu);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v20 = *((_QWORD *)this + 39);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, &v20);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 39);
      *(_DWORD *)(v7 + 736) = 76;
      *(_DWORD *)(v7 + 740) = 2;
      v20 = *((_QWORD *)this + 40);
      v3 = v19 + 1 < v19 ? 0x80070216 : 0;
      if ( v19 + 1 >= v19 )
      {
        if ( v19 + 1 > v18 )
        {
          v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, &v20);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
        }
        else
        {
          v8 = v19++;
          *(_QWORD *)(v16 + 8 * v8) = v20;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xB5u);
      }
      if ( v3 >= 0 )
      {
        v10 = *((_QWORD *)this + 40);
        *(_DWORD *)(v10 + 736) = 76;
        *(_DWORD *)(v10 + 740) = 3;
        started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v16, (unsigned int *)this + 90);
        v3 = started;
        if ( started >= 0 )
        {
          started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                      v4,
                      (CScreenRotation *)((char *)this + 280));
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
          v15 = 380;
        }
        else
        {
          v15 = 379;
        }
        v6 = started;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v15);
LABEL_31:
        CAnimationEngine::Release(v4);
        goto LABEL_32;
      }
      v15 = 374;
    }
    else
    {
      v15 = 371;
    }
    v6 = v3;
    goto LABEL_11;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x171u);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  return (unsigned int)v3;
}

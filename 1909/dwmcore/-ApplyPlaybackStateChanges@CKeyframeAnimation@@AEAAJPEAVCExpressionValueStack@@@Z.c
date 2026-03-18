/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A6A50
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001BE20 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A78CC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x1800A7D68 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800A7DBC (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A8994 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A8BC4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801E02C4 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801E0558 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E6808 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // cl
  char v10; // al
  char v11; // cl
  __int64 v12; // rcx
  struct CChannelContext *v13; // rdx
  __int64 v14; // rax
  CExpressionManager *v15; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v17; // rax
  float v18; // xmm1_4
  __int64 v19; // rcx
  float v20; // xmm1_4
  __int64 v21; // rax
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebp
  signed int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // rcx
  LONGLONG v34; // rax
  float v35; // xmm2_4
  signed int v36; // eax
  __int64 v37; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v39; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_DWORD *)this + 131);
  v6 = *((_DWORD *)this + 130);
  if ( v5 != v6 )
  {
    if ( v6 )
    {
      if ( !v5 )
      {
        v24 = *((_QWORD *)this + 22);
        if ( v24 && *(_QWORD *)(v24 + 16) )
        {
          v25 = *((_DWORD *)a2 + 4);
          v26 = CKeyframeAnimation::Reset(this, 1, a2);
          v7 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x34Du, 0LL);
            return v7;
          }
          v28 = *((_DWORD *)a2 + 4);
          if ( v28 == v25 + 1 )
          {
            v29 = CBaseExpression::SetOutputValue(
                    this,
                    (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(v28 - 1)));
            v7 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x35Bu, 0LL);
              return v7;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v31 = *((_QWORD *)this + 52);
        if ( v31 )
        {
          if ( (*(_BYTE *)(v31 + 112) & 4) != 0 )
          {
            v32 = CBaseExpression::NotifyAnimationCompleted(this);
            v7 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x364u, 0LL);
              return v7;
            }
          }
        }
        goto LABEL_15;
      }
      if ( v5 == 2 )
      {
LABEL_14:
        CKeyframeAnimation::Pause(this);
LABEL_15:
        *((_BYTE *)this + 540) &= ~1u;
        v6 = *((_DWORD *)this + 131);
        if ( v6 == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 416LL) |= 2u;
          *((_BYTE *)this + 540) |= 1u;
          v6 = *((_DWORD *)this + 131);
        }
        *((_DWORD *)this + 130) = v6;
        goto LABEL_2;
      }
    }
    else if ( v5 )
    {
      CKeyframeAnimation::Play(this, a2);
      v12 = *((_QWORD *)this + 2);
      v13 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v14 = *(_QWORD *)(v12 + 496) - *((_QWORD *)this + 57);
      v15 = *(CExpressionManager **)(v12 + 240);
      v39 = v14;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v15, v13);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v39) * *((float *)this + 122))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 131) != 2 )
        goto LABEL_15;
      goto LABEL_14;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 58) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
    goto LABEL_15;
  }
LABEL_2:
  if ( v6 )
  {
    v9 = *((_BYTE *)this + 540);
    v10 = v9 & 4;
    v11 = v9 & 2;
    if ( v11 && v10 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
    if ( v11 )
    {
      v17 = *((_QWORD *)this + 60);
      v18 = (float)(int)v17;
      if ( v17 < 0 )
        v18 = v18 + 1.8446744e19;
      v19 = *((_QWORD *)this + 59);
      v20 = v18 / 10000000.0;
      v21 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
      if ( v19 != v21 )
      {
        v34 = (unsigned __int64)(v21 - v19) / g_qpcFrequency.QuadPart;
        v35 = (float)(int)v34;
        if ( v34 < 0 )
          v35 = v35 + 1.8446744e19;
        v20 = v20 + v35;
      }
      v22 = CKeyframeAnimation::TimeSeek(this, v20);
      v7 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3ADu, 0LL);
        return v7;
      }
      *((_QWORD *)this + 58) = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
    }
    else if ( v10 )
    {
      v36 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 123));
      v7 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3B5u, 0LL);
        return v7;
      }
    }
  }
  return 0;
}

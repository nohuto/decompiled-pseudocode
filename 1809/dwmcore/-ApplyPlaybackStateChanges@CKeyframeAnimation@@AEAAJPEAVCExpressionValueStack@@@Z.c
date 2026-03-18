/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001AE40 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BD68 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053DB8 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x180054104 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x180054158 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800545C0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18005479C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801A3E70 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801A4100 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  struct CChannelContext *v7; // rdx
  __int64 v8; // rax
  CExpressionManager *v9; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edi
  int v18; // ecx
  __int64 v19; // rcx
  CExpressionValue *v20; // rax
  const struct CExpressionValue *v21; // rdi
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  char v27; // cl
  char v28; // al
  char v29; // cl
  __int64 v30; // rax
  float v31; // xmm1_4
  __int64 v32; // rcx
  float v33; // xmm1_4
  __int64 v34; // rax
  LONGLONG v35; // rax
  float v36; // xmm0_4
  int v37; // eax
  unsigned int v38; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  _BYTE v42[80]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v44; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 127);
  v5 = *((_DWORD *)this + 126);
  if ( v4 != v5 )
  {
    if ( v5 )
    {
      if ( !v4 )
      {
        v11 = *((_QWORD *)this + 22);
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 16);
        else
          v12 = 0LL;
        if ( v12 )
        {
          v13 = *((_DWORD *)a2 + 4);
          v14 = CKeyframeAnimation::Reset(this, 1, a2);
          v17 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x350u);
            return v17;
          }
          v18 = *((_DWORD *)a2 + 4);
          if ( v18 == v13 + 1 )
          {
            v19 = (unsigned int)(v18 - 1);
            if ( (unsigned int)v19 < *((_DWORD *)a2 + 12) )
            {
              v21 = (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v19);
            }
            else
            {
              v20 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
              v21 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
              CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v20);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
            }
            v22 = CBaseExpression::SetOutputValue(this, v21, v16);
            v17 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x35Eu);
              return v17;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v24 = *((_QWORD *)this + 49);
        if ( v24 )
        {
          if ( (*(_BYTE *)(v24 + 112) & 4) != 0 )
          {
            v25 = CBaseExpression::NotifyAnimationCompleted(this);
            v17 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x367u);
              return v17;
            }
          }
        }
        goto LABEL_30;
      }
      if ( v4 == 2 )
      {
LABEL_28:
        CKeyframeAnimation::Pause(this);
LABEL_30:
        *((_BYTE *)this + 524) &= ~1u;
        v5 = *((_DWORD *)this + 127);
        if ( v5 == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 416LL) |= 2u;
          *((_BYTE *)this + 524) |= 1u;
          v5 = *((_DWORD *)this + 127);
        }
        *((_DWORD *)this + 126) = v5;
        goto LABEL_33;
      }
    }
    else if ( v4 )
    {
      CKeyframeAnimation::Play(this, a2);
      v6 = *((_QWORD *)this + 2);
      v7 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v8 = *(_QWORD *)(v6 + 480) - *((_QWORD *)this + 55);
      v9 = *(CExpressionManager **)(v6 + 224);
      v44 = v8;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v9, v7);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v44) * *((float *)this + 118))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 127) != 2 )
        goto LABEL_30;
      goto LABEL_28;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 56) = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
    goto LABEL_30;
  }
LABEL_33:
  if ( v5 )
  {
    v27 = *((_BYTE *)this + 524);
    v28 = v27 & 4;
    v29 = v27 & 2;
    if ( v29 && v28 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    if ( v29 )
    {
      v30 = *((_QWORD *)this + 58);
      v31 = (float)(int)v30;
      if ( v30 < 0 )
        v31 = v31 + 1.8446744e19;
      v32 = *((_QWORD *)this + 57);
      v33 = v31 / 10000000.0;
      v34 = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
      if ( v32 != v34 )
      {
        v35 = (unsigned __int64)(v34 - v32) / g_qpcFrequency.QuadPart;
        v36 = (float)(int)v35;
        if ( v35 < 0 )
          v36 = v36 + 1.8446744e19;
        v33 = v33 + v36;
      }
      v37 = CKeyframeAnimation::TimeSeek(this, v33);
      v17 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3B0u);
        return v17;
      }
      *((_QWORD *)this + 56) = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
    }
    else if ( v28 )
    {
      v40 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 119));
      v17 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x3B8u);
        return v17;
      }
    }
  }
  return 0;
}

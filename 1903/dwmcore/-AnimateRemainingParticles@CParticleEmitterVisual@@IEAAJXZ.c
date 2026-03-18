/*
 * XREFs of ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB9E8
 * Callers:
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ED910 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800C0480 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CKeyframeAnimation@@SAPEAX_K@Z @ 0x1800D399C (--2CKeyframeAnimation@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 */

__int64 __fastcall CParticleEmitterVisual::AnimateRemainingParticles(CParticleEmitterVisual *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  float v4; // xmm6_4
  float *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  CKeyframeAnimation *v10; // rax
  struct CResource *v11; // rsi
  float v12; // xmm0_4
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-F8h]
  __int64 v19; // [rsp+28h] [rbp-F0h]
  __int64 v20; // [rsp+30h] [rbp-E8h]
  __int64 v21; // [rsp+38h] [rbp-E0h]
  __int64 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  _DWORD v26[24]; // [rsp+80h] [rbp-98h] BYREF

  v1 = *((_DWORD *)this + 256);
  v2 = 0;
  v4 = 0.0;
  if ( v1 )
  {
    v5 = (float *)*((_QWORD *)this + 98);
    v6 = v1;
    v7 = *((_QWORD *)this + 95) - (_QWORD)v5;
    do
    {
      v8 = *v5;
      v9 = *v5 * *(float *)((char *)v5 + v7);
      ++v5;
      v4 = fmaxf(v4, v8 - v9);
      --v6;
    }
    while ( v6 );
    if ( v4 > 0.0 )
    {
      v10 = (CKeyframeAnimation *)CKeyframeAnimation::operator new();
      if ( v10 )
        v11 = CKeyframeAnimation::CKeyframeAnimation(v10, *((struct CComposition **)this + 2));
      else
        v11 = 0LL;
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 784));
      *((_QWORD *)this + 784) = 0LL;
      v12 = *((float *)this + 1532);
      v26[1] = 0;
      v26[13] = 0;
      *(float *)v26 = v12;
      v26[6] = 3;
      v26[18] = 1;
      *(float *)&v26[12] = v12 + v4;
      *(float *)&v26[20] = v12 + v4;
      v13 = CKeyframeAnimation::Initialize(
              (__int64)v11,
              this,
              53,
              0x12u,
              v18,
              v19,
              v20,
              v21,
              v22,
              1.0,
              v23,
              0.0,
              v24,
              v25,
              (__int64)v26);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x72u, 0LL);
        goto LABEL_12;
      }
      *((_QWORD *)this + 784) = v11;
      v15 = CResource::RegisterNotifier(this, v11);
      v2 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x76u, 0LL);
LABEL_12:
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 784));
        *((_QWORD *)this + 784) = 0LL;
      }
    }
  }
  return v2;
}

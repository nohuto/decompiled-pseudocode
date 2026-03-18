/*
 * XREFs of ?StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ @ 0x1801C75C8
 * Callers:
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801C4964 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18006B6A8 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 */

__int64 __fastcall CParticleEmitter::StartEmitterTimerAnimation(struct CComposition **this)
{
  struct CComposition *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __m128 v6; // xmm1
  __m128 v7; // xmm1
  CKeyframeAnimation *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-E0h]
  unsigned int v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+88h] [rbp-80h] BYREF
  __m128 v21; // [rsp+90h] [rbp-78h]
  _DWORD v22[20]; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v23; // [rsp+F8h] [rbp-10h]

  CResource::UnRegisterNotifierInternal((CResource *)this, this[718]);
  this[718] = 0LL;
  v2 = *this;
  v20 = 0;
  v3 = (*((__int64 (__fastcall **)(struct CComposition **, _QWORD, __int64, int *))v2 + 11))(this, 0LL, 18LL, &v20);
  v5 = v3;
  if ( v3 < 0 )
  {
    v12 = 835;
    goto LABEL_11;
  }
  v6 = (__m128)*((unsigned int *)this + 1417);
  v6.m128_f32[0] = v6.m128_f32[0] + *((float *)this + 1393);
  v22[0] = 0;
  v22[1] = 0;
  v22[13] = 0;
  v22[6] = 3;
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v22[12] = v7.m128_i32[0];
  v21 = v7;
  v22[18] = 1;
  v23 = v7;
  v8 = (CKeyframeAnimation *)WPF::ProcessHeapImpl::AllocClear(0x210uLL);
  if ( v8 )
    v8 = CKeyframeAnimation::CKeyframeAnimation(v8, this[2]);
  this[718] = v8;
  if ( !v8 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x352u);
LABEL_12:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[718]);
    this[718] = 0LL;
    return v5;
  }
  v3 = CKeyframeAnimation::Initialize(
         (__int64)v8,
         (struct CResource *)this,
         0,
         0x12u,
         v11,
         v13,
         v14,
         v15,
         v16,
         1.0,
         v17,
         0.0,
         v18,
         v19,
         (__int64)v22);
  v5 = v3;
  if ( v3 < 0 )
  {
    v12 = 866;
    goto LABEL_11;
  }
  v3 = CResource::RegisterNotifier((CResource *)this, this[718]);
  v5 = v3;
  if ( v3 < 0 )
  {
    v12 = 868;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v12);
    goto LABEL_12;
  }
  return v5;
}

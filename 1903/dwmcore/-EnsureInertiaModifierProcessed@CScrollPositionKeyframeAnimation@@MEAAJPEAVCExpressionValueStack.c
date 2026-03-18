/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180208190
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180208534 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x1802106EC (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v4; // al
  struct CExpressionValueStack *v5; // rsi
  __int64 v7; // rdi
  char v8; // r12
  __int64 v9; // r14
  double v10; // xmm0_8
  char v11; // r15
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v16; // xmm0_4
  int v17; // xmm0_4
  const char *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-89h] BYREF
  int v23; // [rsp+40h] [rbp-81h]
  __int64 v24; // [rsp+48h] [rbp-79h] BYREF
  int v25; // [rsp+50h] [rbp-71h]
  __int64 v26; // [rsp+88h] [rbp-39h]
  int v27; // [rsp+90h] [rbp-31h]
  char v28; // [rsp+94h] [rbp-2Dh]
  _DWORD v29[16]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+17h]
  int v31; // [rsp+E0h] [rbp+1Fh]
  char v32; // [rsp+E4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v4 = *((_BYTE *)this + 712);
  v5 = a2;
  if ( (v4 & 4) != 0 )
    return 0LL;
  *((_BYTE *)this + 712) = v4 | 4;
  memset_0(v29, 0, sizeof(v29));
  v7 = 0LL;
  v8 = 0;
  v30 = 0LL;
  v31 = 18;
  v32 = 0;
  memset_0(&v24, 0, 0x40uLL);
  v9 = 0LL;
  v10 = *((float *)this + 180);
  v27 = 18;
  v11 = 0;
  v26 = 0LL;
  v28 = 0;
  if ( (float)COERCE_DOUBLE(*(_QWORD *)&v10 & _xmm) < 0.0000011920929 )
  {
LABEL_6:
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 181)) & _xmm) >= 0.0000011920929 )
    {
      v14 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, v5, a3, 0LL, 1, &v24);
      v13 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
          (const char *)(unsigned int)v14);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        goto LABEL_10;
      }
      v11 = v28;
      v9 = v26;
    }
    if ( v8 || v11 )
    {
      CScrollPositionKeyframeAnimation::GetNaturalEndpoint(this, &v22);
      if ( v8 && v31 == 18 )
      {
        v16 = v29[0];
        *((_BYTE *)this + 712) |= 8u;
        LODWORD(v22) = v16;
      }
      if ( v11 && v27 == 18 )
      {
        v17 = v24;
        *((_BYTE *)this + 712) |= 8u;
        HIDWORD(v22) = v17;
      }
      if ( (*((_BYTE *)this + 712) & 8) != 0 )
      {
        memset_0(&v24, 0, 0x40uLL);
        v19 = *((_QWORD *)this + 45);
        v26 = 0LL;
        v25 = v23;
        v20 = (unsigned int)(*(_DWORD *)(v19 + 112) - 1);
        v27 = 52;
        v24 = v22;
        v28 = 1;
        v21 = *(_DWORD **)(*(_QWORD *)(v19 + 104) + 24 * v20 + 8);
        if ( v21[5] != 1 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x6F,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v18);
          __debugbreak();
        }
        if ( v21[4] != 52 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x72,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v18);
          __debugbreak();
        }
        CExpressionValue::CopyFrom((CExpressionValue *)(v21 + 6), (const struct CExpressionValue *)&v24);
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
  v12 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, v5, a3, 0LL, 0, v29);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v8 = v32;
    v7 = v30;
    v5 = a2;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
    (const char *)(unsigned int)v12);
  v7 = v30;
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v13;
}

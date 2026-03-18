/*
 * XREFs of ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18020EFDC
 * Callers:
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180206AA0 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180206FC0 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801D350C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::TryProcessInertiaModifier(
        __int64 a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        const char *a4,
        int a5,
        _DWORD *a6)
{
  CConditionalExpression *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v10; // rax
  float v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+20h] BYREF

  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x7B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        a4);
      __debugbreak();
    }
    v6 = *(CConditionalExpression **)(*(_QWORD *)(a1 + 544) + 8LL * a5 + 360);
  }
  else
  {
    v6 = *(CConditionalExpression **)(*(_QWORD *)(a1 + 544) + 8LL * a5 + 376);
  }
  LOBYTE(v13) = 0;
  if ( v6 )
  {
    v11[0] = 0.0;
    v7 = CConditionalExpression::ProcessConditionalExpression(v6, a2, a3, 0, (bool *)&v13, v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    if ( (_BYTE)v13 )
    {
      v10 = a6;
      *a6 = LODWORD(v11[0]);
      v10[18] = 18;
      *((_BYTE *)v10 + 76) = 1;
    }
  }
  return 0LL;
}

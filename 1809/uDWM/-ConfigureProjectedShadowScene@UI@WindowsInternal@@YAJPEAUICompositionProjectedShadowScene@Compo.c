/*
 * XREFs of ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadowScene@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800B02D0
 * Callers:
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800B098C (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowsInternal::UI::ConfigureProjectedShadowScene(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v3 = -2147024809;
      v4 = 39LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"internal\\onecoreuapshell\\inc\\ProjectedShadowSceneHelpers.h",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 30LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"internal\\onecoreuapshell\\inc\\ProjectedShadowSceneHelpers.h",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 31LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 32LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 33LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 34LL;
      goto LABEL_18;
    }
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v3 < 0 )
    {
      v4 = 35LL;
      goto LABEL_29;
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 21LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 22LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 23LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 24LL;
      goto LABEL_18;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    if ( v5 < 0 )
    {
      v6 = 25LL;
      goto LABEL_18;
    }
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v3 < 0 )
    {
      v4 = 26LL;
      goto LABEL_29;
    }
  }
  return 0LL;
}

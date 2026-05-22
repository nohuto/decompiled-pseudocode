/*
 * XREFs of ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800D2AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800D2834 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TapProcessor::OnInput(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rcx
  unsigned __int16 v8; // ax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)a4 = 4;
  v5 = *((_QWORD *)a4 + 2);
  if ( v5 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v5 + 16LL))(v5, a2, a3);
  }
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 10)) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)a4);
    JUMPOUT(0x1800D2BF0LL);
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 70) & 1) != 0 )
    {
      v8 = *((_WORD *)a2 + 18);
      if ( v8 == 3 || !v8 || v8 >= 7u )
      {
        if ( *((_BYTE *)this + 80) )
        {
          v9 = (__int64 *)*((_QWORD *)this + 8);
          v12 = 4LL;
          v10 = *v9;
          v13 = 0;
          (*(void (__fastcall **)(__int64 *, __int64 *))(v10 + 32))(v9, &v12);
        }
      }
    }
  }
  else if ( *((_DWORD *)a2 + 12) > 1u
         || ((*(void (__fastcall **)(_QWORD, struct InputInfo *, struct InputContext *))(**((_QWORD **)this + 7) + 24LL))(
               *((_QWORD *)this + 7),
               a2,
               a3),
             *((_DWORD *)this + 21) == 2) )
  {
    *(_DWORD *)a4 = 0;
    TapProcessor::ResetAndInitializeInteractionContext(this);
  }
  return 0LL;
}

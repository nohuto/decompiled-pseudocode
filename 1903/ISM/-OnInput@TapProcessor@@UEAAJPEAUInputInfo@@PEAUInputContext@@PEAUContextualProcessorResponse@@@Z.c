/*
 * XREFs of ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180108D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x180108ECC (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::OnInput(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a4 = 4;
  v5 = *((_QWORD *)a4 + 2);
  if ( v5 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v5 + 16LL))(v5, a2, a3);
  }
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 8)) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      184LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( (*((_BYTE *)a2 + 70) & 1) != 0 )
    {
      v9 = *((_WORD *)a2 + 18);
      if ( v9 == 3 || !v9 || v9 >= 7u )
      {
        if ( *((_BYTE *)this + 64) )
        {
          v10 = (__int64 *)*((_QWORD *)this + 6);
          v14 = 0;
          v11 = *v10;
          v13 = 4LL;
          (*(void (__fastcall **)(__int64 *, __int64 *, struct InputContext *))(v11 + 32))(v10, &v13, a3);
        }
      }
    }
  }
  else
  {
    v8 = *((unsigned int *)a2 + 53);
    if ( (unsigned int)v8 > 1
      || (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 7), 1LL, v8, (char *)a2 + 216) < 0
      || *((_DWORD *)this + 17) == 2 )
    {
      *(_DWORD *)a4 = 0;
      TapProcessor::ResetAndInitializeInteractionContext(this);
    }
  }
  return 0LL;
}

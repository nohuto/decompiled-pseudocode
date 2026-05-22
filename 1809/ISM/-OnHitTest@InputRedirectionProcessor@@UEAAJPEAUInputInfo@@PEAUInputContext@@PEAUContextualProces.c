/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800D15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1800D1E84 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v6; // edi
  _DWORD *v8; // rcx
  __int64 i; // rbx
  InputRedirectionTarget *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a4 = 0;
  v18 = 0LL;
  v6 = *(_DWORD *)a2;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         *((unsigned int *)a2 + 1),
         &v18) >= 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 10);
    if ( v8 != *((_DWORD **)this + 11) )
    {
      while ( (*(_DWORD *)(v18 + 4) & *v8) == 0 )
      {
        v8 += 4;
        if ( v8 == *((_DWORD **)this + 11) )
          goto LABEL_7;
      }
      v6 = *(_DWORD *)(v18 + 4);
    }
  }
LABEL_7:
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (v6 & *(_DWORD *)i) != 0 )
    {
      v10 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v10) )
      {
        if ( v18 )
          v11 = *(_DWORD *)(v18 + 12);
        else
          v11 = *((_DWORD *)a2 + 128);
        if ( *((_DWORD *)v10 + 16) != v11 )
        {
          v12 = *((_QWORD *)a4 + 1);
          if ( v12 )
          {
            *((_QWORD *)a4 + 1) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          v13 = (**(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v10)(
                  v10,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  (char *)a4 + 8);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x17E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\sys"
                       "tem\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v13);
            JUMPOUT(0x1800D1756LL);
          }
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 32LL))(v10) != 0)
                        + 2;
        }
      }
      else
      {
        v14 = *((_QWORD *)this + 11);
        v15 = i + 16;
        if ( v15 != v14 )
        {
          do
          {
            *(_DWORD *)(v15 - 16) = *(_DWORD *)v15;
            *(_QWORD *)(v15 - 8) = *(_QWORD *)(v15 + 8);
            v15 += 16LL;
          }
          while ( v15 != v14 );
          v14 = *((_QWORD *)this + 11);
        }
        *((_QWORD *)this + 11) = v14 - 16;
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
  }
  return 0LL;
}

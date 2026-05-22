/*
 * XREFs of ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800D1760
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1800D1E84 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnFocusRequest(
        InputRedirectionProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 i; // rbx
  InputRedirectionTarget *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a4 = 0;
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (*((_DWORD *)a2 + 1) & *(_DWORD *)i) != 0 )
    {
      v8 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v8) )
      {
        if ( *((_DWORD *)v8 + 16) != *((_DWORD *)a2 + 3) )
        {
          v9 = *((_QWORD *)a4 + 1);
          if ( v9 )
          {
            *((_QWORD *)a4 + 1) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          v10 = (**(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v8)(
                  v8,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  (char *)a4 + 8);
          if ( v10 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1B0,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\sys"
                       "tem\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v10);
            JUMPOUT(0x1800D188BLL);
          }
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v8 + 32LL))(v8) != 0)
                        + 2;
        }
      }
      else
      {
        v11 = *((_QWORD *)this + 11);
        v12 = i + 16;
        if ( v12 != v11 )
        {
          do
          {
            *(_DWORD *)(v12 - 16) = *(_DWORD *)v12;
            *(_QWORD *)(v12 - 8) = *(_QWORD *)(v12 + 8);
            v12 += 16LL;
          }
          while ( v12 != v11 );
          v11 = *((_QWORD *)this + 11);
        }
        *((_QWORD *)this + 11) = v11 - 16;
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return 0LL;
    }
  }
  return 0LL;
}

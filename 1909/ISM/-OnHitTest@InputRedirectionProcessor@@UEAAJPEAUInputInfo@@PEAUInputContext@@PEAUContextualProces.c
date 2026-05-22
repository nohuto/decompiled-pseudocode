/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180106F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801071AC (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x180107738 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v6; // esi
  _DWORD *v8; // rcx
  __int64 i; // rbx
  InputRedirectionTarget *v10; // rsi
  int v11; // eax
  __int64 (__fastcall *v12)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 0;
  v16 = 0LL;
  v6 = *(_DWORD *)a2;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         *((unsigned int *)a2 + 1),
         &v16) >= 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 10);
    if ( v8 != *((_DWORD **)this + 11) )
    {
      while ( (*(_DWORD *)(v16 + 4) & *v8) == 0 )
      {
        v8 += 4;
        if ( v8 == *((_DWORD **)this + 11) )
          goto LABEL_7;
      }
      v6 = *(_DWORD *)(v16 + 4);
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
        if ( v16 )
          v11 = *(_DWORD *)(v16 + 16);
        else
          v11 = *((_DWORD *)a2 + 11);
        if ( *((_DWORD *)v10 + 16) != v11 )
        {
          v12 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v10;
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)a4 + 1);
          v13 = v12(v10, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              382LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\sys"
                       "tem\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v13);
            __debugbreak();
          }
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 32LL))(v10) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase((char *)this + 80, &v17, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
  }
  return 0LL;
}

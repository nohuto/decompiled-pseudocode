/*
 * XREFs of _lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::operator() @ 0x1802CFE6C
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::Run @ 0x1802D1D50 (XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18015FF10 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  char **v6; // rbx
  char *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+18h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 232LL);
  AcquireSRWLockExclusive(v4);
  v11 = v4;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v5 = (**a2)(a2, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, &v9);
  if ( v5 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL))(v9);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v5);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v6 = *(char ***)(a1 + 8);
  v7 = v6[26];
  if ( v6[27] == v7 )
  {
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
      v6 + 25,
      v7,
      (__int64 *)&v10);
  }
  else
  {
    *(_QWORD *)v7 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v7);
    v6[26] += 8;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

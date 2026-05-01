/*
 * XREFs of _lambda_37665b47845c81d82a3f5e49d766d167_::operator() @ 0x180259B90
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___::Run @ 0x18025B2F0 (XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1802595A0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_37665b47845c81d82a3f5e49d766d167_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 *v7; // rdx
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
      269LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v5);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v6 = *(_QWORD **)(a1 + 8);
  v7 = (__int64 *)v6[26];
  if ( (__int64 *)v6[27] == v7 )
  {
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
      v6 + 25,
      v7,
      (__int64 *)&v10);
  }
  else
  {
    *v7 = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
    v6[26] += 8LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

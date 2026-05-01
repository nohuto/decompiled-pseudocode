/*
 * XREFs of _lambda_15697834fe23e2b75c1d0ea3471583fc_::operator() @ 0x180174340
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_15697834fe23e2b75c1d0ea3471583fc___::Invoke @ 0x180175A70 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_15697834fe23e2b75c_ea_180175A70.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_15697834fe23e2b75c1d0ea3471583fc_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (**a2)(a2, &GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767, &v8) < 0
    || (v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(
               v8,
               *(_QWORD *)a1,
               *(unsigned int *)(a1 + 8)),
        v5 = v4,
        v4 >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v5;
}

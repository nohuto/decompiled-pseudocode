/*
 * XREFs of ?NotifyDeviceRemoval@WGIController@@AEAAJXZ @ 0x18006EE8C
 * Callers:
 *     ?NotifyRemovedAndStop@WGIController@@QEAAJXZ @ 0x18006DAD4 (-NotifyRemovedAndStop@WGIController@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceRemoval(WGIController *this)
{
  __int64 *v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0;
  if ( v2 )
  {
    v2[1] = 0LL;
    *v2 = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    v5 = *v2;
    v6 = *((_QWORD *)this + 12);
    if ( *v2 != v6 )
    {
      if ( v6 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 12));
        v5 = *v2;
      }
      *v2 = v6;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v2[1] = *((_QWORD *)this + 21);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 13)
                                                                                               + 128LL))(
           *((_QWORD *)this + 13),
           WGIController::NotifyDeviceRemovalCallback,
           v2,
           4LL);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x450,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18006EF9DLL);
    }
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x448,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x8007000ELL);
  }
  return v3;
}

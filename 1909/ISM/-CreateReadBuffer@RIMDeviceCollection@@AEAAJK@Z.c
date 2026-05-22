/*
 * XREFs of ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18009A334
 * Callers:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18009AA98 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateReadBuffer(RIMDeviceCollection *this, const struct std::nothrow_t *a2)
{
  size_t v3; // rdi
  void *v4; // rcx
  void *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned int)a2;
  v4 = (void *)*((_QWORD *)this + 335);
  if ( v4 )
  {
    operator delete(v4, a2);
    *((_QWORD *)this + 335) = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  v5 = operator new[](v3);
  *((_QWORD *)this + 335) = v5;
  if ( v5 )
  {
    *((_DWORD *)this + 672) = v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}

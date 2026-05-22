/*
 * XREFs of ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800267E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x1800268A0 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x180026DB0 (--0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005633C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3,
        const char *a4)
{
  wil::details::in1diag3 *v6; // rcx
  WGIRawInputProvider *v7; // rax
  const char *v8; // r9
  WGIRawInputProvider *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( WGIRawInputProvider::s_pInstance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x39,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      a4);
LABEL_11:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      (void *)0x3D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)0x80004003LL,
      -2);
    __debugbreak();
  }
  v6 = retaddr;
  if ( !a3 )
    goto LABEL_11;
  *a3 = 0LL;
  if ( !a1 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)0x80070057LL,
      -2);
    __debugbreak();
  }
  v7 = (WGIRawInputProvider *)RefCountedObject::operator new(0x1A0uLL);
  if ( v7 )
    v9 = WGIRawInputProvider::WGIRawInputProvider(v7, a1);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v8);
    __debugbreak();
  }
  v10 = WGIRawInputProvider::Initialize(v9);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v10,
      -2);
    JUMPOUT(0x18004BDE2LL);
  }
  WGIRawInputProvider::s_pInstance = v9;
  *a3 = v9;
  return 0LL;
}

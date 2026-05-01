/*
 * XREFs of ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ @ 0x1802F93FC
 * Callers:
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802F5FDC (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

__int64 __fastcall XamlAltTabViewHost::RuntimeClassInitialize(XamlAltTabViewHost *this)
{
  int inited; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((XamlAltTabViewHost *)((char *)this + 24));
  v2 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
    (const char *)(unsigned int)inited);
  return v2;
}

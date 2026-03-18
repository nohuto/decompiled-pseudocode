/*
 * XREFs of ?SetReferenceProperty@CLocalAppRenderTarget@@UEAAJIPEAVCResource@@@Z @ 0x180250CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E6340 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::SetReferenceProperty(
        CLocalAppRenderTarget *this,
        int a2,
        struct CComposition **a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = 51LL;
LABEL_5:
    v7 = -2147024809;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\localapprendertarget.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( !(*((unsigned __int8 (__fastcall **)(struct CComposition **, __int64))*a3 + 6))(a3, 189LL) )
  {
    v5 = 46LL;
    goto LABEL_5;
  }
  v7 = CRenderTarget::SetRoot(this, a3, v6);
  if ( v7 < 0 )
  {
    v5 = 47LL;
    goto LABEL_6;
  }
  return 0LL;
}

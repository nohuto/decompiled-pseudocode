/*
 * XREFs of ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x1800C5D18
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800543AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C2EE0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x1800C5B78 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMFocusedInputTarget::Create(
        struct IInputTarget *a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        struct IInputTarget **a8)
{
  unsigned int v12; // ebx
  __int64 v13; // rdx
  DWMFocusedInputTarget *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a8 )
  {
    v12 = -2147467261;
    v13 = 73LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
      (const char *)v12);
    return v12;
  }
  *a8 = 0LL;
  v15 = (DWMFocusedInputTarget *)RefCountedObject::operator new(0x68uLL);
  if ( v15 )
    v15 = DWMFocusedInputTarget::DWMFocusedInputTarget(v15, a1, a2, a3, a4, a5, a6, a7);
  if ( !v15 )
  {
    v12 = -2147024882;
    v13 = 89LL;
    goto LABEL_3;
  }
  *a8 = v15;
  return 0LL;
}

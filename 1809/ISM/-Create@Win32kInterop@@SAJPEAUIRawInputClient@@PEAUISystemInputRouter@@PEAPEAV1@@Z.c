/*
 * XREFs of ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180081ECC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004674 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x180080F18 (--0Win32kInterop@@QEAA@XZ.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180081FEC (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Create(
        struct IRawInputClient *a1,
        struct ISystemInputRouter *a2,
        struct Win32kInterop **a3)
{
  __int64 v6; // rdx
  Win32kInterop *v8; // rbx
  Win32kInterop *v9; // rax
  int v10; // eax
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 )
  {
    v6 = 108LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a2 )
  {
    v6 = 109LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v6 = 110LL;
    goto LABEL_3;
  }
  v8 = Win32kInterop::s_pInterop;
  if ( !Win32kInterop::s_pInterop )
  {
    v9 = (Win32kInterop *)malloc(0x9D0uLL);
    v8 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x9D0uLL);
    if ( v8 )
      v8 = Win32kInterop::Win32kInterop(v8);
    if ( !v8 )
    {
      v11 = wil::verify_hresult<long>(0x8007000E);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)v11);
      JUMPOUT(0x180081FE3LL);
    }
    v10 = Win32kInterop::Initialize(v8, a1, a2);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    Win32kInterop::s_pInterop = v8;
  }
  *a3 = v8;
  return 0LL;
}

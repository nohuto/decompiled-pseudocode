/*
 * XREFs of ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800907A0
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180089880 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Create(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        struct IInputTarget **a8)
{
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a8 )
  {
    v12 = -2147467261;
    v13 = 51LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
      (const char *)v12);
    return v12;
  }
  *a8 = 0LL;
  v15 = malloc(0x48uLL);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x48uLL);
    v16[3] = &RefCountedObject::`vftable';
    *((_DWORD *)v16 + 8) = 1;
    *v16 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
    v16[1] = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
    v16[2] = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
    v16[3] = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
    v16[7] = a5;
    *((_DWORD *)v16 + 16) = a6;
    *((_DWORD *)v16 + 17) = a7;
    *((_DWORD *)v16 + 10) = a1;
    *((_DWORD *)v16 + 11) = a2;
    *((_DWORD *)v16 + 12) = a3;
    *((_DWORD *)v16 + 13) = a4;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v12 = -2147024882;
    v13 = 67LL;
    goto LABEL_3;
  }
  *a8 = (struct IInputTarget *)v16;
  return 0LL;
}

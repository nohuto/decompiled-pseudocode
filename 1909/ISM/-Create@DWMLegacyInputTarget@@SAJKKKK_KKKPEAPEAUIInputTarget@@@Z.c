/*
 * XREFs of ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C74B0
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C2EE0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
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
  struct IInputTarget *v15; // rax
  struct IInputTarget *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

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
  v15 = (struct IInputTarget *)RefCountedObject::operator new(0x48uLL);
  v16 = v15;
  if ( v15 )
  {
    *((_QWORD *)v15 + 3) = &RefCountedObject::`vftable';
    *((_DWORD *)v15 + 8) = 1;
    *(_QWORD *)v15 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
    *((_QWORD *)v15 + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
    *((_QWORD *)v15 + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
    *((_QWORD *)v15 + 3) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v15 + 7) = a5;
    *((_DWORD *)v15 + 16) = a6;
    *((_DWORD *)v15 + 17) = a7;
    *((_DWORD *)v15 + 10) = a1;
    *((_DWORD *)v15 + 11) = a2;
    *((_DWORD *)v15 + 12) = a3;
    *((_DWORD *)v15 + 13) = a4;
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
  *a8 = v16;
  return 0LL;
}

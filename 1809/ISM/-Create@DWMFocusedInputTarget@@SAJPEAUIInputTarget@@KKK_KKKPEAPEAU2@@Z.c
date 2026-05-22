/*
 * XREFs of ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x18008E0D4
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180089880 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMFocusedInputTarget::Create(
        struct IInputTarget *a1,
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
    v13 = 53LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
      (const char *)v12);
    return v12;
  }
  *a8 = 0LL;
  v15 = malloc(0x58uLL);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x58uLL);
    v16[4] = &RefCountedObject::`vftable';
    *((_DWORD *)v16 + 10) = 1;
    *v16 = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
    v16[1] = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
    v16[2] = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
    v16[3] = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
    v16[4] = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
    v16[6] = a1;
    if ( a1 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a1 + 8LL))(a1);
    v16[9] = a5;
    *((_DWORD *)v16 + 20) = a6;
    *((_DWORD *)v16 + 21) = a7;
    *((_DWORD *)v16 + 14) = a2;
    *((_DWORD *)v16 + 15) = a3;
    *((_DWORD *)v16 + 16) = a4;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v12 = -2147024882;
    v13 = 69LL;
    goto LABEL_3;
  }
  *a8 = (struct IInputTarget *)v16;
  return 0LL;
}

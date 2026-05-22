/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800923E0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180124B24 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x180124BE0 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 */

__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // edx
  bool v8; // zf
  int *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12[8]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h]
  int v15; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v16; // [rsp+54h] [rbp-ACh]
  __int16 v17; // [rsp+76h] [rbp-8Ah]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( *(char *)a2 >= 0 )
  {
    v4 = -2147024809;
    v5 = 115LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  InputETW::ButtonProcessor::ButtonEvent(*((unsigned int *)a2 + 16), *((_BYTE *)a2 + 68));
  v7 = *((_DWORD *)a2 + 16);
  if ( (v7 > 0xD || *((_BYTE *)this + 81))
    && *((_BYTE *)this + 80)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, v7, v12) >= 0 )
  {
    memset_0(v13, 0, 0x160uLL);
    v8 = *((_BYTE *)a2 + 68) == 0;
    v9 = (int *)*((_QWORD *)this + 5);
    v15 = 352;
    v10 = *v9;
    v13[2] = *((_DWORD *)a2 + 2);
    v14 = *((_QWORD *)a2 + 2);
    v17 = 64;
    v16 = v12[0];
    v13[1] = v10;
    v13[0] = 4;
    if ( v8 )
      v17 = 65;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11), v13);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        151LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  else
  {
    v4 = NonPointerProcessor::OnInputReport(this, a2);
    if ( v4 < 0 )
    {
      v5 = 155LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}

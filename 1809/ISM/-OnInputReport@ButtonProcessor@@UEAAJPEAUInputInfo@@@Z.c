/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EA960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052360 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x1800EA3C4 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x1800EAC64 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800EAE00 (-QueueWorkItem@ButtonProcessor@@AEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // r10d
  bool v8; // zf
  int *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-D8h]
  ButtonProcessor *v14; // [rsp+38h] [rbp-C8h]
  void **v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h]
  ButtonProcessor *v17; // [rsp+58h] [rbp-A8h]
  void ***v18; // [rsp+78h] [rbp-88h]
  _DWORD v19[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  unsigned __int16 v22; // [rsp+A4h] [rbp-5Ch]
  __int16 v23; // [rsp+C6h] [rbp-3Ah]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( (*(_DWORD *)a2 & 0x80) == 0 )
  {
    v4 = -2147024809;
    v5 = 132LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  InputETW::ButtonProcessor::ButtonEvent(*((_DWORD *)a2 + 130), *((_BYTE *)a2 + 524));
  v7 = *((_DWORD *)a2 + 130);
  if ( (v7 > 0xD || *((_BYTE *)this + 57))
    && *((_BYTE *)this + 56)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, v7, &v12) >= 0 )
  {
    memset_0(v19, 0, 0x158uLL);
    v8 = *((_BYTE *)a2 + 524) == 0;
    v9 = (int *)*((_QWORD *)this + 4);
    v19[0] = 4;
    v21 = 344;
    v10 = *v9;
    v19[2] = *((_DWORD *)a2 + 2);
    v20 = *((_QWORD *)a2 + 2);
    v23 = 64;
    v22 = v12;
    v19[1] = v10;
    if ( v8 )
      v23 = 65;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8), v19);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x1800EAB57LL);
    }
  }
  else if ( v7 == 239 )
  {
    if ( *((_BYTE *)a2 + 524) )
    {
      DWORD2(v13) = 0;
      *(_QWORD *)&v13 = ButtonProcessor::OnCameraAccessToggle;
      v14 = this;
      v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (ButtonProcessor::*)(void),ButtonProcessor *>,void,>::`vftable';
      v16 = v13;
      v17 = this;
      v18 = &v15;
      v4 = ButtonProcessor::QueueWorkItem(this, &v15);
      if ( v4 < 0 )
      {
        v5 = 174LL;
        goto LABEL_3;
      }
    }
  }
  else
  {
    v4 = NonPointerProcessor::OnInputReport(this, a2);
    if ( v4 < 0 )
    {
      v5 = 180LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}

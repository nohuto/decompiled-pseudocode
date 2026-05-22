/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180078B74
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076750 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180078038 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this, struct InputInfo *a2)
{
  char v3; // di
  bool v4; // r14
  bool v5; // bp
  bool v6; // si
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1;
  if ( !*((_BYTE *)a2 + 128) )
  {
    v4 = COERCE_DOUBLE(*((_QWORD *)a2 + 12) & _xmm) <= 0.239532470703125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 13) & _xmm) <= 0.239532470703125;
    v5 = COERCE_DOUBLE(*((_QWORD *)a2 + 14) & _xmm) <= 0.265167236328125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 15) & _xmm) <= 0.265167236328125;
    v6 = COERCE_DOUBLE(*((_QWORD *)a2 + 10) & _xmm) <= 0.1171875
      && COERCE_DOUBLE(*((_QWORD *)a2 + 11) & _xmm) <= 0.1171875;
    if ( v5 && !*((_BYTE *)this + 2300) && *((_DWORD *)this + 785) == 1 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v6 && ((*((_DWORD *)this + 785) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v4 && v5 && v6 )
      v3 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 274) + 24LL))(*((_QWORD *)this + 274), &v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1905LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 544) && !v11 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 274) + 80LL))(
             *((_QWORD *)this + 274),
             0LL,
             *((_QWORD *)this + 1419));
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1911LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036210
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180033F70 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037698 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  if ( !*((_BYTE *)a2 + 584) )
  {
    v4 = COERCE_DOUBLE(*((_QWORD *)a2 + 69) & _xmm) <= 0.239532470703125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 70) & _xmm) <= 0.239532470703125;
    v5 = COERCE_DOUBLE(*((_QWORD *)a2 + 71) & _xmm) <= 0.265167236328125
      && COERCE_DOUBLE(*((_QWORD *)a2 + 72) & _xmm) <= 0.265167236328125;
    v6 = COERCE_DOUBLE(*((_QWORD *)a2 + 67) & _xmm) <= 0.1171875
      && COERCE_DOUBLE(*((_QWORD *)a2 + 68) & _xmm) <= 0.1171875;
    if ( v5 && !*((_BYTE *)this + 1844) && *((_DWORD *)this + 669) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v6 && ((*((_DWORD *)this + 669) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
    if ( v4 && v5 && v6 )
      v3 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 217) + 24LL))(*((_QWORD *)this + 217), &v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x75D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800363BELL);
  }
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 430) && !v11 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 217) + 80LL))(
             *((_QWORD *)this + 217),
             0LL,
             *((_QWORD *)this + 871));
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x763,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
    }
  }
  return 0LL;
}

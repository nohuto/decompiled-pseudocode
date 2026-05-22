/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180078104
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800788BC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x1800755E4 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075D84 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800764C0 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076D50 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077418 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180077D48 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180078038 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1800784FC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // esi
  int *v3; // r14
  _DWORD *v4; // rbx
  int v5; // eax
  int v6; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct tagPOINT v12; // [rsp+30h] [rbp-1D8h] BYREF
  _DWORD v13[108]; // [rsp+40h] [rbp-1C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  v2 = 0;
  v3 = (int *)&unk_1801995B4;
  v4 = (_DWORD *)((char *)this + 11084);
  *(_QWORD *)((char *)this + 2236) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v12);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo((__int64)this, v13, *v3);
      v5 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v13);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1068LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
    ++v2;
    ++v4;
    v3 += 3;
  }
  while ( v2 < 5 );
  if ( *((_DWORD *)this + 785) )
    ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1384);
  v6 = InjectionDevice::Remove((ControllerProcessor *)((char *)this + 6320));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1078LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
    this,
    (ControllerProcessor *)((char *)this + 144),
    *((double *)this + 31),
    211,
    212,
    1);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
    this,
    (ControllerProcessor *)((char *)this + 144),
    *((double *)this + 30),
    213,
    214,
    1);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1097LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 274) + 96LL))(*((_QWORD *)this + 274));
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1099LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1406) + 96LL))(*((_QWORD *)this + 1406));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1100LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1407) + 96LL))(*((_QWORD *)this + 1407));
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1101LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  return 0LL;
}

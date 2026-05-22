/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180034F24 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x1800350B0 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AULegacyInputInfo@@K@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180036440 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180036E30 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036EF4 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037698 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // esi
  unsigned int *v3; // r14
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  int updated; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _BYTE v14[1600]; // [rsp+40h] [rbp-658h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+0h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  v2 = 0;
  v3 = (unsigned int *)&unk_18014CB44;
  v4 = (_DWORD *)((char *)this + 6700);
  *(_QWORD *)((char *)this + 1780) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo(this, v14, *v3);
      v5 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v14);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x417,
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
  if ( *((_DWORD *)this + 669) )
    ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  v6 = *((_QWORD *)this + 836);
  if ( v6 )
  {
    *((_QWORD *)this + 836) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((_BYTE *)this + 5680) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 586) + 56LL))(
           *((_QWORD *)this + 586),
           (char *)this + 4696);
    v8 = (const char *)(unsigned int)v7;
    *((_BYTE *)this + 5680) = v7 < 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (int)v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x421,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      v8);
    __debugbreak();
  }
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
    this,
    (ControllerProcessor *)((char *)this + 120),
    *((double *)this + 85),
    0xD3u,
    0xD4u,
    1);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
    this,
    (ControllerProcessor *)((char *)this + 120),
    *((double *)this + 84),
    0xD5u,
    0xD6u,
    1);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x434,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 217) + 96LL))(*((_QWORD *)this + 217));
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x436,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 858) + 96LL))(*((_QWORD *)this + 858));
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x437,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 859) + 96LL))(*((_QWORD *)this + 859));
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x438,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x180034DECLL);
  }
  return 0LL;
}

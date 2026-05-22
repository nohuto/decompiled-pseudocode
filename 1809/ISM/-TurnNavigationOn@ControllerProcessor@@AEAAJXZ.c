/*
 * XREFs of ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180034944
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180036440 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::TurnNavigationOn(ControllerProcessor *this)
{
  unsigned int v2; // eax
  const char *v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v16; // [rsp+58h] [rbp+10h]

  v15 = 0LL;
  ControllerProcessor::LiftPressedVirtualKeys(this, 1);
  if ( *((_BYTE *)this + 5680) )
  {
    v3 = 0LL;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 586) + 40LL))(
           *((_QWORD *)this + 586),
           (char *)this + 4696,
           0LL);
    v3 = (const char *)v2;
    *((_BYTE *)this + 5680) = (v2 & 0x80000000) == 0;
  }
  if ( (int)v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v5 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL))(v4, &v15);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v15;
  v8 = *((_QWORD *)this + 836);
  if ( v8 )
  {
    *((_QWORD *)this + 836) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 48LL))(
         v7,
         *((unsigned int *)this + 1174),
         1LL,
         (char *)this + 6688);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v16 = *(struct tagPOINT *)((char *)this + 1780);
  v10 = ControllerProcessor::SetPointerPosition(this, v16, 1);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3FB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x180034B52LL);
  }
  *((_BYTE *)this + 6696) = 1;
  if ( (*((_BYTE *)this + 1776) & 0x20) == 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 859) + 80LL))(
            *((_QWORD *)this + 859),
            0LL,
            *((_QWORD *)this + 862));
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x404,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}

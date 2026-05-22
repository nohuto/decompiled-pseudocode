/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180077874
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18007508C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180076BD4 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18007858C (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180078948 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075FC4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077658 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(ControllerProcessor *this, struct tagPOINT a2, char a3)
{
  LONG y; // r14d
  int v7; // eax
  int v8; // eax
  ULONGLONG TickCount64; // rax
  int v10; // eax
  int v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+28h] [rbp-D8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+94h] [rbp-6Ch]
  int v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+9Ch] [rbp-64h]
  __int16 v22; // [rsp+A2h] [rbp-5Eh]
  int v23; // [rsp+ACh] [rbp-54h]
  int v24; // [rsp+B0h] [rbp-50h]
  char v25; // [rsp+C4h] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  *(struct tagPOINT *)v12 = a2;
  y = a2.y;
  if ( IsEdition(253345LL) )
    a3 = 1;
  if ( a3 || *((_DWORD *)this + 559) != a2.x || *((_DWORD *)this + 560) != y )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v15, 0, 0x1A8uLL);
    v17 = 424;
    v15[0] = 4096;
    v15[2] = GetTickCount();
    v16 = PerformanceCount;
    v18 = *((_QWORD *)this + 275);
    v22 = a3 != 0;
    v25 = a3;
    if ( a3 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 276) + 32LL))(
             *((_QWORD *)this + 276),
             &v13,
             v12);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1793LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
      v23 = 0xFFFF * a2.x / (v13 - 1);
      v24 = 0xFFFF * y / (v12[0] - 1);
    }
    else
    {
      *(_QWORD *)((char *)this + 2236) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(
                                                         this,
                                                         (struct tagPOINT *)v12);
      v8 = a2.x - *((_DWORD *)this + 559);
      v24 = y - *((_DWORD *)this + 560);
      v23 = v8;
    }
    TickCount64 = GetTickCount64();
    if ( *((_BYTE *)this + 11304)
      && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 1411) )
    {
      ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
      v20 = *((_DWORD *)this + 2824);
      v21 = *((_DWORD *)this + 2825);
      *((_BYTE *)this + 11304) = 0;
      v19 = 1;
    }
    *(struct tagPOINT *)((char *)this + 2236) = a2;
    v10 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v15);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1819LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
  }
  return 0LL;
}

/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0
 * Callers:
 *     _lambda_e98e55952b2f6a60ccdf995baa6b733c_::_lambda_invoker_cdecl_ @ 0x180033680 (_lambda_e98e55952b2f6a60ccdf995baa6b733c_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180034500 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180034944 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180034F24 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(
        ControllerProcessor *this,
        struct tagPOINT a2,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r15
  LONG y; // r14d
  LONG v7; // esi
  DWORD TickCount; // eax
  int v9; // eax
  __int64 v10; // rcx
  ULONGLONG TickCount64; // rax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v15; // [rsp+24h] [rbp-DCh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+20Ch] [rbp+10Ch]
  int v21; // [rsp+210h] [rbp+110h]
  int v22; // [rsp+214h] [rbp+114h]
  __int64 v23; // [rsp+228h] [rbp+128h]
  __int16 v24; // [rsp+24Ah] [rbp+14Ah]
  int v25; // [rsp+254h] [rbp+154h]
  int v26; // [rsp+258h] [rbp+158h]
  unsigned __int8 v27; // [rsp+67Dh] [rbp+57Dh]
  wil::details::in1diag3 *retaddr; // [rsp+6C8h] [rbp+5C8h]

  v5 = 1;
  if ( ((1LL << gdwDeviceFamily) & 0x1DDA1) == 0 )
    v5 = a3;
  y = a2.y;
  v7 = a2.y;
  if ( v5
    || (y = a2.y, v7 = a2.y, *((_DWORD *)this + 445) != a2.x)
    || (y = a2.y, v7 = a2.y, *((_DWORD *)this + 446) != a2.y) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v17, 0, 0x640uLL);
    v19 = 1600;
    v17[0] = 2;
    TickCount = GetTickCount();
    v27 = v5;
    v17[2] = TickCount;
    v18 = PerformanceCount;
    v23 = *((_QWORD *)this + 218);
    v24 = v5;
    if ( v5 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, int *, struct tagPOINT *))(**((_QWORD **)this + 219) + 32LL))(
             *((_QWORD *)this + 219),
             &v14,
             &v15);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6ED,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v25 = 0xFFFF * a2.x / (v14 - 1);
      v26 = 0xFFFF * y / (v15.x - 1);
    }
    else
    {
      v10 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v15);
      *(_QWORD *)((char *)this + 1780) = v10;
      v25 = a2.x - v10;
      v26 = v7 - HIDWORD(v10);
    }
    TickCount64 = GetTickCount64();
    if ( *((_BYTE *)this + 6920)
      && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 863) )
    {
      ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
      v21 = *((_DWORD *)this + 1728);
      v22 = *((_DWORD *)this + 1729);
      *((_BYTE *)this + 6920) = 0;
      v20 = 1;
    }
    *(struct tagPOINT *)((char *)this + 1780) = a2;
    v12 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v17);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x707,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x180036130LL);
    }
  }
  return 0LL;
}

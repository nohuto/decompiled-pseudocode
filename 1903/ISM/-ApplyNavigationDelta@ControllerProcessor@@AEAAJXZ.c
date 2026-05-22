/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18007508C
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057E88 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180072F04 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180072F8C (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180075004 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075FC4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x1800777A8 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180077874 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm2_4
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // edi
  struct tagPOINT v10; // rbx
  int v11; // ebp
  bool v12; // r14
  bool v13; // di
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // eax
  int v18; // eax
  ControllerNavigationManager *v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagPOINT v22; // [rsp+50h] [rbp+8h]
  struct tagPOINT v23; // [rsp+50h] [rbp+8h]

  v1 = *((float *)this + 561);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v3 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 562)) & _xmm) >= 1.0 )
  {
    v4 = *((float *)this + 562);
    v5 = (int)v1;
    v22.x = (int)v1;
    v22.y = (int)v4;
    *((float *)this + 561) = v1 - (float)(int)v1;
    *((float *)this + 562) = v4 - (float)(int)v4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1384) + 80LL))(*((_QWORD *)this + 1384)) )
    {
      v6 = ControllerProcessor::SendPointerDelta(this, v22);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1594LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 2232) & 0x20) == 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1406) + 96LL))(*((_QWORD *)this + 1406));
        if ( v7 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1598LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v7);
          __debugbreak();
        }
      }
    }
    else
    {
      v8 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
      *(_QWORD *)((char *)this + 2236) = v8;
      v9 = v5 + v8;
      v23.y = v22.y + *((_DWORD *)this + 560);
      v23.x = v5 + v8;
      v10 = ControllerProcessor::AdjustPointToBounds(v23, (struct tagRECT *)((char *)this + 2216));
      v11 = 1;
      v12 = v10 != __PAIR64__(v23.y, v9);
      v13 = v10.x == *((_DWORD *)this + 554)
         || v10.x == *((_DWORD *)this + 556) - 1
         || v10.y == *((_DWORD *)this + 555)
         || v10.y == *((_DWORD *)this + 557) - 1;
      if ( *((_DWORD *)this + 559) == v10.x && *((_DWORD *)this + 560) == v10.y )
        v11 = 0;
      if ( *((_BYTE *)this + 2280) && v11 && PtInRect((const RECT *)((char *)this + 2264), v10) )
      {
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedOverrideBounds(ControllerNavigationManager, v10, v15, v16);
      }
      v17 = ControllerProcessor::SetPointerPosition(this, v10, v12);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1638LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 2232) & 0x20) == 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1406) + 80LL))(
                *((_QWORD *)this + 1406),
                *((_QWORD *)this + 1408),
                *((_QWORD *)this + 1409));
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1649LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v18);
          __debugbreak();
        }
      }
      if ( v13 && v11 && (*((_BYTE *)this + 2232) & 0x10) != 0 )
      {
        v19 = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedClientBounds(v19, v10);
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1803C44F8
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007DA58 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x18004D560 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::_AdjustSizeForMonitorChange(
        CDesktopPositioner *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveMonitor *a3,
        struct tagSIZE *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5)
{
  int v7; // ebx
  __int64 v8; // rdx
  int ScaleFactorForRect; // ebx
  int v11; // eax
  int v12; // edi
  LONG v13; // eax
  LONG cy; // ecx
  struct tagRECT v15; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL))(a2, &v16);
  if ( v7 < 0 )
  {
    v8 = 3381LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a3 + 88LL))(a3, &v15);
  if ( v7 < 0 )
  {
    v8 = 3384LL;
    goto LABEL_3;
  }
  ScaleFactorForRect = GetScaleFactorForRect(&v16);
  v11 = GetScaleFactorForRect(&v15);
  v12 = v11;
  if ( v11 != ScaleFactorForRect )
  {
    v13 = MulDiv(a4->cx, v11, ScaleFactorForRect);
    cy = a4->cy;
    a4->cx = v13;
    a4->cy = MulDiv(cy, v12, ScaleFactorForRect);
    *(_DWORD *)a5 |= 0xCu;
  }
  return 0LL;
}

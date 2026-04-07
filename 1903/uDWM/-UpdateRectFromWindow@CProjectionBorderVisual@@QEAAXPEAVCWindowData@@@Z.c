/*
 * XREFs of ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18008AC20
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18000C780 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800392B8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18008ABC0 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18008D31C (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRectFromWindow(CProjectionBorderVisual *this, struct CWindowData *a2)
{
  CTopLevelWindow *v4; // rcx
  LONG left; // ecx
  LONG bottom; // eax
  LONG top; // edx
  LONG right; // r8d
  struct _MARGINS v9; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-20h] BYREF

  v4 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
  v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  if ( v4 )
  {
    CTopLevelWindow::GetBorderMargins(v4, &v9);
    left = v9.cxLeftWidth + v10.left;
    bottom = v10.bottom - v9.cyBottomHeight;
    top = v9.cyTopHeight + v10.top;
    right = v10.right - v9.cxRightWidth;
    v10.right -= v9.cxRightWidth;
    v10.top += v9.cyTopHeight;
    v10.left += v9.cxLeftWidth;
    v10.bottom -= v9.cyBottomHeight;
  }
  else
  {
    bottom = v10.bottom;
    right = v10.right;
    top = v10.top;
    left = v10.left;
  }
  if ( right < left || bottom < top )
    v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  CProjectionBorderVisual::UpdateRect(this, &v10);
}

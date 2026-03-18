/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00ED9A4
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0035EC0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C013E4CC (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00ED968 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00EDA60 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // esi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = (unsigned int)a2;
  v4 = a3;
  v6 = D3DKMDT_VPPR_ROTATE90;
  if ( (_DWORD)a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 233) )
      return 1LL;
  }
  else
  {
    if ( !(_DWORD)a3 )
      goto LABEL_14;
    if ( (_DWORD)a3 != 2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v9 + 24) = 7908LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( v4 )
    goto LABEL_6;
LABEL_14:
  if ( !*(_BYTE *)(a1 + 233) )
    return 1LL;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(v7 + 3968 * v3 + 1040) != 1 )
  {
    switch ( *(_DWORD *)(v7 + 3968 * v3 + 1040) )
    {
      case 2:
        goto LABEL_8;
      case 3:
        v6 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_8;
      case 4:
        v6 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_8;
    }
    v10 = WdLogNewEntry5_WdError(v7, (unsigned int)(*(_DWORD *)(v7 + 3968 * v3 + 1040) - 3), a3);
    *(_QWORD *)(v10 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 3968 * v3 + 1040);
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v10);
  }
  v6 = D3DKMDT_VPPR_IDENTITY;
LABEL_8:
  if ( v4 != 1 && DmmEnumClientVidPnPathTargetsFromSource(*(void *const *)(a1 + 16), v3, 0LL, &v11) >= 0 )
    return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((DXGADAPTER **)a1, v6, v11);
  return (unsigned int)v6;
}

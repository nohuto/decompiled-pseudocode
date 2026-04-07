/*
 * XREFs of ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007F8B0
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008954C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A11C (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A76C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007F828 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDisplayRect(__int64 a1, HMONITOR a2, _DWORD *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // edi
  _BYTE v9[184]; // [rsp+30h] [rbp-148h] BYREF
  __int128 v10; // [rsp+E8h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  if ( a2 )
  {
    memset_0(v9, 0, 0x120uLL);
    DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
                             *(CDWMDXGIEnumeration **)(a1 + 152),
                             a2,
                             (struct DXGIOutputInfo *)v9);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7A,
        (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)DxgiOutputDescriptor);
      return v7;
    }
    *(_OWORD *)a3 = v10;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 160) + 16LL);
  }
  return 0LL;
}

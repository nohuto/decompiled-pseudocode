/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x18008A35C
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A76C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18008A850 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180037AC4 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x18003DA64 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
        CProjectionBorderManager *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  CMatrixTransformProxy *v11; // rbx
  CMatrixTransformProxy *v13; // [rsp+20h] [rbp-58h] BYREF
  struct _MilMatrix3x2D v14; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  v7 = CCompositor::CreateProxy<CMatrixTransformProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (__int64 *)&v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_OWORD *)&v14.S_11 = _xmm;
    *(_OWORD *)&v14.S_21 = _xmm;
    v10 = _mm_cvtsi32_si128(a3);
    v11 = v13;
    *(_QWORD *)&v14.DX = *(_OWORD *)&_mm_cvtepi32_pd(v10);
    v14.DY = (double)a4;
    v7 = CMatrixTransformProxy::Update(v13, &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 1176LL))(
             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
             a2,
             *(unsigned int *)(*((_QWORD *)v11 + 2) + 24LL));
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v9 = 1145LL;
    }
    else
    {
      v9 = 1141LL;
    }
  }
  else
  {
    v9 = 1131LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  return v8;
}

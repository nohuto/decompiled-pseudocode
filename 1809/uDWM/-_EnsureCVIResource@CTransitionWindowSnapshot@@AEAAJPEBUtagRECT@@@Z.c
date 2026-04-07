/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180032D64
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AB60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180045820 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180033020 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180033A80 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 i; // rax
  float v5; // xmm1_4
  unsigned int v6; // eax
  CBaseObject **v7; // r14
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  float v15; // xmm1_4
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __m128i v22; // xmm0
  int v23; // eax
  float v24; // xmm0_4
  __int64 v25; // rcx
  CBaseObject *v26; // rcx
  double v27; // [rsp+50h] [rbp-30h] BYREF
  double v28; // [rsp+58h] [rbp-28h]
  float v29[4]; // [rsp+60h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v29[i] = (float)*(&a2->left + i);
  v5 = *((float *)this + 88);
  v6 = 0;
  v27 = 0.0;
  v28 = 0.0;
  if ( v5 != 1.0 )
  {
    if ( a2->bottom - a2->top >= 0 )
      v6 = a2->bottom - a2->top;
    v22 = _mm_cvtsi32_si128(v6);
    v23 = 0;
    LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v23 = a2->right - a2->left;
    v25 = *((_QWORD *)this + 39);
    v28 = (float)(v24 * v5);
    v27 = (float)((float)v23 * v5);
    CVisual::SetInterpolationMode(v25, 1LL);
  }
  v7 = (CBaseObject **)((char *)this + 288);
  if ( !*((_QWORD *)this + 36) )
  {
    v8 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v8 = a2->bottom - a2->top;
    v9 = 0;
    if ( a2->right - a2->left >= 0 )
      v9 = a2->right - a2->left;
    if ( (int)CDesktopManager::GetCVIFromCache(v9, v8, (struct CResource **)this + 36) < 0 )
    {
      v10 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 36);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x10Cu);
LABEL_33:
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        v26 = (CBaseObject *)*((_QWORD *)this + 37);
        if ( v26 )
        {
          CBaseObject::Release(v26);
          *((_QWORD *)this + 37) = 0LL;
        }
        return v11;
      }
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 39) + 16LL);
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 24);
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, double *, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)*v7 + 2) + 1000LL))(
          *((_QWORD *)*v7 + 2),
          *((unsigned int *)*v7 + 6),
          v29,
          &v27,
          0,
          0,
          v12,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x117u);
    goto LABEL_33;
  }
  v14 = a2->right - a2->left;
  v15 = *((float *)this + 88);
  v27 = NAN;
  v16 = 0;
  if ( v14 >= 0 )
    v16 = v14;
  v17 = a2->bottom - a2->top;
  LODWORD(v28) = (int)(float)((float)v16 * v15) - 32000;
  v18 = 0;
  if ( v17 >= 0 )
    v18 = v17;
  HIDWORD(v28) = (int)(float)((float)v18 * v15) - 32000;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**((_QWORD **)*v7 + 2) + 1016LL))(
          *((_QWORD *)*v7 + 2),
          *((unsigned int *)*v7 + 6),
          &v27);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x128u);
    goto LABEL_33;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTransitionCVISnapshot_Info);
  v20 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x12Eu);
    goto LABEL_33;
  }
  return v11;
}

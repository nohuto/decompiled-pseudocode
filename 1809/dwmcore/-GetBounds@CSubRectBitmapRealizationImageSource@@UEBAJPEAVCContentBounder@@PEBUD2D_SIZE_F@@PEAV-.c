/*
 * XREFs of ?GetBounds@CSubRectBitmapRealizationImageSource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D5510
 * Callers:
 *     ?GetTransform@CSubRectBitmapRealizationImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D5770 (-GetTransform@CSubRectBitmapRealizationImageSource@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubRectBitmapRealizationImageSource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // ebp
  int v8; // r15d
  int v9; // r14d
  int v10; // r12d
  int v11; // r13d
  float v12; // xmm8_4
  float v13; // xmm7_4
  int v14; // eax
  unsigned int v15; // esi
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // [rsp+30h] [rbp-A8h]
  _DWORD v22[4]; // [rsp+38h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)a4 = 0LL;
    *(float *)(a4 + 8) = (float)(*(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32));
    v20 = (float)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 36));
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_DWORD *)(a1 + 32);
    v8 = *(_DWORD *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 36);
    v10 = *(_DWORD *)(a1 + 44);
    v11 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 8) = 1;
    v21 = v6;
    v12 = (float)v7;
    v13 = (float)v9;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _DWORD *))(**(_QWORD **)(a1 + 16) + 120LL))(
            *(_QWORD *)(a1 + 16),
            a2,
            a3,
            v22);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFA,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subrectbitmaprealizationimagesource.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    *(_BYTE *)(a1 + 8) = 0;
    v17 = 0.0;
    if ( v7 )
      v18 = 0.0;
    else
      v18 = *(float *)v22;
    *(float *)a4 = v18;
    if ( !v9 )
      v17 = *(float *)&v22[1];
    *(float *)(a4 + 4) = v17;
    if ( v8 == v11 )
      v19 = fmaxf(v18, *(float *)&v22[2] - v12);
    else
      v19 = (float)v8 - v12;
    *(float *)(a4 + 8) = v19;
    if ( v10 == v21 )
      v20 = fmaxf(v17, *(float *)&v22[3] - v13);
    else
      v20 = (float)v10 - v13;
  }
  *(float *)(a4 + 12) = v20;
  return 0LL;
}

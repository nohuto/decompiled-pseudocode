/*
 * XREFs of ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800014C8
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x1800012A0 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180090A0C (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000169C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@_N@Z @ 0x1800329D8 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@_N@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x18004F6B4 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::NcAdornmentInfoQuery(CTopLevelWindow *this, struct NCADORNMENT_INFO *a2)
{
  unsigned int *v4; // rbx
  struct CVisual *RootVisualNoAddRef; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  float v9; // xmm1_4
  float v10; // xmm5_4
  _DWORD *v11; // rdx
  __int64 v12; // r8
  int yBottom; // [rsp+20h] [rbp-39h]
  float v14; // [rsp+30h] [rbp-29h] BYREF
  float v15; // [rsp+34h] [rbp-25h]
  float v16; // [rsp+38h] [rbp-21h] BYREF
  float v17; // [rsp+3Ch] [rbp-1Dh]
  RECT rcSrc2; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v4 = (unsigned int *)*((_QWORD *)this + 61);
        break;
      case 2:
        v4 = (unsigned int *)*((_QWORD *)this + 62);
        break;
      case 3:
        v4 = (unsigned int *)*((_QWORD *)this + 63);
        break;
      default:
        if ( *(_DWORD *)a2 != 4 || (*((_DWORD *)this + 146) & 0x10000) == 0 )
          goto LABEL_13;
        v4 = (unsigned int *)*((_QWORD *)this + 65);
        break;
    }
  }
  else
  {
    v4 = (unsigned int *)*((_QWORD *)this + 60);
  }
  if ( !v4 )
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1322,
      (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL,
      yBottom);
    return 2147942487LL;
  }
  RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(this, 0);
  CVisual::GetLocalToParentVisualTransform((CVisual *)v4, RootVisualNoAddRef, (struct D2DMatrix *)v19);
  v7 = _mm_cvtsi32_si128(v4[30]);
  v8 = _mm_cvtsi32_si128(v4[31]);
  v16 = 0.0;
  v17 = 0.0;
  LODWORD(v14) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v15) = _mm_cvtepi32_ps(v8).m128_u32[0];
  D3DXVec2TransformCoord((struct D2DVector2 *)&v16, (const struct D2DVector2 *)&v16, (const struct D2DMatrix *)v19);
  D3DXVec2TransformCoord((struct D2DVector2 *)&v14, (const struct D2DVector2 *)&v14, (const struct D2DMatrix *)v19);
  v9 = v14;
  v10 = v16;
  if ( v16 > v14 )
  {
    v9 = v16;
    v10 = v14;
  }
  SetRect((LPRECT)((char *)a2 + 4), (int)v10, (int)v17, (int)v9, (int)v15);
  OffsetRect(
    (LPRECT)((char *)a2 + 4),
    *(_DWORD *)(*((_QWORD *)this + 90) + 48LL),
    *(_DWORD *)(*((_QWORD *)this + 90) + 52LL));
  v11 = (_DWORD *)*((_QWORD *)this + 90);
  v12 = *((_BYTE *)this + 240) & 4 | 0x9BLL;
  rcSrc2.left = *((_DWORD *)this + v12) + v11[12];
  rcSrc2.top = *((_DWORD *)this + v12 + 2) + v11[13];
  rcSrc2.right = v11[14] - *((_DWORD *)this + v12 + 1);
  rcSrc2.bottom = v11[15] - *((_DWORD *)this + v12 + 3);
  IntersectRect((LPRECT)((char *)a2 + 4), (const RECT *)((char *)a2 + 4), &rcSrc2);
  return 0LL;
}

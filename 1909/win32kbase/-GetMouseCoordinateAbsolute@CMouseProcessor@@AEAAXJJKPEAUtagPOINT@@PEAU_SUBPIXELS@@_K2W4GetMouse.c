/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0052738
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00528AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C018FE68 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0052D88 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?GetPrimaryRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0185F48 (-GetPrimaryRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ApiSetEditionMagnificationMousePosition @ 0x1C019AD4C (ApiSetEditionMagnificationMousePosition.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  struct tagRECT *UnionRect; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // xmm0_8
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // edx
  unsigned int v21; // edx
  char v22; // dl
  __int64 v23; // rcx
  __int64 result; // rax
  struct tagRECT v25; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v26; // [rsp+30h] [rbp-48h] BYREF

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRect = InputConfig::Mouse::GetUnionRect(&v26);
  }
  else
  {
    v13 = 0;
    UnionRect = InputConfig::Mouse::GetPrimaryRect(&v25);
  }
  v26 = *UnionRect;
  v15 = *(_QWORD *)&v26.left;
  v16 = _mm_srli_si128((__m128i)v26, 8).m128i_u64[0];
  v17 = a2 * (v16 - v26.left);
  v18 = HIDWORD(v16) - v26.top;
  *a5 = v17;
  if ( v17 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v17;
    v19 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v17;
    v19 = (unsigned __int16)HIWORD(*a5);
  }
  v20 = a3 * v18;
  *a5 = v19;
  a5[1] = v20;
  if ( v20 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v20;
    v21 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v20;
    v21 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v21;
  if ( v13 )
  {
    *a5 += v15;
    a5[1] = v21 + HIDWORD(v15);
  }
  *(_QWORD *)&v26.left = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    v22 = gptInd;
    v23 = 3LL * (unsigned int)gptInd;
    *((_DWORD *)&gaptMouse + 2 * v23) = a2 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v23 + 1) = a3 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v23 + 2) = a7;
    *((_QWORD *)&gaptMouse + v23 + 2) = a8;
    result = (v22 + 1) & 0x3F;
    gptInd = (v22 + 1) & 0x3F;
  }
  return result;
}

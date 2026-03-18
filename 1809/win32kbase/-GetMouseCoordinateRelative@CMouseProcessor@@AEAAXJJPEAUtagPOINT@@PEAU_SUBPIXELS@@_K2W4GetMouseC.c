/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C003CA34
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C003D1EC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C003D2D0 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 result; // rax
  __m128i *UnionRect; // rax
  char v12; // r10
  __int64 v13; // r9
  __m128i v14; // xmm0
  unsigned __int16 v15; // r8
  struct tagRECT v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+20h] BYREF

  v18 = a3;
  v17 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, (int *)&v17, (int *)&v18);
  switch ( *((_DWORD *)a1 + 606) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      a4->x -= v18;
      result = v17;
      goto LABEL_3;
    case 3:
      a4->x -= v17;
      result = v18;
      break;
    case 4:
      a4->x += v18;
      result = v17;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredMsgKM("Orientation should be in DISPLAYCONFIG_ROTATION enum");
LABEL_2:
      a4->x += v17;
      result = v18;
LABEL_3:
      a4->y += result;
      goto LABEL_4;
  }
  a4->y -= result;
LABEL_4:
  if ( (a8 & 4) == 0 )
  {
    UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v16);
    v12 = gptInd;
    v13 = 3LL * (unsigned int)gptInd;
    v14 = _mm_srli_si128(*UnionRect, 8);
    v15 = v14.m128i_i16[2] - HIDWORD(UnionRect->m128i_i64[0]) - 1;
    *((_DWORD *)&gaptMouse + 2 * v13) = LOWORD(a4->x) | ((unsigned __int16)(v14.m128i_i16[0]
                                                                          - UnionRect->m128i_i64[0]
                                                                          - 1) << 16);
    LODWORD(UnionRect) = a6;
    *((_DWORD *)&gaptMouse + 2 * v13 + 1) = LOWORD(a4->y) | (v15 << 16);
    *((_DWORD *)&gaptMouse + 2 * v13 + 2) = (_DWORD)UnionRect;
    *((_QWORD *)&gaptMouse + v13 + 2) = a7;
    result = (v12 + 1) & 0x3F;
    gptInd = (v12 + 1) & 0x3F;
  }
  return result;
}

/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0066C18
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C006711C (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0066D2C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C00675F8 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  __m128i *UnionRect; // rax
  char v14; // r10
  __int64 v15; // r9
  __m128i v16; // xmm0
  unsigned __int16 v17; // r8
  struct tagRECT v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, (int *)&v19, (int *)&v20);
  switch ( *((_DWORD *)a1 + 668) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      a4->x -= v20;
      result = v19;
      goto LABEL_3;
    case 3:
      a4->x -= v19;
      result = v20;
      break;
    case 4:
      a4->x += v20;
      result = v19;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(*((_DWORD *)a1 + 668) - 3), v10, v11);
LABEL_2:
      a4->x += v19;
      result = v20;
LABEL_3:
      a4->y += result;
      goto LABEL_4;
  }
  a4->y -= result;
LABEL_4:
  if ( (a8 & 4) == 0 )
  {
    UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v18);
    v14 = gptInd;
    v15 = 3LL * (unsigned int)gptInd;
    v16 = _mm_srli_si128(*UnionRect, 8);
    v17 = v16.m128i_i16[2] - HIDWORD(UnionRect->m128i_i64[0]) - 1;
    *((_DWORD *)&gaptMouse + 2 * v15) = LOWORD(a4->x) | ((unsigned __int16)(v16.m128i_i16[0]
                                                                          - UnionRect->m128i_i64[0]
                                                                          - 1) << 16);
    LODWORD(UnionRect) = a6;
    *((_DWORD *)&gaptMouse + 2 * v15 + 1) = LOWORD(a4->y) | (v17 << 16);
    *((_DWORD *)&gaptMouse + 2 * v15 + 2) = (_DWORD)UnionRect;
    *((_QWORD *)&gaptMouse + v15 + 2) = a7;
    result = (v14 + 1) & 0x3F;
    gptInd = (v14 + 1) & 0x3F;
  }
  return result;
}

/*
 * XREFs of ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x180378580
 * Callers:
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1803771C0 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180377F08 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1803702F8 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180372270 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 */

void __fastcall CDropFeedbackItem::_ZoomRect(__int64 a1, int a2, struct tagRECT *a3)
{
  HWND v5; // rdx
  HWND v7; // rdx
  int v8; // edx
  int v9; // r14d
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  int v15; // r9d
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  struct tagRECT v20; // xmm0
  struct tagRECT v21; // [rsp+20h] [rbp-50h] BYREF
  int v22[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v24[2]; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(HWND *)(a1 + 192);
  *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
  MapWindowPoints(0LL, v5, Points, 2u);
  v7 = *(HWND *)(a1 + 192);
  *(_OWORD *)&v24[0].x = *(_OWORD *)(a1 + 124);
  MapWindowPoints(0LL, v7, v24, 2u);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = 100;
  if ( (v8 & 0x860C02) != 0 )
  {
    v10 = 0LL;
    v11 = dword_180484500;
    while ( (v8 & *v11) == 0 )
    {
      v10 = (unsigned int)(v10 + 1);
      v11 += 2;
      if ( (unsigned int)v10 >= 6 )
        goto LABEL_12;
    }
    v9 = dword_180484500[2 * v10 + 1];
    if ( v9 != 100 )
    {
      v12 = *(_DWORD *)(a1 + 212);
      if ( (v8 & 0x20000) != 0 )
      {
        v21 = *(struct tagRECT *)&Points[0].x;
        v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 12));
        v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 4));
        v15 = v12 - (v13 - v14) / 2 - *(_DWORD *)(a1 + 204) - v14;
        Points[1].y = v15 + v13;
        Points[0].y = v15 + v14;
      }
      else
      {
        if ( (v8 & 0x40000) == 0 )
          goto LABEL_12;
        v16 = _mm_cvtsi128_si32(*(__m128i *)&Points[0].x);
        v17 = (*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200)) / 2;
        v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 8));
        v21 = *(struct tagRECT *)&Points[0].x;
        v19 = v17 - (v18 - v16) / 2 - v16;
        Points[0].x = v19 + v16;
        Points[1].x = v19 + v18;
      }
      *(_OWORD *)&v24[0].x = *(_OWORD *)MapRelativeRect(v22, &v21.left, v24, (int *)Points);
    }
  }
LABEL_12:
  v20 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_17;
    v20 = *(struct tagRECT *)&v24[0].x;
  }
  else
  {
    v20 = *(struct tagRECT *)&Points[0].x;
  }
  v21 = v20;
LABEL_17:
  if ( v9 == 100 )
  {
    *a3 = v20;
  }
  else
  {
    *(float *)v22 = (float)((float)(Points[1].x - Points[0].x) * 0.5) + (float)Points[0].x;
    *(float *)&v22[1] = (float)((float)(Points[1].y - Points[0].y) * 0.5) + (float)Points[0].y;
    ZoomRect((const struct Geometry::CRect *)&v21, (const struct Geometry::CPointFloat *)v22, v9, a3);
    if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
      OffsetRect(a3, 0, -a3->top);
  }
}

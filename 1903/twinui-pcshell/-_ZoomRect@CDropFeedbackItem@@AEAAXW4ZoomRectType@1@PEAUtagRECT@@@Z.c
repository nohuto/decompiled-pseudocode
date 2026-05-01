/*
 * XREFs of ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1803DE350
 * Callers:
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1803DCFB0 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803DDCE8 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1803D6190 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1803D80B0 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 */

void __fastcall CDropFeedbackItem::_ZoomRect(__int64 a1, int a2, struct tagRECT *a3)
{
  HWND v5; // rdx
  HWND v7; // rdx
  int v8; // edx
  int v9; // r14d
  __int64 v10; // rax
  _DWORD *v11; // rcx
  struct tagRECT v12; // xmm1
  struct tagRECT v13; // xmm0
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // r9d
  int v18; // ecx
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  struct tagRECT v22; // [rsp+20h] [rbp-50h] BYREF
  int v23[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v25[2]; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(HWND *)(a1 + 192);
  *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
  MapWindowPoints(0LL, v5, Points, 2u);
  v7 = *(HWND *)(a1 + 192);
  *(_OWORD *)&v25[0].x = *(_OWORD *)(a1 + 124);
  MapWindowPoints(0LL, v7, v25, 2u);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = 100;
  if ( (v8 & 0x860C02) == 0 )
    goto LABEL_5;
  v10 = 0LL;
  v11 = dword_180500BF0;
  while ( (v8 & *v11) == 0 )
  {
    v10 = (unsigned int)(v10 + 1);
    v11 += 2;
    if ( (unsigned int)v10 >= 6 )
      goto LABEL_5;
  }
  v9 = dword_180500BF0[2 * v10 + 1];
  if ( v9 == 100 )
    goto LABEL_5;
  v14 = *(_DWORD *)(a1 + 212);
  if ( (v8 & 0x20000) == 0 )
  {
    if ( (v8 & 0x40000) != 0 )
    {
      v18 = _mm_cvtsi128_si32(*(__m128i *)&Points[0].x);
      v19 = (*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200)) / 2;
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 8));
      v22 = *(struct tagRECT *)&Points[0].x;
      v21 = v19 - (v20 - v18) / 2 - v18;
      Points[0].x = v21 + v18;
      Points[1].x = v21 + v20;
      goto LABEL_12;
    }
LABEL_5:
    v12 = *(struct tagRECT *)&v25[0].x;
    goto LABEL_6;
  }
  v22 = *(struct tagRECT *)&Points[0].x;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 4));
  v17 = v14 - (v15 - v16) / 2 - *(_DWORD *)(a1 + 204) - v16;
  Points[1].y = v17 + v15;
  Points[0].y = v17 + v16;
LABEL_12:
  v12 = *(struct tagRECT *)MapRelativeRect(v23, &v22.left, v25, (int *)Points);
  *(struct tagRECT *)&v25[0].x = v12;
LABEL_6:
  v13 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v13 = v12;
      v22 = v12;
    }
  }
  else
  {
    v13 = *(struct tagRECT *)&Points[0].x;
    v22 = *(struct tagRECT *)&Points[0].x;
  }
  if ( v9 == 100 )
  {
    *a3 = v13;
  }
  else
  {
    *(float *)v23 = (float)((float)(Points[1].x - Points[0].x) * 0.5) + (float)Points[0].x;
    *(float *)&v23[1] = (float)((float)(Points[1].y - Points[0].y) * 0.5) + (float)Points[0].y;
    ZoomRect((const struct Geometry::CRect *)&v22, (const struct Geometry::CPointFloat *)v23, v9, a3);
    if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
      OffsetRect(a3, 0, -a3->top);
  }
}

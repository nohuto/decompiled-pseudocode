/*
 * XREFs of ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x180006084
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetFinalMinRect(struct tagRECT *a1, float a2, struct MilPointAndSizeF *a3)
{
  CDesktopManager *v3; // r9
  int v4; // eax
  __m128i v5; // xmm0
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float top; // xmm1_4

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = 0;
  v5 = _mm_cvtsi32_si128(a1->left);
  if ( a1->right - a1->left >= 0 )
    v4 = a1->right - a1->left;
  v6 = (float)v4 * *((float *)CDesktopManager::s_pDesktopManagerInstance + 179);
  *((float *)a3 + 2) = v6;
  v7 = v6 * a2;
  v8 = (float)(v6 * *((float *)v3 + 180)) + _mm_cvtepi32_ps(v5).m128_f32[0];
  top = (float)a1->top;
  *((float *)a3 + 3) = v7;
  *(float *)a3 = v8;
  *((float *)a3 + 1) = top - v7;
}

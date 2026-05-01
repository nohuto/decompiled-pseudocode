/*
 * XREFs of ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x180185E6C
 * Callers:
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x18018608C (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801867C4 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_AdjustWorkingArea(struct tagRECT *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  __m128i v5; // xmm0
  int v6; // ecx
  __m128i pvParam; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = this + 26;
  if ( (this[26].right <= this[26].left || this[26].bottom <= this[26].top) && !SystemParametersInfoW(0x30u, 0, v2, 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      395LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v5 = *(__m128i *)v2;
  v6 = a2->left - this[24].left;
  pvParam = v5;
  pvParam.m128i_i32[0] = v6 + _mm_cvtsi128_si32(v5);
  pvParam.m128i_i32[1] = a2->top - this[24].top + v5.m128i_i32[1];
  pvParam.m128i_i32[2] = this[24].right - a2->right + v5.m128i_i32[2];
  pvParam.m128i_i32[3] = this[24].bottom - a2->bottom + v5.m128i_i32[3];
  if ( !SystemParametersInfoW(0x2Fu, 1u, &pvParam, 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      402LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  *v2 = (struct tagRECT)pvParam;
  this[24] = *a2;
}

/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C00EEBF4
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00EEAD0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00EEC70 (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00EECA0 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, char a2, int a3)
{
  __m128i *Store; // rax
  unsigned __int64 v6; // rdx
  int v7; // r8d
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  Store = (__m128i *)Feedback::GetStore(&v9, a1);
  v6 = (unsigned int)(1 << a2);
  v9 = *Store;
  v7 = ~(1 << a2) & (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) | (0x10000 << a2));
  v9.m128i_i32[2] = v7;
  if ( a3 )
  {
    v6 = v7 | (unsigned int)v6;
    v9.m128i_i32[2] = v6;
  }
  Feedback::Save((Feedback *)&v9, (const struct Feedback::tagSTORE *)v6);
  return 1LL;
}

/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01A825C
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00EEAD0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00EEC70 (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00EECA0 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1, char a2)
{
  __m128i *Store; // rax
  const struct Feedback::tagSTORE *v4; // rdx
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  Store = (__m128i *)Feedback::GetStore((__int64)&v6, a1);
  v4 = (const struct Feedback::tagSTORE *)(unsigned int)~(65537 << a2);
  v6 = *Store;
  v6.m128i_i32[2] = (unsigned int)v4 & _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  Feedback::Save((Feedback *)&v6, v4);
  return 1LL;
}

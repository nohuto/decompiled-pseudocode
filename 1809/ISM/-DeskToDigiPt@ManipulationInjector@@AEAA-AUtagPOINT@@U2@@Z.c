/*
 * XREFs of ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800B9CB4
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800B8980 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA494 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA560 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall ManipulationInjector::DeskToDigiPt(
        ManipulationInjector *this,
        struct tagPOINT a2,
        __int64 a3)
{
  __m128i v3; // xmm1

  v3 = _mm_cvtsi32_si128(HIDWORD(a3) - *((_DWORD *)this + 17));
  *(_DWORD *)a2.x = (int)(float)((float)((float)((float)(a3 - *((_DWORD *)this + 16)) * 32000.0)
                                       / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)))
                               + 0.5);
  *(_DWORD *)(*(_QWORD *)&a2 + 4LL) = (int)(float)((float)((float)(_mm_cvtepi32_ps(v3).m128_f32[0] * 32000.0)
                                                         / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)))
                                                 + 0.5);
  return a2;
}

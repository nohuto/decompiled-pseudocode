/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x1801BB9C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(
        CShadowEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_SHADOWEFFECT *a3)
{
  __m128 v4; // xmm6
  __m128i v5; // xmm7
  __m256i v7; // [rsp+20h] [rbp-48h]

  v4 = *(__m128 *)a3;
  v5 = *((__m128i *)a3 + 1);
  *(_OWORD *)v7.m256i_i8 = *(_OWORD *)a3;
  *(__m128i *)&v7.m256i_u64[2] = v5;
  (*(void (__fastcall **)(CShadowEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *(_OWORD *)((char *)this + 180) = *(_OWORD *)((char *)&v7.m256i_u64[1] + 4);
  *((_DWORD *)this + 44) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  (*(void (__fastcall **)(CShadowEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}

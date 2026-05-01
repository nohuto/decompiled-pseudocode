/*
 * XREFs of ?ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z @ 0x18009FB98
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24 (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::ShowBorder(
        ShellFeedsDesktopExperienceView *this,
        __m128i *a2,
        __m128i *a3)
{
  __m128i v3; // xmm1
  unsigned int v4; // r10d
  __m128i v5; // xmm2
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = 0;
  v5 = *a3;
  v6 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v7 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  if ( HIDWORD(v7) != HIDWORD(v6) )
    v4 = 8;
  if ( v3.m128i_i32[0] != v5.m128i_i32[0] )
    v4 |= 1u;
  if ( v3.m128i_i32[1] != v5.m128i_i32[1] )
    v4 |= 2u;
  if ( (_DWORD)v7 != (_DWORD)v6 )
    v4 |= 4u;
  v8 = *((_QWORD *)this + 13);
  v10 = 0uLL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int128 *))(*(_QWORD *)v8 + 136LL))(
    v8,
    v4,
    1LL,
    0x1000000LL,
    &v10);
  return 0LL;
}

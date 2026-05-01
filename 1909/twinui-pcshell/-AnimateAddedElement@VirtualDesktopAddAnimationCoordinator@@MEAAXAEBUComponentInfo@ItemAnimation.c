/*
 * XREFs of ?AnimateAddedElement@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUComponentInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803A4D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopAddAnimationCoordinator::AnimateAddedElement(
        VirtualDesktopAddAnimationCoordinator *this,
        __m128i *a2)
{
  int v2; // r8d
  __int64 v4; // rcx
  __int64 v6; // r8
  __m128i v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 62);
  v4 = a2->m128i_i64[1];
  v7 = a2[1];
  v7.m128i_i32[3] = v2 + _mm_srli_si128(v7, 8).m128i_i32[1];
  v7.m128i_i32[1] += v2;
  (*(void (__fastcall **)(__int64, __m128i *, _QWORD, _QWORD))(*(_QWORD *)v4 + 512LL))(v4, &v7, 0LL, 0LL);
  v6 = 24LL;
  if ( !*((_QWORD *)this + 12) )
    v6 = 26LL;
  (*(void (__fastcall **)(__int64, __m128i *, __int64, _QWORD))(*(_QWORD *)a2->m128i_i64[1] + 512LL))(
    a2->m128i_i64[1],
    a2 + 1,
    v6,
    0LL);
}

/*
 * XREFs of ?get_Size@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z @ 0x180236A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_Size(
        RTL_SRWLOCK *this,
        struct Windows::Foundation::Size *a2)
{
  RTL_SRWLOCK *v2; // rbx
  float v5; // xmm6_4
  float v6; // xmm7_4
  HWND Ptr; // rbp
  const char *v8; // r9
  __int64 result; // rax
  __m128i v10; // xmm7
  struct tagRECT Rect; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = this + 26;
  AcquireSRWLockShared(this + 26);
  v5 = *(float *)&this[49].Ptr;
  v6 = *((float *)&this[49].Ptr + 1);
  Ptr = (HWND)this[48].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( Ptr && v5 == 0.0 && v6 == 0.0 )
  {
    *(_QWORD *)&Rect.left = 0LL;
    *(_QWORD *)&Rect.right = 0LL;
    if ( !GetWindowRect(Ptr, &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1EC,
               (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
               v8);
    AcquireSRWLockExclusive(v2);
    v5 = (float)(Rect.right - Rect.left);
    v10 = _mm_cvtsi32_si128(Rect.bottom - Rect.top);
    *(float *)&this[49].Ptr = v5;
    LODWORD(v6) = _mm_cvtepi32_ps(v10).m128_u32[0];
    *((float *)&this[49].Ptr + 1) = v6;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  *(float *)a2 = v5;
  result = 0LL;
  *((float *)a2 + 1) = v6;
  return result;
}

/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C00E9EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C00E9FE8 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C00EA080 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __m128i v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  v9 = 0uLL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (__m128i *)MmUserProbeAddress;
  v9 = *v5;
  v10 = v5[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v9) == 24 )
  {
    if ( (v9.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL, v2, v3, v4);
      v7 = 0;
    }
    else if ( (v9.m128i_i32[1] & 0x40000000) != 0 )
    {
      v7 = QueryTrackMouseEvent(&v9);
      *a1 = v9;
      a1[1].m128i_i64[0] = v10;
    }
    else
    {
      v7 = TrackMouseEvent(&v9);
    }
  }
  else
  {
    UserSetLastError(87LL, v2, v3, v4);
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}

/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C00643D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C00644AC (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C0064544 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __m128i v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  EnterCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (__m128i *)MmUserProbeAddress;
  v9 = *v2;
  v10 = v2[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v9) == 24 )
  {
    if ( (v9.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL, MmUserProbeAddress);
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
    UserSetLastError(87LL, MmUserProbeAddress);
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}

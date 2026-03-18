/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C0011AB0
 * Callers:
 *     <none>
 * Callees:
 *     QueryTrackMouseEvent @ 0x1C0011BA8 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C0011C40 (TrackMouseEvent.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __m128i v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]

  v6 = 0uLL;
  v7 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (__m128i *)MmUserProbeAddress;
  v6 = *v2;
  v7 = v2[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v6) == 24 )
  {
    if ( (v6.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL);
      v4 = 0;
    }
    else if ( (v6.m128i_i32[1] & 0x40000000) != 0 )
    {
      v4 = QueryTrackMouseEvent(&v6);
      *a1 = v6;
      a1[1].m128i_i64[0] = v7;
    }
    else
    {
      v4 = TrackMouseEvent(&v6);
    }
  }
  else
  {
    UserSetLastError(87LL);
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}

/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C00DC3C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     QueryTrackMouseEvent @ 0x1C00DC4A8 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C00DC540 (TrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __m128i *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __m128i v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]

  EnterCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (__m128i *)MmUserProbeAddress;
  v11 = *v4;
  v12 = v4[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v11) == 24 )
  {
    if ( (v11.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL, MmUserProbeAddress, v2, v3);
      v9 = 0;
    }
    else if ( (v11.m128i_i32[1] & 0x40000000) != 0 )
    {
      v9 = QueryTrackMouseEvent(&v11);
      *a1 = v11;
      a1[1].m128i_i64[0] = v12;
    }
    else
    {
      v9 = TrackMouseEvent(&v11);
    }
  }
  else
  {
    UserSetLastError(87LL, MmUserProbeAddress, v2, v3);
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}

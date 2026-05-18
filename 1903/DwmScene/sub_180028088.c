/*
 * XREFs of sub_180028088 @ 0x180028088
 * Callers:
 *     sub_180029EA0 @ 0x180029EA0 (sub_180029EA0.c)
 *     sub_18002B96C @ 0x18002B96C (sub_18002B96C.c)
 * Callees:
 *     sub_180027EA8 @ 0x180027EA8 (sub_180027EA8.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180028088(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = -2LL;
  *(_QWORD *)&v5 = a1;
  v7 = 15LL;
  v6[2] = 0LL;
  LOBYTE(v6[0]) = 0;
  v5 = *a2;
  sub_180027EA8((__int64)a1, &v5, (__int64)v6);
  if ( v7 >= 0x10 )
  {
    v3 = v6[0];
    if ( v7 + 1 >= 0x1000 )
    {
      v3 = *(_QWORD *)(v6[0] - 8LL);
      if ( (unsigned __int64)(v6[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, v7 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  *a1 = &std::system_error::`vftable';
  return a1;
}

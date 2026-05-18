/*
 * XREFs of sub_1800F9BE4 @ 0x1800F9BE4
 * Callers:
 *     sub_1800B63F0 @ 0x1800B63F0 (sub_1800B63F0.c)
 *     sub_1800B6E00 @ 0x1800B6E00 (sub_1800B6E00.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 (__fastcall **__fastcall sub_1800F9BE4(_QWORD *a1))()
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    v3 = a1[17] - v2;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800F9C58LL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[15] = 0LL;
    a1[16] = 0LL;
    a1[17] = 0LL;
  }
  return sub_1800D2FD8(a1);
}

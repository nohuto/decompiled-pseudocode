/*
 * XREFs of sub_180091460 @ 0x180091460
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800A59AC @ 0x1800A59AC (sub_1800A59AC.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_180110230 @ 0x180110230 (sub_180110230.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180091460(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = *a2;
    v7 = v5 + 1;
    if ( v7 >= 0x1000 )
    {
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v7 + 39;
      v10 = v6 - v8;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v9);
        JUMPOUT(0x18009150FLL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a2[2] = 0LL;
  result = a1;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}

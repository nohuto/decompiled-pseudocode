/*
 * XREFs of sub_1800F00B0 @ 0x1800F00B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ED6C8 @ 0x1800ED6C8 (sub_1800ED6C8.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F00B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  char *v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v11 = -2LL;
  sub_18010F854(a1, a2, 0LL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_1800ED6C8((void **)&v9, &v8, (__int64)&v9);
  result = sub_18010DCD0(a1, a2, &v9);
  v5 = v9;
  if ( v9 )
  {
    v6 = (*((_QWORD *)&v10 + 1) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = v6 + 39;
      v5 = (char *)*((_QWORD *)v9 - 1);
      if ( (unsigned __int64)(v9 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v7);
        __debugbreak();
      }
    }
    return j_j__o_free(v5);
  }
  return result;
}

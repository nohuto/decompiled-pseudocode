/*
 * XREFs of sub_180031CA0 @ 0x180031CA0
 * Callers:
 *     sub_18002D9E8 @ 0x18002D9E8 (sub_18002D9E8.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_180062B88 @ 0x180062B88 (sub_180062B88.c)
 *     sub_1800F6AE0 @ 0x1800F6AE0 (sub_1800F6AE0.c)
 *     sub_180103750 @ 0x180103750 (sub_180103750.c)
 *     sub_180106EB0 @ 0x180106EB0 (sub_180106EB0.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180031CA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x180031D2DLL);
      }
      v6 = v10;
    }
    result = j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}

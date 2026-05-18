/*
 * XREFs of sub_18002B800 @ 0x18002B800
 * Callers:
 *     sub_18002B800 @ 0x18002B800 (sub_18002B800.c)
 *     sub_18002BA7C @ 0x18002BA7C (sub_18002BA7C.c)
 * Callees:
 *     sub_18002B800 @ 0x18002B800 (sub_18002B800.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002B800(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18002B800(a1, i[2]);
    i = (__int64 *)*i;
    result = j_j__o_free(v2);
  }
  return result;
}

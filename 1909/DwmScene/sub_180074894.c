/*
 * XREFs of sub_180074894 @ 0x180074894
 * Callers:
 *     sub_18012DB0D @ 0x18012DB0D (sub_18012DB0D.c)
 *     sub_18012DD5C @ 0x18012DD5C (sub_18012DD5C.c)
 * Callees:
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074894(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    sub_18007F430(v1 + 16, v3, **(_QWORD **)(v1 + 16));
    j_j__o_free(*(_QWORD *)(v1 + 16));
    return j__o_free(v1);
  }
  return result;
}

/*
 * XREFs of sub_180074784 @ 0x180074784
 * Callers:
 *     sub_18012D9FD @ 0x18012D9FD (sub_18012D9FD.c)
 *     sub_18012DC4C @ 0x18012DC4C (sub_18012DC4C.c)
 * Callees:
 *     sub_18007F320 @ 0x18007F320 (sub_18007F320.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180074784(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    sub_18007F320(v1 + 16, v3, **(_QWORD **)(v1 + 16));
    j_j__o_free(*(_QWORD *)(v1 + 16));
    return j__o_free(v1);
  }
  return result;
}

/*
 * XREFs of TpWaitForWork @ 0x18007D170
 * Callers:
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 * Callees:
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 */

struct _PEB *__fastcall TpWaitForWork(struct _PEB_LDR_DATA *a1, int a2)
{
  struct _PEB *result; // rax

  result = (struct _PEB *)sub_1800364D8(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return sub_180031C98(a1, a2);
  return result;
}

/*
 * XREFs of sub_140623EE4 @ 0x140623EE4
 * Callers:
 *     sub_140623EA0 @ 0x140623EA0 (sub_140623EA0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140623EE4(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}

/*
 * XREFs of KeSetEventBoostPriority @ 0x1402A9B60
 * Callers:
 *     NtSetEventBoostPriority @ 0x14090D2A0 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return KeSetEventBoostPriorityEx(a1, v2, 0LL, 0LL, 1, 0);
}

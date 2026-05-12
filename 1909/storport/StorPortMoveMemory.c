/*
 * XREFs of StorPortMoveMemory @ 0x1C003C940
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A80 (memmove.c)
 */

void *__fastcall StorPortMoveMemory(void *a1, const void *a2, unsigned int a3)
{
  return memmove(a1, a2, a3);
}

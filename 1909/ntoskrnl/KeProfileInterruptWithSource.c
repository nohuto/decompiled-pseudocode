/*
 * XREFs of KeProfileInterruptWithSource @ 0x1402AC110
 * Callers:
 *     <none>
 * Callees:
 *     KiProcessProfileList @ 0x1402AC50C (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}

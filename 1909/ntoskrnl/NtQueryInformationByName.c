/*
 * XREFs of NtQueryInformationByName @ 0x140856C20
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x140855C60 (IoQueryInformationByName.c)
 */

__int64 __fastcall NtQueryInformationByName(__int64 a1, unsigned __int64 a2, void *a3, unsigned int a4, signed int a5)
{
  return IoQueryInformationByName(a1, a2, a3, a4, a5, 0, 0LL);
}

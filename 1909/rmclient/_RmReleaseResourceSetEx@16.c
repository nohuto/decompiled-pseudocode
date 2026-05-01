/*
 * XREFs of _RmReleaseResourceSetEx@16 @ 0x10011410
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientReleaseResourceSet@16 @ 0x10011A05 (_RmpClientReleaseResourceSet@16.c)
 */

int __stdcall RmReleaseResourceSetEx(int a1, int a2, int a3, int a4)
{
  return RmpClientReleaseResourceSet(a2, a3);
}

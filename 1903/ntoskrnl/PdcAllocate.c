/*
 * XREFs of PdcAllocate @ 0x1408D99C4
 * Callers:
 *     PdcNotificationClientRegister @ 0x1408D94E0 (PdcNotificationClientRegister.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PdcAllocate(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}

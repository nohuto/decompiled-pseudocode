/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x14015C4E0
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 */

void __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  MiWriteComplete(*a4, (unsigned int *)(*a4 + 16), 0);
}

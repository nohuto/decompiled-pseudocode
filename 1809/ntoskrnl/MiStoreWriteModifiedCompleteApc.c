/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x1401581E0
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 */

int __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  return MiWriteComplete(*a4, (int *)(*a4 + 16), 0);
}

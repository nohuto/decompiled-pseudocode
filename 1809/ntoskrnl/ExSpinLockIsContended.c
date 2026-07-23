/*
 * XREFs of ExSpinLockIsContended @ 0x14031C1F8
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSpinLockIsContended(_DWORD *a1)
{
  return (*a1 >> 30) & 1;
}

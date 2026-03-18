/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x140193554
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400DAA78 (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x1402CE0FC (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 864),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 864),
                           (*(_DWORD *)(a1 + 864) & 0xFFFFFC00 | 0x200) + 1024);
}

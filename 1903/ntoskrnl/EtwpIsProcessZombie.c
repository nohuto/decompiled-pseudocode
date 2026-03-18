/*
 * XREFs of EtwpIsProcessZombie @ 0x1407080A0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC660 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 780) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 1176)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}

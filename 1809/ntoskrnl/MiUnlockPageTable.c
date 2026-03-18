/*
 * XREFs of MiUnlockPageTable @ 0x140192D08
 * Callers:
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140104A70 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockPageTableInternal(a1, a2);
}

/*
 * XREFs of MiUnlockPageTable @ 0x140192E68
 * Callers:
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockPageTableInternal(a1, a2);
}

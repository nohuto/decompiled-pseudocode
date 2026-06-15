/*
 * XREFs of ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18004E030
 * Callers:
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18002FE40 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x18003DA24 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18004DEA0 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSessionStore::IsEqual(PCNZWCH *this, const unsigned __int16 *a2)
{
  return CompareStringW(0x7Fu, 1u, a2, -1, this[2], -1) == 2;
}

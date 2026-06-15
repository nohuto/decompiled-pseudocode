/*
 * XREFs of ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140031DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStreamGroup::GetStreamVpo(
        CStreamGroup *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  return CSubmixImpl::GetStreamVpo(this, a2, a3, a4, a5);
}

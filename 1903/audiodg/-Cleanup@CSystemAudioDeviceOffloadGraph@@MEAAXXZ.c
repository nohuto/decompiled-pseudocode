/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x1400336A0
 * Callers:
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003346C (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317F0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceOffloadGraph::Cleanup(CSystemAudioDeviceOffloadGraph *this)
{
  __int128 v2; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  EtwEventActivityIdControl(4LL, &v2);
}

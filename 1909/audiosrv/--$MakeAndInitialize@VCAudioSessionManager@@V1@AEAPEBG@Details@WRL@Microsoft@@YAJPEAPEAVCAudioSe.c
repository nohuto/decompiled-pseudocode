/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x180036AF8
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035D50 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180036B98 (-RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x180036E34 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800CA084 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManager,CAudioSessionManager,unsigned short const * &>(
        CAudioSessionManager **a1,
        const unsigned __int16 **a2)
{
  CAudioSessionManager *v4; // rax
  int v5; // edi
  CAudioSessionManager *v6; // rbx

  *a1 = 0LL;
  v4 = (CAudioSessionManager *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CAudioSessionManager::CAudioSessionManager(v4);
    v5 = CAudioSessionManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}

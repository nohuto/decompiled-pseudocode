/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005C498
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005C450 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18005C52C (-RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ??0CAudioSessionManagerProvider@@QEAA@XZ @ 0x18005CC18 (--0CAudioSessionManagerProvider@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x18005FB18 (-InternalRelease@-$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800BBE04 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManagerProvider,CAudioSessionManagerProvider,>(
        CAudioSessionManagerProvider **a1)
{
  CAudioSessionManagerProvider *v2; // rax
  int v3; // ebx
  CAudioSessionManagerProvider *v4; // rdi
  CAudioSessionManagerProvider *v5; // rcx
  CAudioSessionManagerProvider *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (CAudioSessionManagerProvider *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CAudioSessionManagerProvider::CAudioSessionManagerProvider(v2);
    v7 = v4;
    v8 = 0LL;
    v3 = CAudioSessionManagerProvider::RuntimeClassInitialize(v5);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}

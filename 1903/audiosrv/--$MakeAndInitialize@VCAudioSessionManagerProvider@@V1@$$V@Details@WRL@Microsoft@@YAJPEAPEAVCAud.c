/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005A698
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005A790 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18005A0A8 (-RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A754 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180063218 (-InternalRelease@-$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManagerProvider,CAudioSessionManagerProvider,>(
        _QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx
  CAudioSessionManagerProvider *v4; // rcx
  int v5; // edi
  char *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v2);
    *(_QWORD *)v3 = &CAudioSessionManagerProvider::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 16), 0, 0);
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    v7 = v3;
    v8 = 0LL;
    v5 = CAudioSessionManagerProvider::RuntimeClassInitialize(v4);
    if ( v5 >= 0 )
    {
      if ( v3 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v3 + 3);
        v3 = v7;
      }
      *a1 = v3;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}

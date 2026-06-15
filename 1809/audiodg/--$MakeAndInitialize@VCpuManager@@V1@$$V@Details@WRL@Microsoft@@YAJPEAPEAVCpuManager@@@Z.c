/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x1400012B8
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14001357C (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ??0CpuManager@@QEAA@XZ @ 0x1400013E8 (--0CpuManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  unsigned int v2; // edi
  CpuManager *v3; // rax
  CpuManager *v4; // rbx
  _OWORD v6[10]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v7; // [rsp+E8h] [rbp+37h]
  CpuManager *v8; // [rsp+120h] [rbp+6Fh] BYREF
  CpuManager *v9; // [rsp+128h] [rbp+77h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (CpuManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = CpuManager::CpuManager(v3);
    v8 = v4;
    *((_DWORD *)v4 + 68) = 0;
    memset_0(v6, 0, 0xA8uLL);
    *(_OWORD *)((char *)v4 + 280) = v6[0];
    *(_OWORD *)((char *)v4 + 296) = v6[1];
    *(_OWORD *)((char *)v4 + 312) = v6[2];
    *(_OWORD *)((char *)v4 + 328) = v6[3];
    *(_OWORD *)((char *)v4 + 344) = v6[4];
    *(_OWORD *)((char *)v4 + 360) = v6[5];
    *(_OWORD *)((char *)v4 + 376) = v6[6];
    *(_OWORD *)((char *)v4 + 392) = v6[7];
    *(_OWORD *)((char *)v4 + 408) = v6[8];
    *(_OWORD *)((char *)v4 + 424) = v6[9];
    *((_QWORD *)v4 + 55) = v7;
    *((_OWORD *)v4 + 28) = 0u;
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

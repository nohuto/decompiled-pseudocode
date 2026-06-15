/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140049C74
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004C690 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x1400179C8 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        __int64 a4)
{
  HRESULT v8; // edi
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rsi
  unsigned int v14; // esi
  __int64 v15; // rdi
  int v17; // [rsp+20h] [rbp-30h] BYREF
  INT32 result; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  HSTRING string1[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+48h] BYREF

  string1[1] = (HSTRING)-2LL;
  v22 = 0;
  v20 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v20);
      v9 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
      v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = 0LL;
      if ( v10 )
      {
        v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v10,
                v11,
                v12);
        v19 = v13;
      }
      v8 = v13 == 0 ? 0x8007000E : 0;
      if ( v13 )
      {
        v19 = 0LL;
        v9 = v13;
        v20 = v13;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v19);
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(*(_QWORD *)(a1 + 104), &v22);
        v14 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            result = 0;
            v17 = 0;
            v15 = *(_QWORD *)(a1 + 104);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, v14, &v19);
            if ( v8 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL))(v19, string1);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 64LL))(v19, &v17);
            if ( v17 == a3 )
            {
              v8 = WindowsCompareStringOrdinal(string1[0], a2, &result);
              if ( v8 < 0 )
                break;
              if ( !result )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 104LL))(v9, v19);
                if ( v8 < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            if ( ++v14 >= v22 )
              goto LABEL_17;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        }
        else
        {
LABEL_17:
          v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, a4);
        }
      }
    }
    else
    {
      v8 = -2147024809;
    }
  }
  else
  {
    v8 = -2147467261;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v20);
  return (unsigned int)v8;
}

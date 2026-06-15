/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140047390
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x1400131F8 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001368C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140014854 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, __int64 a3)
{
  HRESULT v6; // edi
  __int64 v7; // rbx
  void *v8; // rax
  bool v9; // dl
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 result; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0;
  v15 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v15);
      v7 = 0LL;
      result = 0LL;
      v6 = 0;
      v15 = 0LL;
      v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8
        && (v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                    (__int64)v8,
                    v9),
            (result = v10) != 0) )
      {
        result = 0LL;
        v7 = v10;
        v15 = v10;
      }
      else
      {
        v6 = -2147024882;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&result);
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(*(_QWORD *)(a1 + 104), &v17);
        v11 = 0;
        if ( v17 )
        {
          while ( 1 )
          {
            v14 = 0LL;
            LODWORD(result) = 0;
            v12 = *(_QWORD *)(a1 + 104);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
            v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, v11, &v14);
            if ( v6 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 48LL))(v14, string1);
            v6 = WindowsCompareStringOrdinal(string1[0], a2, (INT32 *)&result);
            if ( v6 < 0 )
              break;
            if ( !(_DWORD)result )
            {
              v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v14);
              if ( v6 < 0 )
                break;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
            if ( ++v11 >= v17 )
              goto LABEL_16;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        }
        else
        {
LABEL_16:
          v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, a3);
        }
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v15);
  return (unsigned int)v6;
}

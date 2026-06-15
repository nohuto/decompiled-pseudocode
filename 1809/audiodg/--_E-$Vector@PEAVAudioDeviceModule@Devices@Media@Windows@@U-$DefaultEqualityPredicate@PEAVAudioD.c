/*
 * XREFs of ??_E?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x140017920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140017AA4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAudioDevi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140046574 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  char *v4; // rbp
  __int64 v5; // rax
  char *v7; // rdi
  __int64 v8; // rsi

  *Block = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable';
  Block[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable'{for `IWeakReferenceSource'};
  Block[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>'};
  v4 = (char *)Block[7];
  v5 = *((unsigned int *)Block + 10);
  Block[5] = 0LL;
  *((_DWORD *)Block + 12) = 0;
  ++*((_DWORD *)Block + 22);
  Block[7] = 0LL;
  if ( v4 )
  {
    if ( (_DWORD)v5 )
    {
      v7 = v4;
      v8 = v5;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v7);
        v7 += 8;
        --v8;
      }
      while ( v8 );
    }
    free(v4);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

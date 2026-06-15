/*
 * XREFs of ??_G?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1400463D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140045904 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVAudioDe.c)
 */

__int64 *__fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Media::Devices::AudioDeviceModule *>>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

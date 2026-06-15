/*
 * XREFs of ?First@?$SimpleVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@345@@Z @ 0x140047B70
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule______XWinRT::IntVersionTag_::Do__lambda_8ef619453896d5e01f26f7f9c9aeedcd___lambda_b604df33f0504b685457b96bcf3a28c5___ @ 0x14004451C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_14004451C.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule______XWinRT::IntVersionTag_::Do__lambda_8ef619453896d5e01f26f7f9c9aeedcd___lambda_b604df33f0504b685457b96bcf3a28c5___(
           (unsigned int *)(a1 + 32),
           *(_QWORD *)(a1 + 24),
           (__int64)v3,
           &v4);
}

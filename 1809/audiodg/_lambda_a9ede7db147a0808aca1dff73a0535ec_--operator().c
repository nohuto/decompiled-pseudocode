/*
 * XREFs of _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x1400485B8
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64____XWinRT::IntVersionTag_::Do__lambda_a59ce847e09e9a3f758bc36443109e82___lambda_a9ede7db147a0808aca1dff73a0535ec___ @ 0x140046894 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140046894.c)
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x14004AB80 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudio.c)
 * Callees:
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140046574 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

_DWORD **__fastcall lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>((__int64 *)(*a1[1] + 8 * v2));
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v4 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}

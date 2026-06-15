/*
 * XREFs of ?SetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14004BD90
 * Callers:
 *     <none>
 * Callees:
 *     memmove_s @ 0x14002FF40 (memmove_s.c)
 *     ??$?0PEAUIBuffer@Streams@Storage@Windows@@@?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z @ 0x140043BD8 (--$-0PEAUIBuffer@Streams@Storage@Windows@@@-$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U-$D.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400440A8 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140044F18 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004AEA4 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004C41C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 Destination; // [rsp+88h] [rbp+38h] BYREF

  v10 = a3;
  v9[1] = -2LL;
  v3 = a2;
  LODWORD(Destination) = 0;
  v8 = 0LL;
  XWinRT::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>(
    &v7,
    &v10,
    (int *)&Destination);
  v5 = Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(v9, a1 + 72, &Destination);
    v5 = Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v3), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) = v7;
          v7 = 0LL;
          ++*(_DWORD *)(a1 + 88);
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v8);
          v8 = Destination;
        }
      }
    }
    if ( v9[0] )
    {
      if ( *(_DWORD *)v9[0] == 1 )
        *(_DWORD *)(v9[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v9[0] + 8LL));
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v8);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}

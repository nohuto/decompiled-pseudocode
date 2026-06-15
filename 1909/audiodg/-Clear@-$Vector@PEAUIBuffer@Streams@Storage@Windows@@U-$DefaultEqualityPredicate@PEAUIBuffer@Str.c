/*
 * XREFs of ?Clear@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1400470C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140044E64 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004AE04 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004C2FC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?_EraseAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x14004C344 (-_EraseAll@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer.c)
 *     ?_Free@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIAudioDeviceModule@Devices@Media@5@I@Z @ 0x14004C37C (-_Free@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAud.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Clear(
        __int64 a1)
{
  bool v2; // r15
  void *v3; // rbx
  int v4; // edi
  int v5; // ebx
  int v7; // [rsp+80h] [rbp+38h] BYREF
  int v8; // [rsp+88h] [rbp+40h] BYREF
  void *v9; // [rsp+90h] [rbp+48h] BYREF
  __int64 v10; // [rsp+98h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v8 = 0;
  XWinRT::SerializingLockPolicy::Write(&v10, a1 + 72, &v7);
  v4 = v7;
  if ( v7 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v7);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 40);
    Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::_EraseAll(
      a1,
      &v9,
      &v8);
    v2 = v5 != 0;
    v3 = v9;
  }
  if ( v10 )
  {
    if ( *(_DWORD *)v10 == 1 )
      *(_DWORD *)(v10 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 8));
  }
  Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::_Free(v3);
  if ( v4 >= 0 && v2 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v7,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           0LL,
                           0LL);
  return (unsigned int)v4;
}

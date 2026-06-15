/*
 * XREFs of ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x1400486D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400174F0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x140043F6C (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400440A8 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004AEC0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 *v5; // r15
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // r12d
  size_t v12; // rbx
  int v13; // ebx
  __int64 v14; // rax
  unsigned int i; // ecx
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF
  void *Block; // [rsp+70h] [rbp+8h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v17[1] = -2LL;
  v5 = a4;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v19 = 0;
  v12 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  Block = 0LL;
  XWinRT::SerializingLockPolicy::Read(v17, a1 + 72, &v19);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v19;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( a2 > v11 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( a3 )
        {
          do
          {
            if ( (unsigned int)v10 + a2 >= v11 )
              break;
            v13 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                    &v5[v10],
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * ((unsigned int)v10 + a2)));
            if ( v13 < 0 )
              break;
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < a3 );
        }
      }
      else if ( a3 )
      {
        do
        {
          v14 = (unsigned int)v9 + a2;
          if ( (unsigned int)v14 >= v11 )
            break;
          v13 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                  &v5[v9],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14));
          if ( v13 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < a3 );
      }
    }
  }
  if ( v17[0] )
  {
    if ( *(_DWORD *)v17[0] == 1 )
      --*(_DWORD *)(v17[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v17[0] + 8LL));
  }
  if ( v13 < 0 )
  {
    if ( (_DWORD)v9 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v5++);
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    if ( (_DWORD)v10 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v11 )
          break;
        v13 = 0;
        LODWORD(v9) = v9 + 1;
      }
    }
    *a5 = v9;
  }
  operator delete(Block);
  return (unsigned int)v13;
}

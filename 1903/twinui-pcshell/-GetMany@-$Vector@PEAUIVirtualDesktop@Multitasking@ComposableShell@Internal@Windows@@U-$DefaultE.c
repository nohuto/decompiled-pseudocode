/*
 * XREFs of ?GetMany@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAI@Z @ 0x18030A510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800881A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18010AAC8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180115C2C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x1803088E8 (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::GetMany(
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
  const struct std::nothrow_t *v13; // rdx
  int v14; // ebx
  __int64 v15; // rax
  unsigned int i; // ecx
  RTL_SRWLOCK *v18[9]; // [rsp+20h] [rbp-48h] BYREF
  void *v19; // [rsp+70h] [rbp+8h]
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v18[1] = (RTL_SRWLOCK *)-2LL;
  v5 = a4;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v20 = 0;
  v12 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v19 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v18, (RTL_SRWLOCK *)(a1 + 72), &v20);
  if ( !*(_DWORD *)(a1 + 48) || (v19 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v14 = v20;
  }
  else
  {
    v14 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v14 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( a2 > v11 )
    {
      v14 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v14 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( a3 )
        {
          do
          {
            if ( (unsigned int)v10 + a2 >= v11 )
              break;
            v14 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                    &v5[v10],
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * ((unsigned int)v10 + a2)));
            if ( v14 < 0 )
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
          v15 = (unsigned int)v9 + a2;
          if ( (unsigned int)v15 >= v11 )
            break;
          v14 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                  &v5[v9],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v15));
          if ( v14 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < a3 );
      }
    }
  }
  if ( v18[0] )
  {
    if ( v18[0]->Ptr == (PVOID)1 )
      --LODWORD(v18[0][1].Ptr);
    else
      ReleaseSRWLockShared(v18[0] + 1);
  }
  if ( v14 < 0 )
  {
    if ( (_DWORD)v9 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v5++);
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
        v14 = 0;
        LODWORD(v9) = v9 + 1;
      }
    }
    *a5 = v9;
  }
  operator delete(v19, v13);
  return (unsigned int)v14;
}

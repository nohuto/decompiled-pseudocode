/*
 * XREFs of ?IndexOf@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIShellTab@Tabs@ComposableShell@25@PEAIPEAE@Z @ 0x180283780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008AD14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@1@V231@@Z @ 0x180129A88 (--$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Inte.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18012E9B8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013509C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801355E8 (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?IndexOfInternal@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@IPEAUIShellTab@Tabs@ComposableShell@25@PEAIPEAE@Z @ 0x18028396C (-IndexOfInternal@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEquality.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rdi
  __int64 v9; // rbp
  const struct std::nothrow_t *v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // esi
  unsigned int v14; // r14d
  size_t v15; // rax
  char *v16; // rax
  unsigned int i; // r14d
  __int64 v18; // rcx
  int v19; // ecx
  char *v20; // rbx
  volatile signed __int32 *v21; // rcx
  __m128i v23[4]; // [rsp+40h] [rbp-48h] BYREF
  char *v24; // [rsp+90h] [rbp+8h] BYREF
  RTL_SRWLOCK *v25; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v25, (RTL_SRWLOCK *)(a1 + 104), &v24);
  v12 = -1LL;
  v13 = (int)v24;
  if ( (int)v24 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 80) )
    {
      v14 = *(_DWORD *)(a1 + 72);
      v15 = 16LL * v14;
      if ( !is_mul_ok(v14, 0x10uLL) )
        v15 = -1LL;
      v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v16;
      v24 = v16;
      if ( v16 )
        `vector constructor iterator'(
          v16,
          16LL,
          v14,
          (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>);
      else
        v8 = 0LL;
      if ( v8 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
        {
          v18 = 16LL * i;
          v23[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + v18);
          v13 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
                  (__int64)&v8[v18],
                  v23);
          if ( v13 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>::IndexOfInternal(
              v11,
              *(_QWORD *)(a1 + 88),
              *(_DWORD *)(a1 + 72),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
    v12 = -1LL;
  }
  v19 = (int)v25;
  if ( v25 )
  {
    if ( LODWORD(v25->Ptr) == 1 )
      --LODWORD(v25[1].Ptr);
    else
      ReleaseSRWLockShared(v25 + 1);
  }
  if ( v13 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_29;
    v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>::IndexOfInternal(
            v19,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( (_DWORD)v9 )
  {
    v20 = v8;
    do
    {
      v21 = *(volatile signed __int32 **)v20;
      if ( v20[8] )
      {
        XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v21);
      }
      else if ( v21 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, const struct std::nothrow_t *, __int64))(*(_QWORD *)v21 + 16LL))(
          v21,
          v10,
          v12);
      }
      v20[8] = 0;
      *(_QWORD *)v20 = 0LL;
      v20 += 16;
      --v9;
    }
    while ( v9 );
  }
LABEL_29:
  operator delete(v8, v10);
  return (unsigned int)v13;
}

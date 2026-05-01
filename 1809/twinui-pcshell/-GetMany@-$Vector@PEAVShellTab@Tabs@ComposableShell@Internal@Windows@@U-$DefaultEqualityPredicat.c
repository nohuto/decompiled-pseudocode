/*
 * XREFs of ?GetMany@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIShellTab@Tabs@ComposableShell@25@PEAI@Z @ 0x18020BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180119FDC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011EAC0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@1@V231@@Z @ 0x1802096C8 (--$Construct@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ??$Destroy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18020997C (--$Destroy@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SA.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18020CAC8 (-Localize@ReferencedGitCookie@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18020D12C (-Release@ReferencedGitCookie@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Tabs::ShellTab *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Tabs::ShellTab *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Tabs::ShellTab *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r14
  unsigned int v8; // esi
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  char *v11; // r13
  const struct std::nothrow_t *v12; // rdx
  size_t v13; // rax
  char *v14; // rax
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r14d
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  RTL_SRWLOCK *v22; // rcx
  unsigned int v23; // r12d
  char *v24; // rbx
  unsigned int v25; // ecx
  __int64 v26; // rbx
  __int64 *v27; // rbp
  char *v28; // rbx
  __int64 v29; // rsi
  void *v30; // rcx
  RTL_SRWLOCK *v32[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v33[5]; // [rsp+30h] [rbp-58h] BYREF
  int v34; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+10h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]
  _QWORD *v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v35 = a2;
  v32[1] = (RTL_SRWLOCK *)-2LL;
  v5 = a4;
  v8 = 0;
  v9 = 0;
  v36 = 0;
  v34 = 0;
  v10 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v32, (RTL_SRWLOCK *)(a1 + 104), &v34);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_11;
  v13 = 16 * v10;
  if ( !is_mul_ok(v10, 0x10uLL) )
    v13 = -1LL;
  v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v14;
  v33[0].m128i_i64[0] = (__int64)v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      16LL,
      v10,
      (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>);
  else
    v11 = 0LL;
  if ( v11 )
  {
LABEL_11:
    v15 = v34;
  }
  else
  {
    v15 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 72);
    v36 = v16;
    v17 = v35;
    if ( v35 > v16 )
    {
      v15 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = v36;
      v17 = v35;
    }
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        if ( a3 )
        {
          do
          {
            v18 = v9 + v17;
            if ( v18 >= v16 )
              break;
            v33[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
            v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                    (__int64)&v11[16 * v9],
                    v33);
            if ( v15 < 0 )
              break;
            ++v9;
            v16 = v36;
            v17 = v35;
          }
          while ( v9 < a3 );
        }
      }
      else if ( a3 )
      {
        v19 = v17;
        v20 = v37;
        do
        {
          if ( v19 >= v16 )
            break;
          v33[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v19);
          v15 = 0;
          v21 = v33[0].m128i_i64[0];
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v33[0], 8)) )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Localize(
                    v33[0].m128i_i64[0],
                    v20);
          }
          else
          {
            *v20 = v33[0].m128i_i64[0];
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          }
          if ( v15 < 0 )
            break;
          ++v8;
          ++v19;
          ++v20;
          v16 = v36;
        }
        while ( v8 < a3 );
        v5 = v37;
      }
    }
  }
  if ( v32[0] )
  {
    v22 = v32[0] + 1;
    if ( v32[0]->Ptr == (PVOID)1 )
      --LODWORD(v22->Ptr);
    else
      ReleaseSRWLockShared(v22);
  }
  if ( v15 < 0 )
  {
LABEL_49:
    if ( v8 )
    {
      v26 = v8;
      v27 = v37;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Tabs::IShellTab>(v27++);
        --v26;
      }
      while ( v26 );
    }
    if ( v8 < v9 )
    {
      v28 = &v11[16 * v8];
      v29 = v9 - v8;
      do
      {
        v30 = *(void **)v28;
        if ( v28[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Release(v30);
        }
        else if ( v30 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v28[8] = 0;
        *(_QWORD *)v28 = 0LL;
        v28 += 16;
        --v29;
      }
      while ( v29 );
    }
  }
  else
  {
    if ( v9 )
    {
      v23 = 0;
      if ( a3 )
      {
        v24 = v11;
        v25 = v36;
        while ( v23 + v35 < v25 )
        {
          *v5 = 0LL;
          v15 = 0;
          if ( v24[8] )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Localize(
                    *(_QWORD *)v24,
                    v5);
            if ( v15 >= 0 )
            {
              XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Release(*(void **)v24);
              v24[8] = 0;
              *(_QWORD *)v24 = 0LL;
            }
            v25 = v36;
          }
          else
          {
            *v5 = *(_QWORD *)v24;
            *(_QWORD *)v24 = 0LL;
          }
          if ( v15 < 0 )
            goto LABEL_49;
          ++v8;
          ++v23;
          ++v5;
          v24 += 16;
          if ( v23 >= a3 )
            break;
        }
      }
    }
    *a5 = v8;
  }
  operator delete(v11, v12);
  return (unsigned int)v15;
}

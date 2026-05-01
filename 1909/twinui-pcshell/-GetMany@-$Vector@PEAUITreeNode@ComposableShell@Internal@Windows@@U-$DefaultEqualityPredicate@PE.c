/*
 * XREFs of ?GetMany@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITreeNode@ComposableShell@25@PEAI@Z @ 0x18022ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008AD14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@1@V231@@Z @ 0x180129A88 (--$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Inte.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180129BE8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18012E9B8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013509C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801355E8 (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x18022FFB4 (-Localize@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@det.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::GetMany(
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
  unsigned int v22; // r12d
  char *v23; // rbx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 *v26; // rbp
  char *v27; // rbx
  __int64 v28; // rsi
  volatile signed __int32 *v29; // rcx
  RTL_SRWLOCK *v31[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v32[5]; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+10h]
  unsigned int v35; // [rsp+A0h] [rbp+18h]
  _QWORD *v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v34 = a2;
  v31[1] = (RTL_SRWLOCK *)-2LL;
  v5 = a4;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v33 = 0;
  v10 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v31, (RTL_SRWLOCK *)(a1 + 104), &v33);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_11;
  v13 = 16 * v10;
  if ( !is_mul_ok(v10, 0x10uLL) )
    v13 = -1LL;
  v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v14;
  v32[0].m128i_i64[0] = (__int64)v14;
  if ( v14 )
    `vector constructor iterator'(
      v14,
      16LL,
      v10,
      (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>);
  else
    v11 = 0LL;
  if ( v11 )
  {
LABEL_11:
    v15 = v33;
  }
  else
  {
    v15 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 72);
    v35 = v16;
    v17 = v34;
    if ( v34 > v16 )
    {
      v15 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v16 = v35;
      v17 = v34;
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
            v32[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
            v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
                    (__int64)&v11[16 * v9],
                    v32);
            if ( v15 < 0 )
              break;
            ++v9;
            v16 = v35;
            v17 = v34;
          }
          while ( v9 < a3 );
        }
      }
      else if ( a3 )
      {
        v19 = v17;
        v20 = v36;
        do
        {
          if ( v19 >= v16 )
            break;
          v32[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v19);
          v15 = 0;
          v21 = v32[0].m128i_i64[0];
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v32[0], 8)) )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Localize(
                    v32[0].m128i_i64[0],
                    v20);
          }
          else
          {
            *v20 = v32[0].m128i_i64[0];
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          }
          if ( v15 < 0 )
            break;
          ++v8;
          ++v19;
          ++v20;
          v16 = v35;
        }
        while ( v8 < a3 );
        v5 = v36;
      }
    }
  }
  if ( v31[0] )
  {
    if ( v31[0]->Ptr == (PVOID)1 )
      --LODWORD(v31[0][1].Ptr);
    else
      ReleaseSRWLockShared(v31[0] + 1);
  }
  if ( v15 < 0 )
  {
LABEL_49:
    if ( v8 )
    {
      v25 = v8;
      v26 = v36;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v26++);
        --v25;
      }
      while ( v25 );
    }
    if ( v8 < v9 )
    {
      v27 = &v11[16 * v8];
      v28 = v9 - v8;
      do
      {
        v29 = *(volatile signed __int32 **)v27;
        if ( v27[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v29);
        }
        else if ( v29 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
        v27[8] = 0;
        *(_QWORD *)v27 = 0LL;
        v27 += 16;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    if ( v9 )
    {
      v22 = 0;
      if ( a3 )
      {
        v23 = v11;
        v24 = v35;
        while ( v22 + v34 < v24 )
        {
          *v5 = 0LL;
          v15 = 0;
          if ( v23[8] )
          {
            v15 = XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Localize(
                    *(_QWORD *)v23,
                    v5);
            if ( v15 >= 0 )
            {
              XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(*(volatile signed __int32 **)v23);
              v23[8] = 0;
              *(_QWORD *)v23 = 0LL;
            }
            v24 = v35;
          }
          else
          {
            *v5 = *(_QWORD *)v23;
            *(_QWORD *)v23 = 0LL;
          }
          if ( v15 < 0 )
            goto LABEL_49;
          ++v8;
          ++v22;
          ++v5;
          v23 += 16;
          if ( v22 >= a3 )
            break;
        }
      }
    }
    *a5 = v8;
  }
  operator delete(v11, v12);
  return (unsigned int)v15;
}

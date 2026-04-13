/*
 * XREFs of ?GetMany@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x18005F480
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005BA54 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006052C (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerStateTransition@Int.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAF80 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r13
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  char *v11; // r12
  _DWORD *v12; // rbx
  int v13; // eax
  int v14; // ebp
  unsigned __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // edi
  char *v18; // rbx
  unsigned int v19; // esi
  char v20; // al
  unsigned int v21; // edi
  unsigned int v22; // r15d
  __int64 v23; // rbx
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rdi
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-70h]
  _DWORD *v30; // [rsp+40h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-58h]
  __m128i v32; // [rsp+50h] [rbp-58h]
  unsigned int v35; // [rsp+C0h] [rbp+18h]

  v5 = a4;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v10 = a3;
  if ( a3 )
  {
    memset_0(a4, 0, 8LL * a3);
    v7 = a1;
  }
  *a5 = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(v7 + 104);
  v30 = (_DWORD *)(v7 + 104);
  if ( *(_DWORD *)(v7 + 104) == 1 )
  {
    SRWLock = (PSRWLOCK)(v7 + 112);
    v13 = *(_DWORD *)(v7 + 112);
    if ( v13 >= 0 )
      *(_DWORD *)(v7 + 112) = v13 + 1;
    v5 = a4;
  }
  else
  {
    SRWLock = (PSRWLOCK)(v7 + 112);
    AcquireSRWLockShared((PSRWLOCK)(v7 + 112));
    v7 = a1;
  }
  v14 = 0;
  if ( *(_DWORD *)(v7 + 80) )
  {
    v15 = 16 * v10;
    if ( !is_mul_ok(v10, 0x10uLL) )
      v15 = -1LL;
    v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v16;
    if ( v16 )
    {
      for ( ; v10; --v10 )
      {
        *(_QWORD *)v16 = 0LL;
        v16[8] = 0;
        v16 += 16;
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v14 = -2147024882;
LABEL_21:
      RoOriginateError((unsigned int)v14, 0LL);
      goto LABEL_44;
    }
    v7 = a1;
  }
  v35 = *(_DWORD *)(v7 + 72);
  if ( a2 > v35 )
  {
    v14 = -2147483637;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)(v7 + 80) )
  {
    if ( !a3 )
      goto LABEL_44;
    v21 = a2;
    v22 = *(_DWORD *)(v7 + 72);
    while ( 1 )
    {
      if ( v21 >= v22 )
      {
LABEL_43:
        v9 = 0;
        goto LABEL_44;
      }
      v32 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v21);
      v14 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) )
      {
        *v5 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18018F7C8 + 40LL))(
                qword_18018F7C8,
                *(unsigned int *)(v32.m128i_i64[0] + 4),
                &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
                v5);
      }
      else
      {
        *v5 = v32.m128i_i64[0];
        if ( !v32.m128i_i64[0] )
          goto LABEL_41;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32.m128i_i64[0] + 8LL))(v32.m128i_i64[0]);
      }
      v7 = a1;
LABEL_41:
      if ( v14 >= 0 )
      {
        ++v8;
        ++v21;
        ++v5;
        if ( v8 < a3 )
          continue;
      }
      goto LABEL_43;
    }
  }
  if ( a3 )
  {
    v17 = a2;
    v18 = v11;
    v19 = *(_DWORD *)(v7 + 72);
    do
    {
      if ( v17 >= v19 )
        break;
      v31 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v17);
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
      v18[8] = v20;
      if ( v20 )
      {
        *(_QWORD *)v18 = v31.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v31.m128i_i64[0]);
      }
      else
      {
        *(_QWORD *)v18 = v31.m128i_i64[0];
        if ( v31.m128i_i64[0] )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31.m128i_i64[0] + 8LL))(v31.m128i_i64[0]);
          v7 = a1;
        }
      }
      ++v9;
      ++v17;
      v18 += 16;
    }
    while ( v9 < a3 );
    v12 = v30;
    v8 = 0;
  }
  v14 = 0;
LABEL_44:
  if ( v12 )
  {
    if ( *v12 == 1 )
      --LODWORD(SRWLock->Ptr);
    else
      ReleaseSRWLockShared(SRWLock);
  }
  if ( v14 < 0 )
  {
    v24 = a4;
LABEL_57:
    if ( v8 )
    {
      v25 = v8;
      do
      {
        if ( *v24 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 16LL))(*v24);
          *v24 = 0LL;
        }
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    if ( v8 < v9 )
    {
      v26 = (__int64)&v11[16 * v8];
      v27 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v26);
        v26 += 16LL;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    if ( v9 )
    {
      v23 = 0LL;
      if ( a3 )
      {
        v24 = a4;
        do
        {
          if ( (unsigned int)v23 + a2 >= v35 )
            break;
          v14 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResolveDemand(
                  &v11[16 * (unsigned int)v23],
                  &a4[v23]);
          if ( v14 < 0 )
            goto LABEL_57;
          ++v8;
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (unsigned int)v23 < a3 );
      }
    }
    *a5 = v8;
  }
  operator delete[](v11);
  return (unsigned int)v14;
}

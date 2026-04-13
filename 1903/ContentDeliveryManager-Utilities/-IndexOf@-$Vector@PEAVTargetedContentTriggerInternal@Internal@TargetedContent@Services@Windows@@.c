/*
 * XREFs of ?IndexOf@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180069AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005B7A4 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x18006B510 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@W.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CADF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r12
  _BYTE *v7; // rdi
  unsigned int v8; // r15d
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // rsi
  int v11; // r14d
  __int32 v12; // ecx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  char *v15; // rax
  unsigned int v16; // r12d
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // rsi
  __m128i v21; // [rsp+40h] [rbp-58h]
  _DWORD *v22; // [rsp+A0h] [rbp+8h]
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 104);
  v22 = (_DWORD *)(a1 + 104);
  v10 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    a2 = v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v13 = *(unsigned int *)(a1 + 72);
    v14 = 16 * v13;
    if ( !is_mul_ok(v13, 0x10uLL) )
      v14 = -1LL;
    v15 = (char *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v15;
    if ( v15 )
    {
      for ( ; v13; --v13 )
      {
        *(_QWORD *)v15 = 0LL;
        v15[8] = 0;
        v15 += 16;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v16 = 0;
      if ( *(_DWORD *)(a1 + 72) )
      {
        v11 = 0;
        do
        {
          v21 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v16);
          v17 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
          v7[16 * v16 + 8] = v17;
          if ( v17 )
          {
            *(_QWORD *)&v7[16 * v16] = v21.m128i_i64[0];
            _InterlockedIncrement((volatile signed __int32 *)v21.m128i_i64[0]);
          }
          else
          {
            v12 = v21.m128i_i32[0];
            *(_QWORD *)&v7[16 * v16] = v21.m128i_i64[0];
            if ( v21.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21.m128i_i64[0] + 8LL))(v21.m128i_i64[0]);
          }
          ++v8;
          ++v16;
        }
        while ( v16 < *(_DWORD *)(a1 + 72) );
        v9 = v22;
      }
    }
    else
    {
      v11 = -2147024882;
    }
    v5 = (__int64)a3;
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOfInternal(
            -1,
            *(_QWORD *)(a1 + 88),
            *(_DWORD *)(a1 + 72),
            a2,
            v5,
            (__int64)a4);
  }
  if ( v9 )
  {
    if ( *v9 == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 )
  {
    if ( !v8 )
      goto LABEL_35;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOfInternal(
            v12,
            (_DWORD)v7,
            v8,
            v23,
            v5,
            (__int64)a4);
  }
  if ( v8 )
  {
    v18 = (__int64)v7;
    v19 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v18);
      v18 += 16LL;
      --v19;
    }
    while ( v19 );
  }
LABEL_35:
  operator delete[](v7);
  return (unsigned int)v11;
}

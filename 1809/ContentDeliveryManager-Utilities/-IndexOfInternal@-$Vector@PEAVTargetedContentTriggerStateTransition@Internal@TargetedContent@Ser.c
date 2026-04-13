/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x18005F340
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x18005D8A0 (-IndexOf@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wi.c)
 * Callees:
 *     ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x18005FC98 (--$-RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Interfa.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // al
  __m128i v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  char v17; // [rsp+90h] [rbp+40h] BYREF

  v16 = a1;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
      v15 = *a2;
      v9 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
        break;
      v11 = a2->m128i_i64[0];
      v16 = a2->m128i_i64[0];
      if ( v15.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15.m128i_i64[0] + 8LL))(v15.m128i_i64[0]);
        goto LABEL_7;
      }
LABEL_8:
      v12 = 0LL;
      if ( v9 >= 0 )
      {
        v12 = v11;
        v17 = 0;
        if ( a4 == v11 )
        {
          v13 = 1;
          v9 = 0;
        }
        else
        {
          v9 = XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
                 a4,
                 v11,
                 &v17);
          v13 = v17;
        }
        if ( v9 >= 0 && v13 )
        {
          *a6 = 1;
          *a5 = v10;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          return (unsigned int)v9;
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)qword_1801851B0 + 40LL))(
           qword_1801851B0,
           *(unsigned int *)(v15.m128i_i64[0] + 4),
           &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
           &v16);
LABEL_7:
    v11 = v16;
    goto LABEL_8;
  }
  return (unsigned int)v9;
}

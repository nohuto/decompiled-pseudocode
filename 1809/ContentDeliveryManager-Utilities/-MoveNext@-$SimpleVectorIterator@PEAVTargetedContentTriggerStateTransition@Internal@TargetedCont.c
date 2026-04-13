/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180017AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned __int32 v5; // r8d
  bool v6; // zf
  signed __int32 v7; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 < 0 )
  {
    RoOriginateError((unsigned int)v3, 0LL);
    return (unsigned int)v3;
  }
  v5 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 56) )
  {
    *a2 = 0;
    if ( v5 < *(_DWORD *)(a1 + 44) )
    {
      *(_DWORD *)(a1 + 40) = v5 + 1;
      v3 = 0;
      *a2 = v5 + 1 < *(_DWORD *)(a1 + 44);
      goto LABEL_10;
    }
  }
  else
  {
    while ( 1 )
    {
      *a2 = 0;
      if ( v5 >= *(_DWORD *)(a1 + 44) )
        break;
      v3 = 0;
      *a2 = v5 + 1 < *(_DWORD *)(a1 + 44);
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v5 + 1, v5);
      v6 = v5 == v7;
      v5 = v7;
      if ( v6 )
        goto LABEL_10;
      *a2 = 0;
    }
  }
  v3 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_10:
  if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v4 + 88) )
  {
    *(_DWORD *)(a1 + 48) = -2147483636;
    if ( v3 < 0 )
    {
      RoTransformError((unsigned int)v3, 2147483660LL, 0LL);
    }
    else
    {
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
    return (unsigned int)-2147483636;
  }
  return (unsigned int)v3;
}

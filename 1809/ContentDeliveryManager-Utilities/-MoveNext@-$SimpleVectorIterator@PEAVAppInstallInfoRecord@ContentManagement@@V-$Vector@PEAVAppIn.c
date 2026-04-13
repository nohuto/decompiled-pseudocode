/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180059AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned __int32 v5; // r8d
  bool v6; // zf
  signed __int32 v7; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      *a2 = 0;
      if ( v5 >= *(_DWORD *)(a1 + 76) )
        break;
      v3 = 0;
      *a2 = v5 + 1 < *(_DWORD *)(a1 + 76);
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v5 + 1, v5);
      v6 = v5 == v7;
      v5 = v7;
      if ( v6 )
        goto LABEL_8;
      *a2 = 0;
    }
    v3 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
LABEL_8:
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
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
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}

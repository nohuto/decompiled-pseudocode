/*
 * XREFs of _lambda_d2964d542fa56a425e2ce276bb408c69_::operator() @ 0x180119BE8
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18011DBF0 (-MoveNext@-$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal.c)
 *     ?MoveNext@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18020CBC0 (-MoveNext@-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d2964d542fa56a425e2ce276bb408c69_::operator()(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  bool **v3; // r11
  _BYTE ***v4; // rdi
  unsigned __int32 v5; // r10d
  bool v6; // zf
  signed __int32 v7; // eax

  v1 = *a1;
  v2 = 0;
  v3 = (bool **)a1[1];
  v4 = (_BYTE ***)a1[2];
  v5 = *(_DWORD *)(*a1 + 72LL);
  while ( 1 )
  {
    **v3 = 0;
    if ( v5 >= *(_DWORD *)(v1 + 76) )
      break;
    **v3 = v5 + 1 < *(_DWORD *)(v1 + 76);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 72), v5 + 1, v5);
    v6 = v5 == v7;
    v5 = v7;
    if ( v6 )
      return v2;
    ***v4 = 0;
  }
  v2 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
  return v2;
}

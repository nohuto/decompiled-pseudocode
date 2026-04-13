/*
 * XREFs of ?MoveNext@ChunkElementIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18008C9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkElementIterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // eax

  v2 = 0;
  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 >= *(_DWORD *)(v3 + 12) )
  {
    v2 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v5 = v4 + 1;
    *(_DWORD *)(a1 + 72) = v5;
    *a2 = v5 < *(_DWORD *)(v3 + 12);
  }
  return v2;
}

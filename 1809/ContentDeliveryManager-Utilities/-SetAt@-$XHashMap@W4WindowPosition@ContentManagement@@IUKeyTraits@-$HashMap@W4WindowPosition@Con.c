/*
 * XREFs of ?SetAt@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@IPEAPEAUTXPOSITION@2@@Z @ 0x18008B7E8
 * Callers:
 *     ?Insert@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@IPEAE@Z @ 0x18008A070 (-Insert@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentMa.c)
 * Callees:
 *     ?GetNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAJAEBW4WindowPosition@ContentManagement@@AEAI1AEAPEAVCNode@12@PEAPEAV512@@Z @ 0x18008CD10 (-GetNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 *     ?InitHashTable@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJI_NPEA_N@Z @ 0x18008D0E4 (-InitHashTable@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosi.c)
 *     ?NewNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAJAEBW4WindowPosition@ContentManagement@@IIPEAPEAVCNode@12@@Z @ 0x18008D320 (-NewNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::SetAt(
        __int64 a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v11[4]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+34h] [rbp-24h] BYREF
  int v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF

  result = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNode(
             a1,
             a2,
             (unsigned int)&v13,
             (unsigned int)&v12,
             (__int64)&v15,
             (__int64)&v14);
  if ( (int)result >= 0 )
  {
    v10 = v14;
    if ( v14 )
    {
LABEL_9:
      *(_DWORD *)(v10 + 4) = a3;
      result = 0LL;
      *a4 = v10;
      return result;
    }
    if ( !*(_QWORD *)(a1 + 8) )
    {
      LOBYTE(v9) = 1;
      result = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::InitHashTable(
                 a1,
                 *(unsigned int *)(a1 + 24),
                 v9,
                 v11);
      if ( (int)result < 0 )
        return result;
      if ( !v11[0] )
        return 2147942414LL;
    }
    result = XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::NewNode(
               a1,
               a2,
               v13,
               v12,
               (__int64)&v14);
    if ( (int)result >= 0 )
    {
      v10 = v14;
      goto LABEL_9;
    }
  }
  return result;
}

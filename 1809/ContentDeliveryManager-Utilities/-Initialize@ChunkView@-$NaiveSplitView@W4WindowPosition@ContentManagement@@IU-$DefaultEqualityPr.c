/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@456@@Z @ 0x18008C830
 * Callers:
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18008C420 (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 * Callees:
 *     ??1?$ComPtr@VChunk@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008CBE0 (--1-$ComPtr@VChunk@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rbx
  signed int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  void *v8; // rax
  void *v10; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v11[1] = -2LL;
  v10 = 0LL;
  v4 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  v10 = v4;
  v5 = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 56LL))(a2, &v12);
    v6 = 0;
    if ( v5 < 0 )
      goto LABEL_20;
    do
    {
      if ( !v12 || v6 >= 0x10 )
        break;
      v13 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v13);
      v7 = v13;
      if ( v5 >= 0 )
      {
        if ( *((_DWORD *)v4 + 3) == 16 )
        {
          v5 = -2147024882;
        }
        else
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          *((_QWORD *)v4 + (unsigned int)(*((_DWORD *)v4 + 3))++ + 2) = v7;
          v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 64LL))(a2, &v12);
          v7 = v13;
        }
      }
      if ( v7 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ++v6;
    }
    while ( v5 >= 0 );
  }
  if ( v5 >= 0 )
  {
    v8 = *(void **)(a1 + 72);
    if ( v8 != v4 )
    {
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
        v8 = *(void **)(a1 + 72);
      }
      v11[0] = v8;
      *(_QWORD *)(a1 + 72) = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>::~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>(v11);
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>::~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Chunk>(&v10);
  return (unsigned int)v5;
}

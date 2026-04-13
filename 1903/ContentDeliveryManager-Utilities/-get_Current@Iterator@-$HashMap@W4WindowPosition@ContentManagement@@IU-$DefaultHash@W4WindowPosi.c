/*
 * XREFs of ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x18008C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008CE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@W.c)
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x18008CFB0 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  RTL_SRWLOCK *v5; // rsi
  int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v13; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  v4 = a1[8] + 160LL;
  v13 = (_DWORD *)v4;
  v5 = (RTL_SRWLOCK *)(v4 + 8);
  if ( *(_DWORD *)v4 == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v4 + 8));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  v7 = a1[9];
  if ( v6 >= 0 )
  {
    if ( !v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v12 = 0LL;
      v8 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
             v7,
             v7 + 4,
             &v12);
      v9 = v12;
      v6 = v8;
      if ( v8 >= 0 )
      {
        v10 = v12;
        if ( v12 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v9 = v12;
        }
        *a2 = v10;
      }
      if ( v9 )
      {
        v12 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v9);
      }
    }
  }
  if ( v13 )
  {
    if ( *v13 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  return (unsigned int)v6;
}

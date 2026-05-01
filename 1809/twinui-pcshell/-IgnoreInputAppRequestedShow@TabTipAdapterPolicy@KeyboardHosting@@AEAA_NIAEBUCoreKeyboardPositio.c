/*
 * XREFs of ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1802CB6BC
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1802CCA50 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1802CB8D4 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // r10
  bool v12; // bl
  __m128i v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v3 = this + 53;
  AcquireSRWLockShared(this + 53);
  v7 = std::_Hash_bytes((const unsigned __int8 *)&v16, 4uLL);
  v9 = *(_QWORD *)(v8 + 48) & v7;
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v8,
            &v15,
            v9);
    if ( v11 == *v10 )
      break;
    if ( *(_DWORD *)(v11 + 16) == a2 )
      goto LABEL_6;
  }
  v11 = *(_QWORD *)(v8 + 8);
LABEL_6:
  v12 = (PVOID)v11 != this[46].Ptr
     && (v14 = *(__m128i *)(v11 + 20), (unsigned __int8)_mm_cvtsi128_si32(v14))
     && *(_DWORD *)a3 == 2
     && *(_QWORD *)((char *)a3 + 4) == v14.m128i_i64[1]
     && !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v12;
}

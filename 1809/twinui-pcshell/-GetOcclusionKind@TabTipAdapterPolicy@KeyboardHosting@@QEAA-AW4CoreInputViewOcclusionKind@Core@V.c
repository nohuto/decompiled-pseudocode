/*
 * XREFs of ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x1802CA9D8
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(RTL_SRWLOCK *a1, int a2)
{
  unsigned int v4; // ebx
  RTL_SRWLOCK *v5; // r14
  char v6; // si
  bool v7; // r12
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // r10
  __m128i v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v15 = a2;
  v4 = 2;
  if ( (a2 & 0xFFFFFFFA) == 0 && a2 != 1 )
  {
    v5 = a1 + 53;
    v4 = 0;
    v6 = 0;
    v7 = 0;
    AcquireSRWLockExclusive(a1 + 53);
    v8 = std::_Hash_bytes((const unsigned __int8 *)&v15, 4uLL);
    v10 = *(_QWORD *)(v9 + 48) & v8;
    while ( 1 )
    {
      v11 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
              v9,
              &v16,
              v10);
      if ( v12 == *v11 )
        break;
      if ( *(_DWORD *)(v12 + 16) == a2 )
        goto LABEL_8;
    }
    v12 = *(_QWORD *)(v9 + 8);
LABEL_8:
    if ( (PVOID)v12 != a1[46].Ptr )
    {
      v14 = *(__m128i *)(v12 + 40);
      v7 = *(_DWORD *)(v12 + 24) == 1;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v14, 8)) || (v6 = 0, v14.m128i_i8[9]) )
        v6 = 1;
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( !v7 || v6 )
      return 1;
  }
  return v4;
}

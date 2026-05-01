/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x1802CB9EC
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B7CC0 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1802CACA0 (-HandleDesktopVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHMONITOR__@@_NPEAP.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1802CB2F0 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@She.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@7@PEAW4ShellRequestType@Text@Shell@Internal@7@@Z @ 0x1802CB340 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreInputViewKind@Core@ViewM.c)
 *     ?HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x1802CB410 (-HandleLockScreenActiveChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAPEAU-$IVectorView@.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEA_N@Z @ 0x1802CD070 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU-$IVectorView@UCoreKeyboar.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // di
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = this + 53;
  AcquireSRWLockShared(this + 53);
  v5 = std::_Hash_bytes((const unsigned __int8 *)&v13, 4uLL);
  v7 = *(_QWORD *)(v6 + 48) & v5;
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           v6,
           &v12,
           v7);
    if ( v9 == *v8 )
      break;
    if ( *(_DWORD *)(v9 + 16) == a2 )
      goto LABEL_6;
  }
  v9 = *(_QWORD *)(v6 + 8);
LABEL_6:
  if ( (PVOID)v9 == this[46].Ptr )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0;
  }
  else
  {
    v10 = *(_BYTE *)(v9 + 20);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return v10;
  }
}

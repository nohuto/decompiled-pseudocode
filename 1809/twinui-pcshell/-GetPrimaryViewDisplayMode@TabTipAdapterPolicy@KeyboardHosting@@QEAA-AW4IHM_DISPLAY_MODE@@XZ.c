/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1802CABAC
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1802B5F08 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1 + 53;
  AcquireSRWLockExclusive(a1 + 53);
  LODWORD(v12) = 0;
  v3 = std::_Hash_bytes((const unsigned __int8 *)&v12, 4uLL);
  v5 = *(_QWORD *)(v4 + 48) & v3;
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           v4,
           &v12,
           v5);
    if ( v7 == *v6 )
      break;
    if ( !*(_DWORD *)(v7 + 16) )
      goto LABEL_6;
  }
  v7 = *(_QWORD *)(v4 + 8);
LABEL_6:
  if ( (PVOID)v7 == a1[46].Ptr )
    goto LABEL_12;
  v8 = *(_QWORD *)(v7 + 20);
  if ( !(_BYTE)v8 )
    goto LABEL_12;
  v9 = HIDWORD(v8);
  v10 = 2;
  if ( (_DWORD)v9 == 2 )
    goto LABEL_13;
  if ( (_DWORD)v9 == 1 )
  {
    if ( !(unsigned __int16)WORD6(*(_OWORD *)(v7 + 36)) )
      v10 = 3;
  }
  else
  {
LABEL_12:
    v10 = 0;
  }
LABEL_13:
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  return v10;
}

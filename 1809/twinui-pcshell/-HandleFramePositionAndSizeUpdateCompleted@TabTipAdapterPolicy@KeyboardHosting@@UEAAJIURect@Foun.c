/*
 * XREFs of ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802CB090
 * Callers:
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1802C38BC (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180054554 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1802CA6E8 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@I@Z @ 0x1802CBEE0 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1802CC4CC (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1802CD380 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // r13
  RTL_SRWLOCK *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  HMONITOR CurrentMonitor; // rax
  HMONITOR v18; // rdi
  KeyboardHosting::MonitorInformation *v19; // rcx
  KeyboardHosting::MonitorInformation *v20; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v22; // edi
  char v23; // di
  char v24; // r15
  __int128 v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+40h] [rbp-30h]
  __int128 v28; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v30; // [rsp+B8h] [rbp+48h] BYREF

  v30 = a2;
  *a4 = 0LL;
  v9 = a5;
  *a5 = 0;
  v10 = this + 53;
  AcquireSRWLockShared(this + 53);
  v11 = std::_Hash_bytes((const unsigned __int8 *)&v30, 4uLL);
  v13 = v11 & *(_QWORD *)(v12 + 48);
  while ( 1 )
  {
    v14 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v12,
            &a5,
            v13);
    if ( v16 == *v14 )
      break;
    if ( *(_DWORD *)(v16 + 16) == a2 )
      goto LABEL_6;
  }
  v16 = *(_QWORD *)(v12 + 8);
LABEL_6:
  if ( (PVOID)v16 == this[46].Ptr )
    goto LABEL_27;
  v27 = *(_OWORD *)(v16 + 20);
  v28 = *(_OWORD *)(v16 + 36);
  v26 = *(_OWORD *)a3;
  CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v15, &v26);
  v18 = CurrentMonitor;
  v19 = (KeyboardHosting::MonitorInformation *)&this[27];
  if ( this[27].Ptr != CurrentMonitor )
  {
    *(_QWORD *)v19 = CurrentMonitor;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v19);
  }
  if ( LOBYTE(this[60].Ptr) )
  {
    v20 = (KeyboardHosting::MonitorInformation *)&this[33];
    if ( this[33].Ptr != v18 )
    {
      *(_QWORD *)v20 = v18;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v20);
    }
  }
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                             (KeyboardHosting::TabTipAdapterPolicy *)this,
                             a4);
  v22 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    goto LABEL_28;
  }
  *v9 = 3;
  v23 = BYTE13(v28);
  v24 = BYTE12(v28);
  if ( (a2 & 0xFFFFFFFA) != 0 || a2 == 1 || DWORD1(v27) != 1 )
    goto LABEL_22;
  if ( ((DWORD2(v28) - 1) & 0xFFFFFFF6) == 0 && DWORD2(v28) != 9 )
  {
    if ( WORD6(v28) )
    {
      a5 = *(_DWORD **)a3;
      KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)this,
        (const struct Windows::Foundation::Point *)&a5,
        a2);
      if ( LOBYTE(this[60].Ptr) )
      {
        KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)this,
          (const struct Windows::Foundation::Point *)&a5);
LABEL_22:
        if ( DWORD1(v27) == 2 && (v24 || v23) )
        {
          HIDWORD(this[54].Ptr) = *(_DWORD *)a3;
          LODWORD(this[55].Ptr) = *(_DWORD *)(a3 + 4);
          BYTE4(this[55].Ptr) = 1;
        }
      }
    }
  }
  LOBYTE(this[54].Ptr) = 1;
LABEL_27:
  v22 = 0;
LABEL_28:
  if ( v10 )
    ReleaseSRWLockShared(v10);
  return v22;
}

/*
 * XREFs of ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094A34
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800940F0 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x180094980 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 * Callees:
 *     ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A240 (--$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___ @ 0x1800939C0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_LegacyInputInfo_______l.c)
 *     ?erase@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULegacyInputInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULegacyInputInfo@@@std@@@std@@@2@@Z @ 0x180094D58 (-erase@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA-AV-$_Vector_it.c)
 *     ?erase@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x180094DCC (-erase@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegacyDeviceI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::RemoveDeviceImpl(MPCRawInputProvider *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  _QWORD *i; // rdi
  __int64 *v5; // r14
  __int64 j; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  void *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+18h] BYREF

  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v16 = v3;
  for ( i = (_QWORD *)*((_QWORD *)this + 3); i != *((_QWORD **)this + 4) && *(_DWORD *)*i != v15; i += 2 )
    ;
  if ( i == *((_QWORD **)this + 4) )
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___(
      &v14,
      *((_DWORD **)this + 23),
      *((_DWORD **)this + 24),
      v15);
    v12 = (void *)*((_QWORD *)this + 24);
    if ( v14 != v12 )
      *((_QWORD *)this + 24) = std::_Move_unchecked<enum _Button *,enum _Button *>(v12, *((_QWORD *)this + 24), v14);
  }
  else
  {
    v5 = (__int64 *)((char *)this + 184);
    for ( j = *((_QWORD *)this + 23); j != *((_QWORD *)this + 24) && *(_DWORD *)(j + 4) != v15; j += 2032LL )
      ;
    while ( 1 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 2);
      v8 = *v7;
      if ( j == *((_QWORD *)this + 24) )
        break;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v8 + 24))(v7, j);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          333LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      std::vector<LegacyInputInfo>::erase((char *)this + 184, &v14, j);
      v10 = *((_QWORD *)this + 24);
      for ( j = *v5; j != v10; j += 2032LL )
      {
        if ( *(_DWORD *)(j + 4) == v15 )
          break;
      }
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v8 + 56))(v7, *i);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        341LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::erase((char *)this + 24, &v14, i);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v16);
}

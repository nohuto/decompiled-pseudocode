/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800128D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180014A60 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180014A60.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@V12@@2@AEBUCursorId@@@Z @ 0x180011F98 (-equal_range@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800130F0 (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180014494 (-CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall Win32kInterop::ProcessDeviceArrival(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 DeviceInfo; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  UINT32 cData; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v15[2]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = 2;
LABEL_13:
    *((_BYTE *)this + 281) = 1;
    goto LABEL_4;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 != 4 )
      return;
    v4 = 32;
    goto LABEL_13;
  }
  v4 = 4;
LABEL_4:
  v5 = *((unsigned int *)a2 + 1);
  LODWORD(v14) = *((_DWORD *)a2 + 1);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::equal_range(
    (_QWORD *)this + 8,
    v15,
    (unsigned __int8 *)&v14);
  v6 = v15[0];
  v7 = 0LL;
  while ( v6 != v15[1] )
  {
    v6 = (__int64 *)*v6;
    ++v7;
  }
  if ( !v7 )
  {
    v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                             0LL,
                                             lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( v8 )
    {
      if ( *(_DWORD *)v8 > 1u )
      {
        v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                                 v8,
                                                 lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                             + 8);
        if ( *(_DWORD *)v8 > 5u )
        {
          if ( TlgKeywordOn(v8, 1uLL) )
          {
            v19 = 0;
            v17 = &v14;
            v14 = v5;
            v18 = 8;
            TlgWrite(v8, &unk_18019D93F, 0LL, 0LL, 3u, &pData);
          }
        }
      }
    }
    DeviceInfo = Win32kInterop::CreateDeviceInfo(v8, v4, a2);
    v10 = *((_QWORD *)this + 7);
    v11 = DeviceInfo;
    v14 = DeviceInfo;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, Win32kInterop *))(*(_QWORD *)v10 + 40LL))(v10, DeviceInfo, this);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x195,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v12,
        cData);
      __debugbreak();
    }
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      (char *)this + 64,
      v15,
      v11,
      &v14);
  }
}

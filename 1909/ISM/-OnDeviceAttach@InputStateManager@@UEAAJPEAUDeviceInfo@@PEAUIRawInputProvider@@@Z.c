/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012790
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180038310 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x18001226C (-CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800130F0 (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014604 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x180014900 (--$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800922D4 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // esi
  struct IInputProcessor *v11; // rcx
  __int64 v12; // rdx
  struct IInputProcessor *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // r14
  const struct _TlgProvider_t *v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  __int64 v20; // rdx
  struct IInputProcessor *v21; // rcx
  struct IInputProcessor *v22; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  struct IInputProcessor **v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  _QWORD *v28; // [rsp+88h] [rbp+17h]
  int v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+94h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  struct IRawInputProvider *v32; // [rsp+E8h] [rbp+77h] BYREF

  v32 = a3;
  v23[2] = -2LL;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v18 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                              v6,
                                              lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                          + 8);
    if ( *(_DWORD *)v18 > 5u )
    {
      if ( TlgKeywordOn(v18, 1uLL) )
      {
        v22 = (struct IInputProcessor *)*(unsigned int *)a2;
        v25 = &v22;
        v26 = 8;
        v27 = 0;
        v23[0] = *((int *)a2 + 1);
        v28 = v23;
        v29 = 8;
        v30 = 0;
        TlgWrite(v19, &unk_18019C338, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  if ( a3 )
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      (char *)this + 96,
      v23,
      a2,
      &v32);
  for ( i = *((_QWORD *)this + 10); ; i = v8 - 16 )
  {
    v8 = i;
    if ( i == *((_QWORD *)this + 9) )
      break;
    v17 = *(_QWORD *)(i - 8);
    v23[0] = v17;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v17 + 32LL))(v17, a2) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v20 = *((_QWORD *)this + 10);
      if ( *((_QWORD *)this + 11) == v20 )
      {
        std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
          (char *)this + 72,
          v20,
          a2,
          v23);
      }
      else
      {
        *(_DWORD *)v20 = *(_DWORD *)a2;
        *(_QWORD *)(v20 + 8) = v17;
        *((_QWORD *)this + 10) += 16LL;
      }
LABEL_11:
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
              *((_QWORD *)this + 5),
              a2);
      v15 = v14;
      if ( v14 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
  }
  v22 = 0LL;
  v9 = InputStateManager::CreateProcessorForDevice(this, a2, &v22);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v22;
    v22 = 0LL;
    v23[0] = v11;
    v12 = *((_QWORD *)this + 10);
    if ( *((_QWORD *)this + 11) == v12 )
    {
      std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
        (char *)this + 72,
        v12,
        a2,
        v23);
    }
    else
    {
      *(_DWORD *)v12 = *(_DWORD *)a2;
      *(_QWORD *)(v12 + 8) = v11;
      *((_QWORD *)this + 10) += 16LL;
    }
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct IInputProcessor *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v9);
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IInputProcessor *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v10;
}

/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800532C0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800545A0 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180051EFC (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x18005250C (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ??$insert_or_assign@AEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800541E8 (--$insert_or_assign@AEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$hash@K.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180054324 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 i; // rbx
  struct IRawInputProvider *v7; // r14
  struct IRawInputProvider *v8; // r14
  __int64 v9; // r9
  __int64 v10; // rdx
  int InputProcessorWorker; // eax
  int v12; // ebx
  int v14; // eax
  _QWORD v15[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IRawInputProvider *v17; // [rsp+80h] [rbp+40h] BYREF

  v17 = a3;
  InputETW::InputStateManager::OnDeviceAttach(a2);
  if ( a3 )
    std::unordered_map<unsigned long,IRawInputProvider *>::insert_or_assign<IRawInputProvider * &>(
      (char *)this + 96,
      v15,
      a2,
      &v17,
      -2LL);
  for ( i = *((_QWORD *)this + 10); ; i -= 16LL )
  {
    if ( i == *((_QWORD *)this + 9) )
    {
      v8 = 0LL;
      v17 = 0LL;
      v15[2] = 0LL;
      v15[0] = a2;
      v15[1] = (char *)this + 8;
      if ( !a2 || this == (InputStateManager *)-8LL )
        v9 = 2147942487LL;
      else
        v9 = 0LL;
      if ( (int)v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
          (const char *)v9);
        JUMPOUT(0x1800534D2LL);
      }
      InputProcessorWorker = CreateInputProcessorWorker(v15, (__int64)&v17, 0, 0);
      v12 = InputProcessorWorker;
      if ( InputProcessorWorker >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
          (const char *)(unsigned int)InputProcessorWorker);
      if ( v12 >= 0 )
      {
        v8 = v17;
        v12 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v12);
      }
      if ( v12 >= 0 )
      {
        v17 = v8;
        v10 = *((_QWORD *)this + 10);
        if ( *((_QWORD *)this + 11) == v10 )
          goto LABEL_27;
        *(_DWORD *)v10 = *(_DWORD *)a2;
        *(_QWORD *)(v10 + 8) = v8;
        *((_QWORD *)this + 10) += 16LL;
        goto LABEL_28;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v12);
      if ( v8 )
        (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v8 + 16LL))(v8);
      return (unsigned int)v12;
    }
    v7 = *(struct IRawInputProvider **)(i - 8);
    v17 = v7;
    if ( (*(unsigned __int8 (__fastcall **)(struct IRawInputProvider *, struct DeviceInfo *))(*(_QWORD *)v7 + 32LL))(
           v7,
           a2) )
    {
      break;
    }
  }
  (*(void (__fastcall **)(struct IRawInputProvider *))(*(_QWORD *)v7 + 8LL))(v7);
  v10 = *((_QWORD *)this + 10);
  if ( *((_QWORD *)this + 11) != v10 )
  {
    *(_DWORD *)v10 = *(_DWORD *)a2;
    *(_QWORD *)(v10 + 8) = v7;
    *((_QWORD *)this + 10) += 16LL;
    goto LABEL_28;
  }
LABEL_27:
  std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
    (char *)this + 72,
    v10,
    a2,
    &v17);
LABEL_28:
  v14 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v12;
  }
  return 0LL;
}

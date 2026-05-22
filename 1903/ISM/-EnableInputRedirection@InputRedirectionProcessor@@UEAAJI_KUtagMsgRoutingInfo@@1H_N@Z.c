/*
 * XREFs of ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180106FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x180106AA8 (--$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@-$vector@U-$pair@KPEAVInputRedirectionTa.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x180106D20 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801073DC (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x180107508 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x180107968 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::EnableInputRedirection(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int8 v10; // al
  int v11; // esi
  signed int v12; // ebx
  __int64 i; // rbx
  InputRedirectionTarget *v14; // r14
  __int64 j; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22[1] = -2LL;
  v10 = IsEdition(8778LL);
  v11 = a6;
  if ( !v10 || a6 == 0x4000 )
  {
    for ( i = a1[9]; i != a1[10]; i += 16LL )
    {
      if ( (a6 & *(_DWORD *)i) != 0 )
      {
        v14 = *(InputRedirectionTarget **)(i + 8);
        if ( InputRedirectionTarget::IsValid(v14) )
          goto LABEL_3;
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(a1 + 9, v22, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v14 + 16LL))(v14);
        break;
      }
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v21);
    v12 = InputRedirectionTarget::Create(a2, a3, a4, &v21, v11, a7);
    if ( v12 >= 0 )
    {
      v12 = 0;
      for ( j = a1[9]; j != a1[10]; j += 16LL )
      {
        if ( *(_DWORD *)j == v11 )
        {
          v16 = v21;
          v21 = 0LL;
          *(_QWORD *)(j + 8) = v16;
          goto LABEL_21;
        }
        if ( (v11 & *(_DWORD *)j) != 0 )
        {
          v12 = -2147024809;
          goto LABEL_21;
        }
      }
      v17 = v21;
      v21 = 0LL;
      v22[0] = v17;
      v18 = a1[10];
      if ( a1[11] == v18 )
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
          a1 + 9,
          (_OWORD *)v18,
          &a6,
          v22);
      }
      else
      {
        *(_DWORD *)v18 = v11;
        *(_QWORD *)(v18 + 8) = v17;
        a1[10] += 16LL;
      }
    }
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v21);
  }
  else
  {
LABEL_3:
    v12 = -2147024891;
  }
  if ( *(_DWORD *)a5 )
  {
    v23[0] = *(_OWORD *)a5;
    v23[1] = *(_OWORD *)(a5 + 16);
    v24 = *(_QWORD *)(a5 + 32);
    v19 = InputRedirectionProcessor::CallCallbackWithResult((__int64)(a1 - 1), (__int64)v23, v12);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        248LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\l"
                 "ib\\inputredirectionprocessor.cpp",
        (const char *)(unsigned int)v19);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      256LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v12);
  return 0LL;
}

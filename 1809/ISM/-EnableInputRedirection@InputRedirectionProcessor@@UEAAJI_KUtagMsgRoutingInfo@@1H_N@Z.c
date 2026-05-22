/*
 * XREFs of ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800D1080
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180054324 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800D146C (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800D1ADC (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1800D1E84 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v10; // r14d
  int v11; // edi
  __int64 i; // rbx
  InputRedirectionTarget *v13; // rdi
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  __int64 j; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v24[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23[1] = -2LL;
  v10 = a6;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || a6 == 0x4000 )
  {
    for ( i = *(_QWORD *)(a1 + 72); i != *(_QWORD *)(a1 + 80); i += 16LL )
    {
      if ( (a6 & *(_DWORD *)i) != 0 )
      {
        v13 = *(InputRedirectionTarget **)(i + 8);
        if ( InputRedirectionTarget::IsValid(v13) )
          goto LABEL_3;
        v14 = *(_QWORD **)(a1 + 80);
        if ( (_QWORD *)(i + 16) != v14 )
        {
          v15 = (_QWORD *)(i + 24);
          do
          {
            *((_DWORD *)v15 - 6) = *((_DWORD *)v15 - 2);
            *(v15 - 2) = *v15;
            v15 += 2;
          }
          while ( v15 - 1 != v14 );
        }
        *(_QWORD *)(a1 + 80) -= 16LL;
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v13 + 16LL))(v13);
        break;
      }
    }
    v22 = 0LL;
    v11 = InputRedirectionTarget::Create(a2, a3, a4, &v22, v10, a7);
    if ( v11 < 0 )
    {
LABEL_23:
      v18 = v22;
    }
    else
    {
      v11 = 0;
      for ( j = *(_QWORD *)(a1 + 72); j != *(_QWORD *)(a1 + 80); j += 16LL )
      {
        if ( *(_DWORD *)j == v10 )
        {
          v18 = 0LL;
          *(_QWORD *)(j + 8) = v22;
          goto LABEL_24;
        }
        if ( (v10 & *(_DWORD *)j) != 0 )
        {
          v11 = -2147024809;
          goto LABEL_23;
        }
      }
      v17 = v22;
      v18 = 0LL;
      v22 = 0LL;
      v23[0] = v17;
      v19 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 88) == v19 )
      {
        std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
          (char **)(a1 + 72),
          (char *)v19,
          &a6,
          v23);
      }
      else
      {
        *(_DWORD *)v19 = v10;
        *(_QWORD *)(v19 + 8) = v17;
        *(_QWORD *)(a1 + 80) += 16LL;
      }
    }
LABEL_24:
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  else
  {
LABEL_3:
    v11 = -2147024891;
  }
  if ( *(_DWORD *)a5 )
  {
    v24[0] = *(_OWORD *)a5;
    v24[1] = *(_OWORD *)(a5 + 16);
    v25 = *(_QWORD *)(a5 + 32);
    v20 = InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, v24, (unsigned int)v11);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\l"
                 "ib\\inputredirectionprocessor.cpp",
        (const char *)(unsigned int)v20);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}

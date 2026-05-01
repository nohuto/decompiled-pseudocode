/*
 * XREFs of ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x18038B940
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18000B7EC (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18007BB94 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18007BBE0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x18038B414 (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 *     ??$construct@UHint@ActivationHints@@U12@@?$_Default_allocator_traits@V?$allocator@UHint@ActivationHints@@@std@@@std@@SAXAEAV?$allocator@UHint@ActivationHints@@@1@QEAUHint@ActivationHints@@$$QEAU34@@Z @ 0x18038B664 (--$construct@UHint@ActivationHints@@U12@@-$_Default_allocator_traits@V-$allocator@UHint@Activati.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18038B814 (--1Hint@ActivationHints@@QEAA@XZ.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x18038C130 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 *     ?EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z @ 0x18038F380 (-EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ActivationHints::AddHint(__int64 a1, struct IUnknown *a2, OS *a3)
{
  __int64 result; // rax
  WCHAR *v7; // r14
  WCHAR *lpVtbl; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  const char *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-48h] BYREF
  __int64 v16; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v12[1] = -2LL;
  if ( a2->lpVtbl || a2[1].lpVtbl )
  {
    try
    {
      OS::EnableMarshalByValue(a3, a2);
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
      v12[0] = a1 + 48;
      ActivationHints::DeleteExpiredHints((ActivationHints *)(a1 - 104));
      v7 = (WCHAR *)&String2;
      lpVtbl = (WCHAR *)&String2;
      if ( a2->lpVtbl )
        lpVtbl = (WCHAR *)a2->lpVtbl;
      std::wstring::wstring((__int64)v13, lpVtbl);
      if ( a2[1].lpVtbl )
        v7 = (WCHAR *)a2[1].lpVtbl;
      std::wstring::wstring((__int64)v14, v7);
      std::chrono::steady_clock::now(&v15);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v16,
        (__int64)a3);
      v10 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(a1 + 72) == v10 )
      {
        std::vector<ActivationHints::Hint>::_Emplace_reallocate<ActivationHints::Hint>(
          (__int64 *)(a1 + 56),
          v10,
          (__int64)v13);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::construct<ActivationHints::Hint,ActivationHints::Hint>(
          v9,
          v10,
          (__int64)v13);
        *(_QWORD *)(a1 + 64) += 80LL;
      }
      ActivationHints::Hint::~Hint((ActivationHints::Hint *)v13);
      if ( (unsigned __int64)((*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) / 80LL) > 0xA )
        std::vector<ActivationHints::Hint>::erase(a1 + 56, v12, *(_QWORD *)(a1 + 56));
      if ( a1 != -48 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x70,
                             (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                             v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}

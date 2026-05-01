/*
 * XREFs of ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x18032B560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x18032AE3C (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18032B3E4 (--1Hint@ActivationHints@@QEAA@XZ.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18032B940 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x18032C210 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@s_ea_18032C210.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18032C2C8 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z @ 0x18032EF20 (-EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ActivationHints::AddHint(__int64 a1, struct IUnknown *a2, OS *a3)
{
  __int64 result; // rax
  WCHAR *v7; // rsi
  WCHAR *lpVtbl; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  const char *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v13; // [rsp+30h] [rbp-88h] BYREF
  __m128i si128; // [rsp+40h] [rbp-78h]
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __m128i v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-48h] BYREF
  __int64 v18; // [rsp+78h] [rbp-40h] BYREF
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
      v7 = (WCHAR *)&word_180411F30;
      lpVtbl = (WCHAR *)&word_180411F30;
      if ( a2->lpVtbl )
        lpVtbl = (WCHAR *)a2->lpVtbl;
      std::wstring::wstring((__int64)&v13, lpVtbl);
      if ( a2[1].lpVtbl )
        v7 = (WCHAR *)a2[1].lpVtbl;
      std::wstring::wstring((__int64)&v15, v7);
      std::chrono::steady_clock::now(&v17);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v18,
        (__int64)a3);
      v9 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(a1 + 72) == v9 )
      {
        std::vector<ActivationHints::Hint>::_Emplace_reallocate<ActivationHints::Hint>(
          (char **)(a1 + 56),
          (char *)v9,
          (__int64)&v13);
      }
      else
      {
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
        *(_OWORD *)v9 = v13;
        *(__m128i *)(v9 + 16) = si128;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v13) = 0;
        *(_QWORD *)(v9 + 48) = 0LL;
        *(_QWORD *)(v9 + 56) = 0LL;
        *(_OWORD *)(v9 + 32) = v15;
        *(__m128i *)(v9 + 48) = v16;
        v16 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v15) = 0;
        *(_QWORD *)(v9 + 64) = v17;
        v10 = v18;
        v18 = 0LL;
        *(_QWORD *)(v9 + 72) = v10;
        *(_QWORD *)(a1 + 64) += 80LL;
      }
      ActivationHints::Hint::~Hint((ActivationHints::Hint *)&v13);
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

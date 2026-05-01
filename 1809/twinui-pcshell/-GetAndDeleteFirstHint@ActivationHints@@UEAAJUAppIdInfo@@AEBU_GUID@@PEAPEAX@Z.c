/*
 * XREFs of ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18032B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_49e7a17ad518dc57eac7bf14d5975a3b___ @ 0x18032B1E0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ActivationHints--Hint____.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18032B940 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x18032C0EC (-copy_to@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x18032C210 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@s_ea_18032C210.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationHints::GetAndDeleteFirstHint(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 v14; // rbx
  __int64 v15[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v17; // [rsp+40h] [rbp-68h]
  int *v18; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+60h] [rbp-48h] BYREF
  int *v20; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v22; // [rsp+B8h] [rbp+10h] BYREF
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v15[1] = -2LL;
  *a4 = 0LL;
  if ( *a2 || a2[1] )
  {
    v9 = (RTL_SRWLOCK *)(a1 + 48);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
    v15[2] = (__int64)v9;
    ActivationHints::DeleteExpiredHints((ActivationHints *)(a1 - 104));
    v10 = -1LL;
    if ( *a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(*a2 + 2 * v11) );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    v22 = v11;
    v12 = a2[1];
    if ( v12 )
    {
      do
        ++v10;
      while ( *(_WORD *)(v12 + 2 * v10) );
    }
    else
    {
      LODWORD(v10) = 0;
    }
    v23 = v10;
    *(_QWORD *)&v17 = a2;
    *((_QWORD *)&v17 + 1) = &v22;
    v18 = &v23;
    v19 = v17;
    v20 = &v23;
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_49e7a17ad518dc57eac7bf14d5975a3b___(
      v15,
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 64),
      (__int64)&v19);
    try
    {
      v14 = v15[0];
      if ( v15[0] != *(_QWORD *)(a1 + 64) )
      {
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          v15,
          *(_QWORD *)(v15[0] + 72));
        std::vector<ActivationHints::Hint>::erase(a1 + 56, v16, v14);
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::copy_to(v15, a3, a4);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v15);
      }
      if ( v9 )
        ReleaseSRWLockExclusive(v9);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x91,
                             (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                             v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}

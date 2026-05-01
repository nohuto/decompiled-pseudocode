/*
 * XREFs of ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18007E324 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1803ABA38 (-copy_to@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803ABA80 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall ActivationHints::GetAndDeleteFirstHint(RTL_SRWLOCK *a1, LPCWCH *a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  LPCWCH v11; // rdx
  RTL_SRWLOCK *v12; // r15
  char *Ptr; // rbx
  char *v14; // rsi
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rcx
  __int64 v18[3]; // [rsp+30h] [rbp-48h] BYREF
  char v19[8]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int cchCount2; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+98h] [rbp+20h]

  v18[1] = -2LL;
  *a4 = 0LL;
  if ( *a2 || a2[1] )
  {
    v8 = a1 + 6;
    AcquireSRWLockExclusive(a1 + 6);
    v18[2] = (__int64)v8;
    ActivationHints::DeleteExpiredHints((ActivationHints *)&a1[-13]);
    v9 = -1LL;
    if ( *a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( (*a2)[v10] );
      v22 = v10;
    }
    else
    {
      LODWORD(v10) = 0;
      v22 = 0;
    }
    v11 = a2[1];
    if ( v11 )
    {
      do
        ++v9;
      while ( v11[v9] );
      cchCount2 = v9;
    }
    else
    {
      cchCount2 = 0;
    }
    v12 = a1 + 7;
    Ptr = (char *)a1[7].Ptr;
    v14 = (char *)a1[8].Ptr;
    if ( Ptr != v14 )
    {
      while ( 1 )
      {
        v16 = (const WCHAR *)Ptr;
        if ( *((_QWORD *)Ptr + 3) >= 8uLL )
          v16 = *(const WCHAR **)Ptr;
        if ( CompareStringOrdinal(v16, *((_DWORD *)Ptr + 4), *a2, v10, 1) == 2 )
          break;
        v17 = (const WCHAR *)(Ptr + 32);
        if ( *((_QWORD *)Ptr + 7) >= 8uLL )
          v17 = *(const WCHAR **)v17;
        if ( CompareStringOrdinal(v17, *((_DWORD *)Ptr + 12), a2[1], cchCount2, 1) == 2 )
          break;
        Ptr += 80;
        if ( Ptr == v14 )
          break;
        LODWORD(v10) = v22;
      }
    }
    if ( Ptr != v12[1].Ptr )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v18,
        *((_QWORD *)Ptr + 9));
      std::vector<ActivationHints::Hint>::erase(v12, v19, Ptr);
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::copy_to(v18, a3, a4);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v18);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    return 0LL;
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
}

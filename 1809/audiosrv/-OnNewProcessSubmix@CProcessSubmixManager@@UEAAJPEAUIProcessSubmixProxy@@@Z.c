/*
 * XREFs of ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180011A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F0880 (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::OnNewProcessSubmix(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  const WCHAR ***v4; // rbx
  const WCHAR **v6; // rsi
  __int64 v7; // rdx
  const char *v8; // r9
  const WCHAR *v9; // rsi
  const WCHAR *v10; // rax
  const WCHAR **v11; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IProcessSubmixProxy **v13; // [rsp+60h] [rbp+8h] BYREF
  struct IProcessSubmixProxy *v14; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v15 = v3;
  v13 = &v14;
  v4 = (const WCHAR ***)*((_QWORD *)this + 7);
  while ( v4 != *((const WCHAR ****)this + 8) )
  {
    try
    {
      v7 = *((unsigned int *)*v4 + 2);
      if ( *((_DWORD *)*v4 + 3) == 2 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, __int64))(*(_QWORD *)v14 + 112LL))(
                v14,
                v7) )
          goto LABEL_15;
      }
      else if ( !(_DWORD)v7
             || (v6 = *v4,
                 *((_DWORD *)v6 + 2) != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 104LL))(v14)) )
      {
        v9 = **v4;
        v10 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 168LL))(v14);
        if ( CompareStringOrdinal(v9, -1, v10, -1, 1) != 2 )
          goto LABEL_15;
        v11 = *v4;
        if ( *((_DWORD *)v11 + 4) != (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14
                                                                                                  + 176LL))(v14) )
          goto LABEL_15;
      }
      lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        &v13,
        v4);
LABEL_15:
      ++v4;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x22B,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                             v8);
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}

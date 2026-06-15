/*
 * XREFs of ?OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800F1DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F0774 (_lambda_0f6133618d0c12f17131f09684aeafcf_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

__int64 __fastcall CProcessSubmixManager::OnProcessSubmixInactivated(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  const WCHAR *v7; // rdi
  const WCHAR *v8; // rax
  __int64 v9; // rdi
  struct IProcessSubmixProxy **v11; // [rsp+50h] [rbp+8h] BYREF
  struct IProcessSubmixProxy *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v4 = (__int64 *)*((_QWORD *)this + 7);
  v11 = &v12;
  while ( v4 != *((__int64 **)this + 8) )
  {
    v6 = *(unsigned int *)(*v4 + 8);
    if ( *(_DWORD *)(*v4 + 12) == 2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, __int64))(*(_QWORD *)v12 + 112LL))(v12, v6) )
        goto LABEL_11;
LABEL_10:
      lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        &v11,
        v4);
      goto LABEL_11;
    }
    if ( (_DWORD)v6 )
    {
      v5 = *v4;
      if ( *(_DWORD *)(v5 + 8) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 104LL))(v12) )
        goto LABEL_10;
    }
    v7 = *(const WCHAR **)*v4;
    v8 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 168LL))(v12);
    if ( CompareStringOrdinal(v7, -1, v8, -1, 1) == 2 )
    {
      v9 = *v4;
      if ( *(_DWORD *)(v9 + 16) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 176LL))(v12) )
        goto LABEL_10;
    }
LABEL_11:
    ++v4;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

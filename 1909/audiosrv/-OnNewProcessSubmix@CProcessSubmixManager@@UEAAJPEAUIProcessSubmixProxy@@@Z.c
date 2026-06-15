/*
 * XREFs of ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180043BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ @ 0x1800C4F50 (--I-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC1EC (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixManager::OnNewProcessSubmix(
        CProcessSubmixManager *this,
        struct IProcessSubmixProxy *a2)
{
  __int64 v3; // rbx
  const char *v4; // r9
  __int64 result; // rax
  const WCHAR ***i; // rbx
  const WCHAR **v7; // rsi
  const WCHAR *v8; // rsi
  const WCHAR *v9; // rax
  const WCHAR **v10; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IProcessSubmixProxy *v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  struct IProcessSubmixProxy **v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  v13 = 0LL;
  v3 = *(_QWORD *)a2;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v13);
  try
  {
    (*(void (**)(void))(v3 + 80))();
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 240LL))(v13) )
      goto LABEL_3;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    v14 = &v12;
    for ( i = (const WCHAR ***)*((_QWORD *)this + 7); i != *((const WCHAR ****)this + 8); ++i )
    {
      v7 = *i;
      if ( *((_DWORD *)*i + 3) == 2 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *, _QWORD))(*(_QWORD *)v12 + 112LL))(
                v12,
                *((unsigned int *)v7 + 2)) )
          continue;
LABEL_13:
        lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
          &v14,
          i);
        continue;
      }
      if ( *((_DWORD *)v7 + 2)
        && *((_DWORD *)v7 + 2) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 104LL))(v12) )
      {
        goto LABEL_13;
      }
      v8 = **i;
      v9 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 168LL))(v12);
      if ( CompareStringOrdinal(v8, -1, v9, -1, 1) == 2 )
      {
        v10 = *i;
        if ( *((_DWORD *)v10 + 4) == (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12
                                                                                                  + 176LL))(v12) )
          goto LABEL_13;
      }
    }
    if ( this != (CProcessSubmixManager *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
LABEL_3:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x234,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v4);
  }
  return result;
}

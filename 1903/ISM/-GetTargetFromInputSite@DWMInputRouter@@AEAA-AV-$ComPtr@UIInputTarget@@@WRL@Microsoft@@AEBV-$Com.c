/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C39C4
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1800C3D20 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180001E00 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F894 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9B70 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C19C8 (--$As@UIInputTarget@@@-$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C3030 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800C312C (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1800C554C (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800C79A8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1800C80E4 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 */

// Hidden C++ exception states: #wind=4
struct IInputTarget **__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *this,
        struct IInputTarget **a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall ****a7)(_QWORD, GUID *, __int64 *))
{
  __int64 v11; // r15
  unsigned int v12; // eax
  _QWORD *CompositionInputQueue; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _BYTE *); // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  const struct _LUID *Luid; // rax
  __int64 **v21; // rax
  struct IInputTarget *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+50h] [rbp-91h] BYREF
  int v27; // [rsp+58h] [rbp-89h]
  DWORD dwProcessId; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v29; // [rsp+60h] [rbp-81h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-79h] BYREF
  __int128 v31; // [rsp+70h] [rbp-71h] BYREF
  __int128 v32; // [rsp+80h] [rbp-61h]
  __int64 v33; // [rsp+90h] [rbp-51h]
  __int64 v34; // [rsp+A0h] [rbp-41h]
  struct IInputTarget **v35; // [rsp+A8h] [rbp-39h]
  _BYTE v36[40]; // [rsp+B0h] [rbp-31h] BYREF

  v34 = -2LL;
  v35 = a2;
  *a2 = 0LL;
  v27 = 1;
  v11 = *a3;
  if ( !*(_BYTE *)(*a3 + 384) )
    goto LABEL_25;
  if ( *a7 && ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))(**a7)[5])(*a7, *(_QWORD *)(v11 + 32)) )
  {
    Microsoft::WRL::ComPtr<IDCompInputTarget>::As<IInputTarget>(a7, (__int64 *)a2);
  }
  else
  {
    v12 = ToCompositionInputType(a4);
    CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue((_QWORD *)(v11 + 32), v12);
    if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 3) <= 1 )
    {
      v26 = *a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v26);
      v31 = *((_OWORD *)CompositionInputQueue + 1);
      v32 = *((_OWORD *)CompositionInputQueue + 2);
      v33 = CompositionInputQueue[6];
      v19 = (__int64)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      DWMInputRouter::CreateAndRegisterTarget(this, (__int64)&v31, &v26, a2);
    }
    else if ( IsEdition(8778LL) && *(_DWORD *)CompositionInputQueue == 2 )
    {
      GetWindowThreadProcessId(*(HWND *)(a5 + 104), &dwProcessId);
      v14 = (__int64)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      DWMInputRouter::CreateAndRegisterTarget(this, dwProcessId, 0, 0, 0, *(_QWORD *)(a5 + 104), 0, 0, a2);
      v26 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
                  &v26) >= 0 )
      {
        v30 = &v29;
        v15 = v26;
        v16 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 72LL);
        v29 = *a3;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v29);
        v17 = v16(v15, v36);
        v31 = *(_OWORD *)v17;
        v32 = *(_OWORD *)(v17 + 16);
        v33 = *(_QWORD *)(v17 + 32);
        v18 = (__int64)*a2;
        if ( *a2 )
        {
          *a2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        DWMInputRouter::CreateAndRegisterTarget(this, (__int64)&v31, &v29, a2);
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v26);
    }
  }
  if ( !*a2 )
    goto LABEL_25;
  if ( *(_BYTE *)(a5 + 112) )
  {
    Luid = LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(v11 + 32));
    if ( (unsigned __int8)operator==(Luid, a6) )
    {
      v26 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
                  &v26) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 80LL))(v26, *(unsigned int *)(a5 + 116));
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v26);
    }
  }
  if ( !*a2 )
  {
LABEL_25:
    v21 = (__int64 **)InputSiteTarget::Create(&v26, a3);
    v22 = 0LL;
    if ( &v30 != v21 )
    {
      v22 = (struct IInputTarget *)*v21;
      *v21 = 0LL;
    }
    v23 = (__int64)*a2;
    *a2 = v22;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  return a2;
}

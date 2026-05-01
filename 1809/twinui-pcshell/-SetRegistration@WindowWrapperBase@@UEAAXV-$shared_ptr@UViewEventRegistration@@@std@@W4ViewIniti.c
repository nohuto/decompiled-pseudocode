/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180059EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001F0B8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005A254 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18005A4A8 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18024E090 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx
  char v9; // si
  int v10; // edx
  __int16 v11; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // esi
  int v18; // ebx
  int v19; // eax
  _QWORD *v20; // rax
  int v21; // eax
  int v22; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v22 = -2;
  v6 = 0;
  v24 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 200LL))(*(_QWORD *)(a1 + 264));
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a2[1];
  }
  *(_QWORD *)(a1 + 320) = *a2;
  v8 = *(std::_Ref_count_base **)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v24 = 0;
    if ( a3 != 1 )
      goto LABEL_7;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 136LL))(
                      *(_QWORD *)(a1 + 264),
                      &v25);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v15 + 64LL))(*v15, *(_QWORD *)(a1 + 88), &v24);
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x643,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v16,
        -2);
    v6 = 1;
    if ( v17 >= 0 && v24 )
      v9 = 1;
    else
LABEL_7:
      v9 = 0;
    if ( (v6 & 1) != 0 )
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v25);
    if ( v9 )
    {
      v18 = *(_DWORD *)(a1 + 460);
      v19 = v18;
      if ( v24 != *(_DWORD *)(a1 + 456) )
      {
        *(_DWORD *)(a1 + 456) = v24;
        WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
        v19 = *(_DWORD *)(a1 + 460);
      }
      if ( v18 == v19 )
      {
        v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 136LL))(
                          *(_QWORD *)(a1 + 264),
                          &v26);
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v20 + 56LL))(
                *v20,
                *(unsigned int *)(a1 + 336),
                *(unsigned int *)(a1 + 460));
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x658,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v21,
            v22);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v26);
      }
      if ( (unsigned int)(v24 - 4) <= 1 )
      {
        WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
        WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
      }
    }
  }
  v10 = *(_DWORD *)(a1 + 340);
  v11 = 4;
  if ( (v10 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 456) - 4) <= 1 )
      v11 = 8;
    *(_WORD *)(a1 + 236) &= 0xFFF1u;
    *(_WORD *)(a1 + 236) |= v11 | 1;
  }
  if ( (v10 & 8) == 0 )
  {
    *(_WORD *)(a1 + 236) &= ~0x10u;
    *(_WORD *)(a1 + 236) |= 0x21u;
  }
  if ( WindowsIsStringEmpty(**(HSTRING **)(a1 + 320)) )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL)) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 184),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 280));
    }
  }
  v14 = (std::_Ref_count_base *)a2[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}

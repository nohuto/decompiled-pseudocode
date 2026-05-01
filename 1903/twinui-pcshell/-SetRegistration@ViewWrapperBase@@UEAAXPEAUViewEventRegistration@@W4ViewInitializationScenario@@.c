/*
 * XREFs of ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x18029A320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005E314 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18005E554 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180297620 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180298EF8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802A4668 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

int __fastcall ViewWrapperBase::SetRegistration(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // r8d
  int v11; // edx
  __int16 v12; // cx
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  const WCHAR *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 456) = v3;
  if ( v5 && a3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 504LL) + 264LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 160) + 504LL),
           v5,
           &v17);
    if ( v7 >= 0 )
    {
      v8 = v17;
      if ( v17 )
      {
        v9 = *(_DWORD *)(a1 + 284);
        v10 = v9;
        if ( v17 != *(_DWORD *)(a1 + 280) )
        {
          *(_DWORD *)(a1 + 280) = v17;
          ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
          v10 = *(_DWORD *)(a1 + 284);
          v8 = v17;
        }
        if ( v9 == v10 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 504LL) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 160) + 504LL),
            *(unsigned int *)(a1 + 140));
          v8 = v17;
        }
        if ( (unsigned int)(v8 - 4) <= 1 )
        {
          WindowReadyState::VisibilityChanged(a1 + 352, 0LL, 1LL);
          WindowReadyState::VisibilityChanged(a1 + 352, 1LL, 1LL);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  v11 = *(_DWORD *)(a1 + 456);
  v12 = 4;
  if ( (v11 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 280) - 4) <= 1 )
      v12 = 8;
    *(_WORD *)(a1 + 348) &= 0xFFF1u;
    *(_WORD *)(a1 + 348) |= v12 | 1;
  }
  if ( (v11 & 8) == 0 )
  {
    *(_WORD *)(a1 + 348) &= ~0x10u;
    *(_WORD *)(a1 + 348) |= 0x21u;
  }
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
  LODWORD(ExperienceIdPersistenceIndex) = WindowsIsStringEmpty(*(HSTRING *)a2);
  if ( (_DWORD)ExperienceIdPersistenceIndex )
  {
    LODWORD(ExperienceIdPersistenceIndex) = WindowsIsStringEmpty(*(HSTRING *)(a2 + 8));
    if ( !(_DWORD)ExperienceIdPersistenceIndex )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 8), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LODWORD(ExperienceIdPersistenceIndex) = LightweightPropertySet::SetProperty(
                                                  (LightweightPropertySet *)(a1 + 96),
                                                  L"ExperienceId",
                                                  ExperienceIdPersistenceIndex,
                                                  *(HWND *)(a1 + 264));
    }
  }
  return ExperienceIdPersistenceIndex;
}

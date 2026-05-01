/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180217AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180209568 (--$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180212B0C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide@@@wil@@CA.c)
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180214E10 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x180215044 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215CB4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x180215D58 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180217300 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

signed int __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::put_Visibility(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rdi
  HWND v5; // r14
  __int64 v6; // rdx
  wil::details *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  int ready; // eax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  HSTRING v21; // rcx
  int v22; // eax
  int v23; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  int v26; // [rsp+48h] [rbp+10h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 208);
  AcquireSRWLockShared((PSRWLOCK)this + 26);
  v5 = (HWND)*((_QWORD *)this + 48);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !PostMessageW(v5, 0x18u, a2 != 0, 0LL) )
    return wil::details::GetLastErrorFailHr(v7, v6, v8, v9);
  if ( !a2 )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(this, 0);
    v12 = ready;
    if ( ready < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      return v12;
    }
    if ( (unsigned __int8)GetPropW(v5, L"Windows.Graphics.Holographic.DisableForegroundOnPresence") )
    {
      if ( anonymous_namespace_::_DisplayInHeadset(v14, v13, v15, v16) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 56LL))(*((_QWORD *)this + 55));
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB6,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v17);
      }
    }
  }
  AcquireSRWLockExclusive(v2);
  *((_BYTE *)this + 400) = a2 != 0;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent((RTL_SRWLOCK *)this);
  if ( a2 )
    return 0;
  wil::Feature<__WilFeatureTraits_Feature_CloseWin32ExclusivesOnHide>::ReportUsageToService(v19, v18, v20);
  if ( !SHRegGetBoolValueFromHKCUHKLM(
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
          L"CloseWin32ExclusivesOnHide",
          1) )
    return 0;
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v26) < 0 )
    return 0;
  if ( v26 != 1 )
    return 0;
  v21 = (HSTRING)*((_QWORD *)this + 47);
  v26 = *((_DWORD *)this + 96);
  StringRawBuffer = WindowsGetStringRawBuffer(v21, 0LL);
  Win32BackedViewHostItemTelemetry::ClosingExclusiveOnHide<unsigned short const *,unsigned int>(
    &StringRawBuffer,
    (__int64)&v26);
  v22 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TryClose((RTL_SRWLOCK *)this, 0);
  v23 = v22;
  if ( v22 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v22);
  return v23;
}

/*
 * XREFs of _lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator() @ 0x1800236E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab18a9d10a1d6bbb0b19e97902cc9d6___::Run @ 0x180022B80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ab18a9d10a1d6bbb0b19e97902cc9d6___--Run.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator()(unsigned int *a1)
{
  int v2; // eax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  _QWORD v11[2]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 6) + 120LL) + 112LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 6) + 120LL),
    *a1,
    a1[1]);
  v2 = 0;
  v8 = 19;
  v3 = (a1[1] & 0x20) == 0;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v10 = 16;
  if ( !v3 )
    v2 = 5;
  v4 = *((_QWORD *)a1 + 6);
  LODWORD(v11[0]) = v2;
  v9 = v11;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v4 + 128), &v8) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x540,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v7);
  LOBYTE(v5) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v6, v5);
  if ( *((_BYTE *)a1 + 40) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 6) + 128LL),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}

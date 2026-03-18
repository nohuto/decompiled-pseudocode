/*
 * XREFs of _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C01FC080
 * Callers:
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C006B5DC (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _lambda_336d399dbea870f4b634e48a18f0c036_::operator() @ 0x1C01FC248 (_lambda_336d399dbea870f4b634e48a18f0c036_--operator().c)
 *     ?IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@Z @ 0x1C01FCEF4 (-IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@.c)
 */

char __fastcall anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___(
        __int64 a1,
        int a2)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v10 = *(_DWORD *)(a1 + 280);
  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
    v5 = ***(_QWORD ***)(v4 + 8);
  else
    v5 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v5)
    && v7
    && (unsigned __int8)CWindowGroupManager::IsPolicySet(v6, &v10)
    && (unsigned __int8)lambda_336d399dbea870f4b634e48a18f0c036_::operator()(v8, a1) )
  {
    return 1;
  }
  return v2;
}

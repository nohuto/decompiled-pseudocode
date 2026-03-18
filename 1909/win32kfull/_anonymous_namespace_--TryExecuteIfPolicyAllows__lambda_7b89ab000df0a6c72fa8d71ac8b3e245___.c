/*
 * XREFs of _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___ @ 0x1C023C970
 * Callers:
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023E050 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C000EA24 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator() @ 0x1C023CC2C (_lambda_7b89ab000df0a6c72fa8d71ac8b3e245_--operator().c)
 *     ?IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@Z @ 0x1C023D7E0 (-IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@.c)
 */

char __fastcall anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_7b89ab000df0a6c72fa8d71ac8b3e245___(
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
  v10 = *(_DWORD *)(a1 + 308);
  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
    v5 = ***(_QWORD ***)(v4 + 8);
  else
    v5 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v5)
    && v7
    && (unsigned __int8)CWindowGroupManager::IsPolicySet(v6, &v10)
    && (unsigned __int8)lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator()(v8, a1) )
  {
    return 1;
  }
  return v2;
}

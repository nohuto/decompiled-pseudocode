/*
 * XREFs of ?IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@Z @ 0x1C01FCEF4
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___ @ 0x1C01FC080 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_336d399dbea870f4b634e48a18f0c036___.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&___ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___ @ 0x1C01FBF7C (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-___ptr64__lambda_c4bb4a127.c)
 */

bool __fastcall CWindowGroupManager::IsPolicySet(__int64 a1, _DWORD *a2)
{
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c; // rax
  signed int v3; // ecx

  Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c___(
                                                                                                   (__int64)`anonymous namespace'::g_windowGroupManager
                                                                                                 + 16,
                                                                                                   (unsigned int)*a2,
                                                                                                   a2);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c )
    v3 = (*(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const_____ptr64__lambda_c4bb4a127cb331941e9bd6a6a6681c9c + 20) & 1) == 0
       ? 0xC0000272
       : 0;
  else
    v3 = -1073741275;
  return v3 >= 0;
}

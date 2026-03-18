/*
 * XREFs of ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225E88
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C0224E40 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C0224EE8 (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0226174 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_unsigned___int64_&___ptr64__lambda_7e5c23ce57b286a39fc0143d96e6f3d2___ @ 0x1C02247F0 (_anonymous_namespace_--FindObject_CWindow_unsigned___int64_-___ptr64__lambda_7e5c23ce57b286a39fc.c)
 */

__int64 __fastcall CWindowGroup::_GetWindowFromRole(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8LL * (unsigned int)(a2 - 1) + 40);
    v5 = v3;
    if ( v3 )
      return anonymous_namespace_::FindObject_CWindow_unsigned___int64_____ptr64__lambda_7e5c23ce57b286a39fc0143d96e6f3d2___(
               a1 + 24,
               v3,
               &v5);
  }
  return v2;
}

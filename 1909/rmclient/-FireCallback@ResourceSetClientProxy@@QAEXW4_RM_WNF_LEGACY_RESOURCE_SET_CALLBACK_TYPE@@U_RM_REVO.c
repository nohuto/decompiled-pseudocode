/*
 * XREFs of ?FireCallback@ResourceSetClientProxy@@QAEXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x100145DC
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x10014824 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382 (-AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z.c)
 */

int __thiscall ResourceSetClientProxy::FireCallback(_DWORD *this, int a2, int a3)
{
  int v4; // esi
  int v5; // edx
  int result; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v7 = 0;
  v5 = this[104];
  if ( v5 )
  {
    ATL::AtlComPtrAssign(&v7, v5);
    v4 = v7;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD, int))(*(_DWORD *)v4 + 12))(
                 *(_DWORD *)(*(_DWORD *)v4 + 12),
                 v4,
                 this[6],
                 a3);
    }
    else if ( a2 == 2 )
    {
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v4 + 20))(
                 *(_DWORD *)(*(_DWORD *)v4 + 20),
                 v4,
                 this[6]);
    }
    else
    {
      result = a2 - 3;
      if ( a2 == 3 )
        result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v4 + 24))(
                   *(_DWORD *)(*(_DWORD *)v4 + 24),
                   v4,
                   this[6]);
    }
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v4 + 16))(
               *(_DWORD *)(*(_DWORD *)v4 + 16),
               v4,
               this[6]);
  }
  if ( v4 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 8))(*(_DWORD *)(*(_DWORD *)v4 + 8), v4);
  return result;
}

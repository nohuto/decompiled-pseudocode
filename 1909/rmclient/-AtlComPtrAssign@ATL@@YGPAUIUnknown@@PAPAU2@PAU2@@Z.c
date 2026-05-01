/*
 * XREFs of ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?FireCallback@ResourceSetClientProxy@@QAEXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x100145DC (-FireCallback@ResourceSetClientProxy@@QAEXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVO.c)
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x10014824 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET.c)
 *     ?ReleaseCallback@ResourceSetClientProxy@@IAEXXZ @ 0x10014A93 (-ReleaseCallback@ResourceSetClientProxy@@IAEXXZ.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  if ( a2 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 4))(*(_DWORD *)(*(_DWORD *)a2 + 4), a2);
  if ( *a1 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a1 + 8))(*(_DWORD *)(*(_DWORD *)*a1 + 8), *a1);
  *a1 = a2;
  return (struct IUnknown *)a2;
}

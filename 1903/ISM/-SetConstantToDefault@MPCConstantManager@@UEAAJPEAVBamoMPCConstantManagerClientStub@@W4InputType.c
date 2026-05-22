/*
 * XREFs of ?SetConstantToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncHRESULTProxy@@@Z @ 0x18008AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@PEBG@Z @ 0x18008AE9C (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@PEBG@Z.c)
 */

__int64 __fastcall MPCConstantManager::SetConstantToDefault(__int64 a1, __int64 a2, int a3, _WORD *a4, __int64 a5)
{
  MPCConstantManager::SetConstantToDefault(a1, a3, a4);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a5 + 8) + 24LL))(a5 + 8, 0LL);
}

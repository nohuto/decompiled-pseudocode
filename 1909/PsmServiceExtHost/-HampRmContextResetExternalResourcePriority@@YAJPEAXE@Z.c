/*
 * XREFs of ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x180079428
 * Callers:
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x18007AF68 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001CB78 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001CC90 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800677D4 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampRmContextResetExternalResourcePriority(_QWORD *a1)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  int v6; // eax
  _QWORD v7[4]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v8[384]; // [rsp+40h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  v3 = v2;
  result = HampSystemQueryPolicyInfo(
             (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1[1] + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 216),
             (const unsigned __int16 *)(a1[1] + 252LL),
             (struct ExecutionModel::_ResourceSetInfo *)v8);
  if ( (int)result >= 0 )
  {
    v5 = a1[2];
    v7[2] = *(unsigned int *)&v8[4 * v3 + 152];
    v7[1] = 0LL;
    v7[0] = (unsigned int)v3;
    v6 = RmSrvResourceSetExternalResourcePriorities(RmSvcGlobals, v5, 1u, (struct ExecutionModel::_ResourceInfo *)v7);
    if ( v6 >= 0 )
      return 0LL;
    else
      return v6 | 0xC0000000;
  }
  return result;
}

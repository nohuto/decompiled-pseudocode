/*
 * XREFs of ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800794EC
 * Callers:
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007B004 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800677D4 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampRmContextSetExternalResourcePriority(
        _QWORD *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6[0] = 0LL;
  v6[1] = 0LL;
  v7 = 0LL;
  LODWORD(v6[0]) = *(unsigned __int8 *)a2;
  v2 = *((unsigned __int8 *)a2 + 1);
  v3 = a1[2];
  LODWORD(v7) = v2;
  v4 = RmSrvResourceSetExternalResourcePriorities(RmSvcGlobals, v3, 1u, (struct ExecutionModel::_ResourceInfo *)v6);
  if ( v4 >= 0 )
    return 0LL;
  else
    return v4 | 0xC0000000;
}

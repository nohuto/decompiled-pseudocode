/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001DF40
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int16 v5; // ax

  if ( *((_QWORD *)a1 + 14) == -1LL )
    return 0LL;
  v1 = *((_QWORD *)a1 + 8);
  if ( v1 - 1 <= 0xFFE )
    return 0LL;
  v2 = *((_QWORD *)a1 + 7);
  if ( v2 - 1 <= 0xFFE )
    return 0LL;
  v3 = *((_QWORD *)a1 + 45);
  if ( v3 - 1 <= 0xFFE )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 - 1 <= 0xFFE )
    return 0LL;
  if ( v1 < v4 )
    return 0LL;
  if ( v4 < v2 )
    return 0LL;
  if ( v2 < v3 )
    return 0LL;
  if ( *((_DWORD *)a1 + 2) > *((_DWORD *)a1 + 8) )
    return 0LL;
  v5 = *((_WORD *)a1 + 20);
  return (v5 & 9) != 9
      && ((*((_BYTE *)a1 + 42) & 7u) - 2 > 2 || (v5 & 3) != 0)
      && ((*((_WORD *)a1 + 20) & 0x20) != 0 || (*((_BYTE *)a1 + 44) & 0x20) == 0);
}

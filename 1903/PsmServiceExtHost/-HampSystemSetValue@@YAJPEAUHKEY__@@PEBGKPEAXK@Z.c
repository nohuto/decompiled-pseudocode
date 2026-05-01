/*
 * XREFs of ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x18000E838
 * Callers:
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180007E50 (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000E7AC (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemSetValue(HKEY a1, const unsigned __int16 *a2, DWORD a3, const BYTE *lpData, DWORD cbData)
{
  LSTATUS result; // eax

  result = RegSetValueExW(a1, a2, 0, a3, lpData, cbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}

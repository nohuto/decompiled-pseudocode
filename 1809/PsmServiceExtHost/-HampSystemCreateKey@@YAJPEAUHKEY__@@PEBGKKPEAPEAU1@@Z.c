/*
 * XREFs of ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x18002F4A8
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18002EEF8 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18002EFA4 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x18002F140 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemCreateKey(HKEY a1, const unsigned __int16 *a2, DWORD a3, REGSAM a4, HKEY *a5)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a1, a2, 0, 0LL, a3, a4, 0LL, a5, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}

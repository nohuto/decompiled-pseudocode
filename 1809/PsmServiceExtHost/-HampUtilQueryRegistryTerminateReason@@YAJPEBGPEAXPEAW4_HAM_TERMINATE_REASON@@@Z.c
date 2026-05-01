/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18002ED34
 * Callers:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18002EAF4 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x18002EEC4 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18002EEF8 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18002F4EC (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryRegistryTerminateReason(
        const unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-E0h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v12[136]; // [rsp+40h] [rbp-C0h] BYREF

  hKey = 0LL;
  v10 = 130;
  HampUtilGetAumidFromPsmKey(a1, &v10, v12);
  v5 = HampUtilCreateVolatileUserRegKey(a2, 1u, &hKey);
  if ( v5 >= 0 )
  {
    v8 = 4;
    v6 = HampSystemQueryValue(hKey, v12, v11, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -1073283070 )
        goto LABEL_6;
      *(_DWORD *)a3 = 0;
      goto LABEL_5;
    }
    if ( v11[0] <= 0x19FF && v8 == 4 )
    {
      *(_DWORD *)a3 = v11[0];
LABEL_5:
      v5 = 0;
      goto LABEL_6;
    }
    v5 = -1073739509;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}

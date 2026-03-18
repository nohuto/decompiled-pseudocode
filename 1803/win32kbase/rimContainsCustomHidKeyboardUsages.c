/*
 * XREFs of rimContainsCustomHidKeyboardUsages @ 0x1C01039A0
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall rimContainsCustomHidKeyboardUsages(struct _HIDP_PREPARSED_DATA *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  struct _HIDP_BUTTON_CAPS *v7; // rsi
  unsigned __int8 v8; // di
  int SpecificButtonCaps; // eax
  unsigned __int16 v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = 0LL;
  if ( a3 )
  {
    v11 = *(_WORD *)(a2 + 46);
    v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged(72LL * v11, 0x626B4852u);
    if ( v7 )
    {
      memset(v7, 0, 72LL * v11);
      *a3 = 0;
      v8 = 0;
      v12 = 0xF300F400F100F0LL;
      while ( 1 )
      {
        v11 = *(_WORD *)(a2 + 46);
        memset(v7, 0, 72LL * v11);
        SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *((_WORD *)&v12 + v8), v7, &v11, a1);
        v6 = SpecificButtonCaps;
        if ( SpecificButtonCaps < 0 )
          break;
        if ( ++v8 >= 4u )
        {
          *a3 = 1;
          goto LABEL_11;
        }
      }
      if ( SpecificButtonCaps == -1072627708 )
        v6 = 0;
LABEL_11:
      Win32FreePool((__int64)v7);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}

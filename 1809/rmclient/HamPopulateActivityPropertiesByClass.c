/*
 * XREFs of HamPopulateActivityPropertiesByClass @ 0x18000F580
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18000E9B0 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBGW4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800103D8 (-HampActivityPropertiesInitializeByClass@@YAXPEBGW4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPER.c)
 */

__int64 __fastcall HamPopulateActivityPropertiesByClass(const unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  int v5; // r11d
  unsigned int v6; // ebx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( (int)StringCchLengthW(a1, 64LL, &v8) >= 0 )
  {
    if ( v5 > 0 )
      return (unsigned int)-1073741584;
    else
      HampActivityPropertiesInitializeByClass(a1, (unsigned int)v5, a3);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v6;
}

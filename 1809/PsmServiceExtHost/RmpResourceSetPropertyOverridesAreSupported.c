/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x180009BA8
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009A80 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x180009C90 (RmpResourceLimitsAreLegal.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

_BOOL8 __fastcall RmpResourceSetPropertyOverridesAreSupported(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v7[56]; // [rsp+58h] [rbp-60h] BYREF
  __int16 v8; // [rsp+90h] [rbp-28h]
  char v9; // [rsp+92h] [rbp-26h]

  v5 = 255LL;
  if ( !(unsigned int)RmpResourceLimitsAreLegal(a1 + 40, &v5) )
    return 0LL;
  memset_0(v6, 0, 0x68uLL);
  memset_0(v7, 0, sizeof(v7));
  v2 = *(_DWORD *)(a1 + 32);
  if ( (unsigned __int16)v2 >= 0x1000u )
    return 0LL;
  if ( (v2 & 1) != 0 )
  {
    v4 = HIBYTE(v2);
    if ( (_BYTE)v4 && (unsigned __int8)v4 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v2 || *(_BYTE *)(a1 + 36) != v6[36] )
  {
    return 0LL;
  }
  return *(_WORD *)(a1 + 96) == v8
      && *(_BYTE *)(a1 + 98) == v9
      && !*(_DWORD *)(a1 + 100)
      && ((*(_BYTE *)(a1 + 16) & 2) != 0 || !*(_QWORD *)a1)
      && ((*(_BYTE *)(a1 + 16) & 4) != 0 || !*(_QWORD *)(a1 + 8));
}

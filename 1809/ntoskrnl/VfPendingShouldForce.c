/*
 * XREFs of VfPendingShouldForce @ 0x140934994
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140926F50 (VfRandomGetNumber.c)
 *     VfDriverIsKernelImageAddress @ 0x140929128 (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 */

_BOOL8 __fastcall VfPendingShouldForce(
        __int16 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // ecx
  BOOL v7; // edi
  BOOL v9; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx

  v6 = a1 & 0x200;
  v7 = 0;
  v9 = v6 != 0;
  if ( v6 )
  {
    v9 = 0;
    if ( a2 < 2u
      && !*(_QWORD *)(a5 + 216)
      && !VfDriverIsKernelImageAddress(a6)
      && (unsigned int)VfTargetDriversIsEnabled(v11)
      && (*(_DWORD *)(a3 + 16) & 0xC0) == 0
      && !*(_BYTE *)(a3 + 65)
      && VfRandomGetNumber(0, 0x64u) < ViPendingProbability )
    {
      v12 = *a4;
      if ( v12 == 13 )
        v13 = *((_DWORD *)a4 + 6);
      else
        v13 = a4[1];
      v14 = v12 - 12;
      if ( !v14 )
        return v13 != 2;
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 4;
        if ( !v16 )
        {
          LOBYTE(v7) = v13 != 1;
          return v7;
        }
        if ( v16 == 10 )
        {
          LOBYTE(v9) = v13 != 2;
          return v9;
        }
        return 1;
      }
      if ( v13 != 589916 && v13 != 589904 )
      {
        if ( (unsigned int)(v13 - 589824) > 0x14 || (v17 = 1118481, !_bittest(&v17, v13 - 589824)) )
        {
          if ( v13 != 590400 )
            return 1;
        }
      }
    }
  }
  return v9;
}

/*
 * XREFs of DrvDbGetRegValueMappedProperty @ 0x1406D4D1C
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406D37CC (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F639C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140902A7C (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1409030F8 (DrvDbGetDriverPackageSignerName.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v9; // eax
  _WORD *v11; // rbx
  int v12; // eax
  int *v13; // r9
  const WCHAR *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v20[3]; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+54h] [rbp+Ch]
  int v23; // [rsp+60h] [rbp+18h] BYREF

  v22 = HIDWORD(a1);
  v23 = 0;
  v21 = 0;
  v9 = *(_DWORD *)(a3 + 8);
  v11 = a5;
  if ( v9 == 17 || v9 == 5 )
  {
    v13 = &v21;
    v12 = 4;
  }
  else
  {
    v12 = a6;
    v13 = (int *)a5;
  }
  v14 = *(const WCHAR **)(a3 + 16);
  LODWORD(v20[0]) = v12;
  v15 = RegRtlQueryValue(a2, v14, &v23, v13, (unsigned int *)v20);
  v16 = v15;
  if ( v15 == -1073741772 )
    return (unsigned int)-1073741275;
  if ( !v15 || v15 == -1073741789 )
  {
    if ( v23 == *(_DWORD *)(a3 + 24) )
    {
      *a4 = *(_DWORD *)(a3 + 8);
      v17 = *(_DWORD *)(a3 + 8);
      if ( v17 == 5 )
      {
        *a7 = 2;
        if ( !v11 || a6 < 2 )
          return (unsigned int)-1073741789;
        if ( v16 != -1073741789 )
        {
          *v11 = v21;
          return v16;
        }
      }
      else
      {
        if ( v17 != 17 )
        {
          v18 = v20[0];
          *a7 = v20[0];
          if ( v11 && a6 >= v18 )
            return v16;
          return (unsigned int)-1073741789;
        }
        *a7 = 1;
        if ( !v11 || !a6 )
          return (unsigned int)-1073741789;
        if ( v16 != -1073741789 )
        {
          *(_BYTE *)v11 = -(v21 != 0);
          return v16;
        }
      }
    }
    return (unsigned int)-1073741595;
  }
  return v16;
}

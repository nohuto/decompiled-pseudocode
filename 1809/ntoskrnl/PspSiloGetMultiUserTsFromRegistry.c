/*
 * XREFs of PspSiloGetMultiUserTsFromRegistry @ 0x140888A38
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x140888BAC (PspSiloInitializeSuiteMask.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetMultiUserTsFromRegistry(_BYTE *a1)
{
  int RegistryValues; // ecx
  char v3; // al
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  memset(v5, 0, 0x70uLL);
  LODWORD(v5[1]) = 292;
  LODWORD(v5[4]) = 0x4000000;
  v5[2] = L"TSAppCompat";
  v5[3] = &v6;
  RegistryValues = RtlpQueryRegistryValues(2LL, L"Terminal Server", (__int64)v5, 0LL);
  if ( RegistryValues == -1073741772 )
  {
    v3 = 0;
    RegistryValues = 0;
LABEL_5:
    *a1 = v3;
    return (unsigned int)RegistryValues;
  }
  if ( RegistryValues >= 0 )
  {
    v3 = v6;
    goto LABEL_5;
  }
  return (unsigned int)RegistryValues;
}

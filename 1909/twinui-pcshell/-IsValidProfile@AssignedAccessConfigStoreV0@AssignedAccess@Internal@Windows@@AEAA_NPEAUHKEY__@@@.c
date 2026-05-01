/*
 * XREFs of ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z @ 0x18043504C
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180434D50 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::IsValidProfile(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        HKEY a2)
{
  const wchar_t **v3; // rbx
  const wchar_t *v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  const wchar_t *v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]
  char v9; // [rsp+50h] [rbp-8h] BYREF
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *Type; // [rsp+60h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+70h] [rbp+18h] BYREF

  Type = this;
  v5 = L"AppUserModelId";
  v3 = &v5;
  v6 = 1;
  v7 = L"ConfigLevel";
  v8 = 4;
  while ( !RegQueryValueExW(a2, *v3, 0LL, (LPDWORD)&Type, 0LL, &cbData) && (_DWORD)Type == *((_DWORD *)v3 + 2) && cbData )
  {
    v3 += 2;
    if ( v3 == (const wchar_t **)&v9 )
      return 1;
  }
  return 0;
}

/*
 * XREFs of BiGetObjectDescription @ 0x140711214
 * Callers:
 *     BcdQueryObject @ 0x140712704 (BcdQueryObject.c)
 *     BcdEnumerateObjects @ 0x1408F08DC (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1408F2468 (BiBuildIdentifierList.c)
 *     BiIsLinkedToEfiVariable @ 0x1408F4178 (BiIsLinkedToEfiVariable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 */

__int64 __fastcall BiGetObjectDescription(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  __int64 v5; // rcx
  int RegistryValue; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = BiOpenKey(a1, L"Description", 131097LL, v8);
  if ( v4 >= 0 )
  {
    v5 = v8[0];
    v9 = 0;
    *a2 = 1;
    RegistryValue = BiGetRegistryValue(v5, L"Type", 0LL, 4LL, &v10, &v9);
    v3 = v10;
    v4 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( v9 == 4 )
        a2[1] = *v10;
      else
        v4 = -1073741788;
    }
  }
  if ( v8[0] )
    BiCloseKey(v8[0]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v4;
}

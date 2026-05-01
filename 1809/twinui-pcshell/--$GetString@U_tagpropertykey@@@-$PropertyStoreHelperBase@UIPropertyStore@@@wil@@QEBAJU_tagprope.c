/*
 * XREFs of ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1803A88C0
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1803A9DBC (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1803AADA4 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013F598 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        _QWORD *a3)
{
  __int128 v3; // xmm0
  int v4; // eax
  int FailIf; // ebx
  bool v7; // zf
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v3 = *a2;
  v4 = *((_DWORD *)a2 + 4);
  *a3 = 0LL;
  LOWORD(pvar) = 0;
  v9 = v3;
  v10 = v4;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v9, &pvar);
  if ( FailIf >= 0 )
  {
    v7 = (_WORD)pvar == 31;
    *a3 = 0LL;
    if ( v7 && v12 )
    {
      *a3 = v12;
      pvar = 0LL;
      v12 = 0LL;
      v13 = 0LL;
    }
    else
    {
      FailIf = -2147352571;
    }
  }
  PropVariantClear(&pvar);
  return (unsigned int)FailIf;
}

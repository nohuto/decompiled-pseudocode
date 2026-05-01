/*
 * XREFs of ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18013F504
 * Callers:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180141CB0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013F598 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetBoolean<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        bool *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-38h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-28h] BYREF
  __int16 v9; // [rsp+58h] [rbp-20h]

  *a3 = 0;
  LOWORD(pvar) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, &v6, &pvar);
  if ( FailIf >= 0 )
  {
    if ( (_WORD)pvar == 11 )
      *a3 = v9 == -1;
    else
      FailIf = -2147352571;
  }
  PropVariantClear(&pvar);
  return (unsigned int)FailIf;
}

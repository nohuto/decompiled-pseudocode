/*
 * XREFs of ??R?$equal_to@_K@utl@@QBE_NAB_K0@Z @ 0x10013BFB
 * Callers:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@ABEXU?$integral_constant@_N$0A@@1@AB_KAAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@1@2AAI@Z @ 0x1001394A (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@AB_KIPAPAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014EDE (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 * Callees:
 *     <none>
 */

bool __stdcall utl::equal_to<unsigned __int64>::operator()(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}

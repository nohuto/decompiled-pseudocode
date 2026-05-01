/*
 * XREFs of ?_HashUint@utl@@YGI_K@Z @ 0x10014FAD
 * Callers:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@ABEXU?$integral_constant@_N$0A@@1@AB_KAAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@1@2AAI@Z @ 0x1001394A (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2.c)
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x10014E67 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall utl::_HashUint(utl *this, unsigned __int64 a2)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // ecx

  v2 = 5 * __ROL4__(461845907 * __ROL4__(-862048943 * (_DWORD)this, 15), 13);
  v3 = __ROL4__(-862048943 * a2, 15);
  v4 = -2048144789 * ((461845907 * v3) ^ (v2 - 430675100) ^ (((461845907 * v3) ^ (unsigned int)(v2 - 430675100)) >> 16));
  return (-1028477387 * (v4 ^ (v4 >> 13))) ^ ((-1028477387 * (v4 ^ (v4 >> 13))) >> 16);
}

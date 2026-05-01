/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180182250
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180186328 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18018648C (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180424A38 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x1801867BC (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // rdx
  _OWORD *i; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (unsigned __int8)std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(
                          a1,
                          (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4) )
  {
    v4 = (_OWORD *)*a1;
    v5 = *(_OWORD **)(a2 + 8);
    for ( i = *(_OWORD **)a2; i != v5; ++i )
      *v4++ = *i;
    a1[1] = v4;
  }
  return a1;
}

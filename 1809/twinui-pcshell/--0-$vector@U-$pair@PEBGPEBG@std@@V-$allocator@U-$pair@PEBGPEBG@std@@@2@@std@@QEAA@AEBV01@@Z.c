/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801381D8
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013BF88 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013C0EC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x18013C41C (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
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

/*
 * XREFs of ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x18039FA58
 * Callers:
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x18039FA94 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_variant_t *__fastcall _variant_t::_variant_t(_variant_t *this, struct IDispatch *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_WORD *)this = 9;
  if ( a2 )
    ((void (__fastcall *)(struct IDispatch *))a2->lpVtbl->AddRef)(a2);
  return this;
}

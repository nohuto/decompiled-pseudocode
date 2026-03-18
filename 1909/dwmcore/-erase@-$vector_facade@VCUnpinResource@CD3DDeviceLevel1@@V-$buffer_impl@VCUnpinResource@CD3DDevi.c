/*
 * XREFs of ?erase@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDeviceLevel1@@@2@@Z @ 0x1800EB450
 * Callers:
 *     ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EAFA0 (-ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015C780 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EB24C (-clear_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@C.c)
 */

_QWORD *__fastcall detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  _QWORD *result; // rax

  v4 = (*a3 - *a1) >> 4;
  detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4,
    1LL);
  result = a2;
  *a2 = *a1 + 16 * v4;
  return result;
}

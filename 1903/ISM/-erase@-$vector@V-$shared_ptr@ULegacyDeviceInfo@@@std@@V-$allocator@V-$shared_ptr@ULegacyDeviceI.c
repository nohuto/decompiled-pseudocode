/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x180094FEC
 * Callers:
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094C54 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009406C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v8; // rax
  std::_Ref_count_base *v9; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 16);
  v8 = v3;
  if ( (__int64 *)(a3 + 16) != v3 )
  {
    do
    {
      std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(v4 - 2, v4);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
    v8 = v3;
  }
  v9 = (std::_Ref_count_base *)*(v3 - 1);
  if ( v9 )
  {
    std::_Ref_count_base::_Decref(v9);
    v8 = *(__int64 **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 2;
  result = a2;
  *a2 = a3;
  return result;
}

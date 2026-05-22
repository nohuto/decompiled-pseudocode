/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy @ 0x180035880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800E97B8 (--$-0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@-$shared_ptr@VSp.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801704B0;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2 + 2);
  std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>(
    a2 + 3,
    a1 + 24);
  return a2;
}

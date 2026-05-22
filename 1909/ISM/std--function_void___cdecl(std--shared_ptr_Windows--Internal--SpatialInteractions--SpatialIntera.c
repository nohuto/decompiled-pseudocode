/*
 * XREFs of std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)_::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)___lambda_af431538d8c12ab4948a501325c7eb75__void_ @ 0x1800E9754
 * Callers:
 *     _lambda_a95b93df32bd5c2434c79e330695bd51_::operator() @ 0x1800EB1C8 (_lambda_a95b93df32bd5c2434c79e330695bd51_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const____::function_void___cdecl_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const______lambda_af431538d8c12ab4948a501325c7eb75__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rcx

  a1[7] = 0LL;
  *a1 = off_1801704E0;
  v3 = a1 + 1;
  *v3 = 0LL;
  if ( v3 != a2 )
  {
    *v3 = *a2;
    *a2 = 0LL;
  }
  v3[1] = a2[1];
  a1[7] = a1;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}

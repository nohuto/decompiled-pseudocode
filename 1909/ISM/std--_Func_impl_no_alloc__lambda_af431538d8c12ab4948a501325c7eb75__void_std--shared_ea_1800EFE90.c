/*
 * XREFs of std::_Func_impl_no_alloc__lambda_af431538d8c12ab4948a501325c7eb75__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800EFE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAJ@Z @ 0x1800E9D28 (--$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialIn.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_af431538d8c12ab4948a501325c7eb75__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  const wchar_t *v3; // rax
  const wchar_t *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8));
  v3 = (const wchar_t *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) >= 8uLL )
    v3 = *(const wchar_t **)v3;
  v4 = v3;
  SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects<wchar_t const *,long &>(
    &v4,
    (int *)&v5);
}

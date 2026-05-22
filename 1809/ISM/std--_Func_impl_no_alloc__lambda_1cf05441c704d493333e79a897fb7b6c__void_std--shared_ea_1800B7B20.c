/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1cf05441c704d493333e79a897fb7b6c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectDeviceStartListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ACF34 (-SpatialObjectDeviceStartListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDe.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_1cf05441c704d493333e79a897fb7b6c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_____ptr64_::_Do_call(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  _DWORD *v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 8) + 80LL;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v3 = *(_QWORD *)v3;
  v4 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects_(
        v5,
        (const wchar_t *)v3,
        v2);
    }
  }
}

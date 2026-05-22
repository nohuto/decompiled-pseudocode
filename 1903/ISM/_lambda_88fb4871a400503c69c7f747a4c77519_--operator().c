/*
 * XREFs of _lambda_88fb4871a400503c69c7f747a4c77519_::operator() @ 0x1800EB1F4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_88fb4871a400503c69c7f747a4c77519__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800F0050 (std--_Func_impl_no_alloc__lambda_88fb4871a400503c69c7f747a4c77519__void_std--shared_ea_1800F0050.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAJ@Z @ 0x1800E9F58 (--$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialIn.c)
 *     ?SpatialObjectDeviceStopListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800EDA9C (-SpatialObjectDeviceStopListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDev.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_88fb4871a400503c69c7f747a4c77519_::operator()(RTL_SRWLOCK **a1, __int64 a2)
{
  RTL_SRWLOCK *v3; // rbp
  _QWORD *Ptr; // rdi
  _QWORD *v5; // rbx
  wchar_t *v6; // rbx
  __int64 v7; // rax
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  int v10; // r14d
  const wchar_t *v11; // rsi
  __int64 v12; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // rcx
  _QWORD *v14; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v15; // [rsp+78h] [rbp+10h] BYREF
  const wchar_t *v16; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+88h] [rbp+20h]

  v15 = (wchar_t *)a2;
  v3 = *a1 + 78;
  AcquireSRWLockExclusive(v3);
  v17 = v3;
  Ptr = (*a1)[76].Ptr;
  v5 = (_QWORD *)*Ptr;
  v14 = (_QWORD *)*Ptr;
  while ( v5 != Ptr )
  {
    v6 = (wchar_t *)v5[8];
    v15 = v6;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
    v7 = *(_QWORD *)v6;
    if ( LOBYTE((*a1)[90].Ptr) )
    {
      LODWORD(v15) = (*(__int64 (__fastcall **)(wchar_t *))(v7 + 80))(v6);
      v8 = v6 + 40;
      if ( *((_QWORD *)v6 + 13) >= 8uLL )
        v8 = *(const wchar_t **)v8;
      v16 = v8;
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects<wchar_t const *,long &>(
        &v16,
        (int *)&v15);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(wchar_t *))(v7 + 88))(v6);
      v11 = v6 + 40;
      if ( *((_QWORD *)v6 + 13) >= 8uLL )
        v11 = *(const wchar_t **)v11;
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v9) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v12,
          (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStopListeningToSpatialObjects_(
          v13,
          v11,
          v10);
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v6 + 16LL))(v6);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v14);
    v5 = v14;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}

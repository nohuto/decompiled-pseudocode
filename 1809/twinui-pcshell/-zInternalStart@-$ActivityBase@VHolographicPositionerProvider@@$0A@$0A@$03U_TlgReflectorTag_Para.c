/*
 * XREFs of ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801C1618
 * Callers:
 *     ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1801BFE9C (-StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C3728 (-StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QE.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1801C38A8 (-StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

void __fastcall wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                    v3,
                    (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)[1] <= 4u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

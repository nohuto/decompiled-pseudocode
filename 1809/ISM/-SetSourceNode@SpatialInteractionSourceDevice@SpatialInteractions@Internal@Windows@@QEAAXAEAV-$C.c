/*
 * XREFs of ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BAE80
 * Callers:
 *     ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x1800BB620 (-StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTr.c)
 *     wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___ @ 0x1800BBFC0 (wil--details--lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___--_lambda_call__lambda_2610.c)
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180127490 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(
        RTL_SRWLOCK *a1,
        char *a2)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v5; // rax
  PVOID Ptr; // rbx
  __int64 v7; // rdi
  void *v8; // rdx
  PVOID v9; // rcx
  __int64 result; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  v5 = a1 + 11;
  Ptr = 0LL;
  if ( &v11 == (char *)v5 )
  {
    v7 = 0LL;
  }
  else
  {
    Ptr = v5->Ptr;
    v5->Ptr = 0LL;
    v7 = (__int64)Ptr;
  }
  v8 = 0LL;
  if ( &v11 != a2 )
  {
    v8 = *(void **)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v9 = v5->Ptr;
  v5->Ptr = v8;
  result = v7;
  if ( v9 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
    result = v7;
  }
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    result = v7;
  }
  if ( result )
    return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return result;
}

/*
 * XREFs of wil::details::lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___::_lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___ @ 0x1800BC140
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SubscribeToStateStream_::_1_::dtor$0 @ 0x180133988 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceObject--SubscribeToStateStream_.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800BAAC0 (-SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAE.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___::_lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___(
        _BYTE *a1)
{
  int *v1; // rbx
  const struct _GUID *v2; // rdi
  _DWORD *v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1[16] )
  {
    a1[16] = 0;
    v1 = (int *)*((_QWORD *)a1 + 1);
    v2 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 48LL))(
                                 *(_QWORD *)(*(_QWORD *)a1 + 120LL),
                                 v5);
    v3 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v3 )
    {
      if ( *v3 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectSubscribeToStateStream_(v4, v2, *v1);
      }
    }
  }
}

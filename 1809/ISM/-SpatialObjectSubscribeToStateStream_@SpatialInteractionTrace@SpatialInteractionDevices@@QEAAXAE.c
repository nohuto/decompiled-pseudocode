/*
 * XREFs of ?SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800BAAC0
 * Callers:
 *     ?SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800BB1E0 (-SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEA.c)
 *     wil::details::lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___::_lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___ @ 0x1800BC140 (wil--details--lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___--_lambda_call__lambda_86a3.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectSubscribeToStateStream_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3)
{
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v4 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = 0;
    v11 = 0;
    v9 = &v12;
    v6 = a2;
    v7 = 16;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)v4, &unk_18016A651, 0LL, 0LL, 4u, &pData);
  }
}

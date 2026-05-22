/*
 * XREFs of ?SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@JW4SPATIAL_TRACKING_STATE@@AEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800BACBC
 * Callers:
 *     wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___ @ 0x1800BBFC0 (wil--details--lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___--_lambda_call__lambda_2610.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStartTracking_(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  struct SpatialInteractionDevices::SpatialInteractionTrace *v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp-41h] BYREF
  int v11; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  int *v15; // [rsp+78h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+7h]
  int *v17; // [rsp+88h] [rbp+Fh]
  __int64 v18; // [rsp+90h] [rbp+17h]
  int *v19; // [rsp+98h] [rbp+1Fh]
  __int64 v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  __int64 v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+E8h] [rbp+6Fh] BYREF

  v23 = a3;
  v7 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
  v8 = *((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 )
  {
    v7 = (struct SpatialInteractionDevices::SpatialInteractionTrace *)(*(_QWORD *)(v8 + 24) & 2LL);
    if ( v7 == *(struct SpatialInteractionDevices::SpatialInteractionTrace **)(v8 + 24) )
    {
      v15 = &v23;
      v17 = &v10;
      v13 = a2;
      v11 = *(_DWORD *)(a5 + 16);
      v19 = &v11;
      v14 = 16LL;
      v16 = 4LL;
      v10 = a4;
      v18 = 4LL;
      v20 = 4LL;
      v21 = a5;
      v22 = 16LL;
      LODWORD(v7) = TlgWrite((TraceLoggingHProvider)v8, &unk_18016A6EA, 0LL, 0LL, 7u, &pData);
    }
  }
  return (int)v7;
}

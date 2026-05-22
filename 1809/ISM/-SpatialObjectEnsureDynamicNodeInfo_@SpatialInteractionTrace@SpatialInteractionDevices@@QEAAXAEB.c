/*
 * XREFs of ?SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@0@Z @ 0x1800BAB68
 * Callers:
 *     wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___ @ 0x1800BC078 (wil--details--lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___--_lambda_call__lambda_8af7.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfo_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v9 = 0;
    v12 = 0;
    v8 = 16;
    v11 = 16;
    v7 = a2;
    v10 = a3;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18016A60D, 0LL, 0LL, 4u, &pData);
  }
}

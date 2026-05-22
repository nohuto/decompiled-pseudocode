/*
 * XREFs of ?SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J_J@Z @ 0x1800BCBB4
 * Callers:
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800BE94C (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const struct _GUID *v7; // [rsp+58h] [rbp+17h]
  __int64 v8; // [rsp+60h] [rbp+1Fh]
  __int64 *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a3;
  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v7 = a2;
    v9 = &v14;
    v11 = &v13;
    v8 = 16LL;
    v10 = 8LL;
    v12 = 4LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18016AB7A, 0LL, 0LL, 5u, &pData);
  }
}

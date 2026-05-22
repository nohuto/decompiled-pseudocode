/*
 * XREFs of ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z @ 0x180122B1C
 * Callers:
 *     ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x180127890 (-StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4St.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStopTracking_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v7 = 0;
    v10 = 0;
    v5 = &v11;
    v8 = &v12;
    v6 = 4;
    v9 = 4;
    TlgWrite(v3, &unk_18016DE6E, 0LL, 0LL, 4u, &pData);
  }
}

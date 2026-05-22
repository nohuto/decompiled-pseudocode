/*
 * XREFs of ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x180122C8C
 * Callers:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180123ED8 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        char a2,
        __int64 a3,
        char a4,
        bool a5,
        bool a6)
{
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  char *v8; // [rsp+58h] [rbp-19h]
  __int64 v9; // [rsp+60h] [rbp-11h]
  __int64 *v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+70h] [rbp-1h]
  char *v12; // [rsp+78h] [rbp+7h]
  __int64 v13; // [rsp+80h] [rbp+Fh]
  bool *v14; // [rsp+88h] [rbp+17h]
  __int64 v15; // [rsp+90h] [rbp+1Fh]
  bool *v16; // [rsp+98h] [rbp+27h]
  __int64 v17; // [rsp+A0h] [rbp+2Fh]
  char v18; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v19; // [rsp+D8h] [rbp+67h] BYREF
  char v20; // [rsp+E0h] [rbp+6Fh] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v6 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 2) != 0 && (*(_QWORD *)(v6 + 24) & 2LL) == *(_QWORD *)(v6 + 24) )
  {
    v9 = 1LL;
    v8 = &v18;
    v10 = &v19;
    v12 = &v20;
    v14 = &a5;
    v16 = &a6;
    v11 = 8LL;
    v13 = 1LL;
    v15 = 1LL;
    v17 = 1LL;
    TlgWrite((TraceLoggingHProvider)v6, &unk_18016DFF6, 0LL, 0LL, 7u, &pData);
  }
}

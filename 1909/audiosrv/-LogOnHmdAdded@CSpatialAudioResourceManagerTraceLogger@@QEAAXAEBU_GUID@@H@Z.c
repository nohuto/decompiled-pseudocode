/*
 * XREFs of ?LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z @ 0x180125AC8
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180125F60 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogOnHmdAdded(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+A0h] [rbp+18h] BYREF

  v11 = (int)a3;
  if ( (unsigned int)dword_1801B5350 > 4 )
  {
    v5 = a2;
    v7 = 0;
    v6 = 16;
    v8 = &v11;
    v10 = 0;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179CA0, a3, a4, 4u, &v4);
  }
}

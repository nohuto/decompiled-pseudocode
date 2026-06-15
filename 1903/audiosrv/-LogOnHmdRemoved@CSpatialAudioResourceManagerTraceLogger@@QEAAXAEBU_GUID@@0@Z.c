/*
 * XREFs of ?LogOnHmdRemoved@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@0@Z @ 0x180125F90
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180126600 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogOnHmdRemoved(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1801B6350 > 4 )
  {
    v5 = a2;
    v7 = 0;
    v6 = 16;
    v8 = a3;
    v10 = 0;
    v9 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017ACF0, a3, a4, 4u, &v4);
  }
}

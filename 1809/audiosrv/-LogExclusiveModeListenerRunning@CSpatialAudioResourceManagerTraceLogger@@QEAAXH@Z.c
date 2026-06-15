/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180119334
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18011A1B8 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18011A7FC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180009C20 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2)
{
  const CHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1801B1350 > 4 )
  {
    v3 = "Started";
    if ( !a2 )
      v3 = "Shutdown";
    TlgCreateSz(&pDesc, v3);
    TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_180175B3D, v4, v5, 3u, &pData);
  }
}

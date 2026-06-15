/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180125DF4
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x180126BF0 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x180127234 (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1801B6350 > 4 )
  {
    v3 = "Started";
    if ( !a2 )
      v3 = "Shutdown";
    TlgCreateSz(&pDesc, v3);
    TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017AD57, v4, v5, 3u, &pData);
  }
}

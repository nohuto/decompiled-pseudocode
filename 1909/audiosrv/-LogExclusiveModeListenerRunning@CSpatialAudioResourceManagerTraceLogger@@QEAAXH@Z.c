/*
 * XREFs of ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1801259B4
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1801267B8 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x180126DFC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18003FD98 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1801B5350 > 4 )
  {
    v3 = "Started";
    if ( !a2 )
      v3 = "Shutdown";
    TlgCreateSz(&pDesc, v3);
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179D37, v4, v5, 3u, &pData);
  }
}

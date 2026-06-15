/*
 * XREFs of ?LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@HH@Z @ 0x180125E70
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801274B0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerUpdateSessionState(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-9h] BYREF
  const struct _GUID *v5; // [rsp+58h] [rbp+17h]
  __int64 v6; // [rsp+60h] [rbp+1Fh]
  int *v7; // [rsp+68h] [rbp+27h]
  __int64 v8; // [rsp+70h] [rbp+2Fh]
  int *v9; // [rsp+78h] [rbp+37h]
  __int64 v10; // [rsp+80h] [rbp+3Fh]
  int v11; // [rsp+B8h] [rbp+77h] BYREF
  int v12; // [rsp+C0h] [rbp+7Fh] BYREF

  v12 = (int)a4;
  v11 = (int)a3;
  if ( (unsigned int)dword_1801B6350 > 5 )
  {
    v5 = a2;
    v7 = &v11;
    v9 = &v12;
    v6 = 16LL;
    v8 = 4LL;
    v10 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017AD1D, a3, a4, 5u, &v4);
  }
}

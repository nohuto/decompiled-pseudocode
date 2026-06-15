/*
 * XREFs of ?LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendererSelectionMode@@PEBG@Z @ 0x180125928
 * Callers:
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x180126C4C (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CSpatialAudioResourceManagerTraceLogger::LogEndpointRendererSelectionMode(
        __int64 a1,
        int a2,
        const WCHAR *a3)
{
  LPCGUID v3; // r8
  LPCGUID cData; // r9
  TLG_STATUS result; // eax
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1801B5350 > 5 )
  {
    v6 = a2;
    v8 = &v6;
    v9 = 4;
    v10 = 0;
    TlgCreateWsz(&v11, a3);
    return TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179BD3, v3, cData, (UINT32)cData, &pData);
  }
  return result;
}

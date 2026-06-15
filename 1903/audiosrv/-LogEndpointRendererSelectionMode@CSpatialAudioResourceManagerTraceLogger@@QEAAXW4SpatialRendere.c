/*
 * XREFs of ?LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendererSelectionMode@@PEBG@Z @ 0x180125D68
 * Callers:
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x180127084 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1801B6350 > 5 )
  {
    v6 = a2;
    v8 = &v6;
    v9 = 4;
    v10 = 0;
    TlgCreateWsz(&v11, a3);
    return TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017ABF3, v3, cData, (UINT32)cData, &pData);
  }
  return result;
}

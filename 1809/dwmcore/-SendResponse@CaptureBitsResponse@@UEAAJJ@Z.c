/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180071630
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800716C8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  CLegacySurfaceManager *v7; // rcx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+44h] [rbp-14h]

  v9 = 2;
  v10 = 0uLL;
  v11 = 0LL;
  LODWORD(v11) = *((_DWORD *)this + 25);
  HIDWORD(v11) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v10 + 4) = *((_QWORD *)this + 14);
    HIDWORD(v10) = *((_DWORD *)this + 32);
  }
  v4 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 6), (const struct MIL_MESSAGE *)&v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x89u);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v7);
  return v6;
}

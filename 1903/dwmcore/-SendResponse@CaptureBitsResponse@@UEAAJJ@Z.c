/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800CD120
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180029C34 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800CD1B8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2, __int64 a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  CLegacySurfaceManager *v8; // rcx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10 = 2;
  v11 = 0uLL;
  v12 = 0LL;
  LODWORD(v12) = *((_DWORD *)this + 25);
  HIDWORD(v12) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v11 + 4) = *((_QWORD *)this + 14);
    HIDWORD(v11) = *((_DWORD *)this + 32);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 6), (const struct MIL_MESSAGE *)&v10, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x87u, 0LL);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 104LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v8);
  return v7;
}

/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180179CF0
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015D46C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x180179C90 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CB9C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0ppq @ 0x180161108 (McTemplateU0ppq.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10[0] = 17;
  v10[1] = 0;
  v11 = 0LL;
  v12 = 0LL;
  v10[2] = a2;
  if ( a2 >= 0 )
  {
    a3 = *(unsigned int *)(*((_QWORD *)this + 18) + 672LL);
    LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 18) + 672LL);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CConnection ***)this + 6), (const struct MIL_MESSAGE *)v10, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x8Du);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LODWORD(v9) = a2;
    McTemplateU0ppq(
      v6,
      &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 18) + 352LL),
      *((_QWORD *)this + 19),
      v9);
  }
  return v7;
}

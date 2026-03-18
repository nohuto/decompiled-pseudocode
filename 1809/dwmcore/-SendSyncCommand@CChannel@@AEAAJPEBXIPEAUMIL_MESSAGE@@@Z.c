/*
 * XREFs of ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180055F18
 * Callers:
 *     ?SyncDesktopRenderTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z @ 0x180055E20 (-SyncDesktopRenderTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z.c)
 *     ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x180147480 (-SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z.c)
 *     ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@IAEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAI@Z @ 0x180147550 (-SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU-$TMILFlagsEnum@W4FlagsEnum@MilRender.c)
 * Callees:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180055FB0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SendSyncCommand(CChannel *this, void *a2, unsigned int a3, struct MIL_MESSAGE *a4)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // xmm1_8

  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  v6 = CChannel::SendCommand(this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDEu);
  }
  else
  {
    v9 = CChannel::SyncFlush(this);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE1u);
    }
    else if ( a4 )
    {
      v11 = *((_DWORD *)this + 38);
      v12 = *((_QWORD *)this + 18);
      *(_OWORD *)a4 = *((_OWORD *)this + 8);
      *((_QWORD *)a4 + 2) = v12;
      *((_DWORD *)a4 + 6) = v11;
    }
  }
  return v8;
}

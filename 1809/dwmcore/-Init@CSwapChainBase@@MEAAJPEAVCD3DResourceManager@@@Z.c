/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180078830
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800787D0 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180078884 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x18007898C (-SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x18009438C (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  struct CD3DResourceManager *v3; // rdx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx

  CD3DResource::Init(this, a2, 0);
  *((_QWORD *)this + 47) = v3;
  v4 = CSwapChainBase::SetupBackBuffers(this, v3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x38u);
  }
  else
  {
    v7 = CSwapChainBase::SetupDepthBuffer(this);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x39u);
  }
  return v6;
}

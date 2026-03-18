/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E4880
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E4820 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x1800475A4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1800E48D4 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E49E0 (-SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  struct CD3DResourceManager *v3; // rdx
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  CD3DResource::Init(this, a2, 0);
  *((_QWORD *)this + 47) = v3;
  v4 = CSwapChainBase::SetupBackBuffers(this, v3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x36u, 0LL);
  }
  else
  {
    v7 = CSwapChainBase::SetupDepthBuffer(this);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x37u, 0LL);
  }
  return v6;
}

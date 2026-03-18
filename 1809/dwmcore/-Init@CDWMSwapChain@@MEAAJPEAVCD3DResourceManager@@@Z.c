/*
 * XREFs of ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800787D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180078830 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::Init(CDWMSwapChain *this, struct CD3DResourceManager *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx

  v3 = CSwapChainBase::Init(this, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x52u);
  }
  else
  {
    v6 = *((_QWORD *)this + 55);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL))(v6, (char *)this + 464);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x56u);
    }
  }
  return v5;
}

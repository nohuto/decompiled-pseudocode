/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180051AAC
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180051954 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180020968 (-UpdateSwapChainStat@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionS.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800B2BA4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned __int16 *v7; // rax

  if ( *((_DWORD *)this + 14) > 1u && !*((_QWORD *)this + 37) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = v4 + 1;
    if ( v5 > 1 )
    {
      v6 = v5;
      v7 = (unsigned __int16 *)DefaultHeap::Alloc(saturated_mul(v5, 2uLL));
      *((_QWORD *)this + 37) = v7;
      if ( v7 )
      {
        StringCchCopyW(v7, v6, a2);
        CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 1);
      }
    }
  }
}

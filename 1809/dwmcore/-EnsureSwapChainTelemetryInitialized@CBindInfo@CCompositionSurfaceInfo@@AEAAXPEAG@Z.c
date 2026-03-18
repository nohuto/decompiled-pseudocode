/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180097744
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800975F8 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800842DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CCompositionSurfaceInfo::CBindInfo *this,
        size_t *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  SIZE_T v7; // rax
  unsigned __int64 v8; // kr00_8
  unsigned __int16 *v9; // rax

  if ( *((_DWORD *)this + 14) > 1u && !*((_QWORD *)this + 37) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)a2 + v4) );
    v5 = v4 + 1;
    if ( v5 > 1 )
    {
      v6 = v5;
      v8 = v5;
      v7 = 2LL * v5;
      if ( !is_mul_ok(v8, 2uLL) )
        v7 = -1LL;
      if ( !v7 )
        v7 = 1LL;
      v9 = (unsigned __int16 *)HeapAlloc(WPF::g_processHeap, 0, v7);
      *((_QWORD *)this + 37) = v9;
      if ( v9 )
      {
        StringCchCopyW(v9, v6, a2);
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 1);
      }
    }
  }
}

/*
 * XREFs of ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18004B950
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18004B614 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006B2C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  SIZE_T v7; // r8
  LPVOID v8; // rbp
  int v9; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v4 = *(unsigned int *)(a1 + 24);
    v5 = -1;
    v6 = 3 * v4;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
      v5 = 3 * v4;
    v3 = 0;
    if ( v6 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v5 <= *(_DWORD *)(a1 + 4) )
    {
      if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 4 )
      {
        v7 = 4LL * (unsigned int)v4;
        if ( !v7 )
          v7 = 1LL;
        v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
        if ( v8 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 16));
          *(_QWORD *)(a1 + 16) = v8;
          *(_DWORD *)(a1 + 4) = v4;
          goto LABEL_10;
        }
        v9 = -2147024882;
      }
      else
      {
        v9 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, 0x100u);
    }
LABEL_10:
    *(_DWORD *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v3;
}

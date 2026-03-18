/*
 * XREFs of ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18004BE94
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18004B614 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006B2C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWatermarkStack<bool,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LPVOID v7; // rsi
  int v8; // r9d

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
      if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 1 )
      {
        v7 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v4);
        if ( v7 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 16));
          *(_QWORD *)(a1 + 16) = v7;
          *(_DWORD *)(a1 + 4) = v4;
          goto LABEL_10;
        }
        v8 = -2147024882;
      }
      else
      {
        v8 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v8, 0x100u);
    }
LABEL_10:
    *(_DWORD *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v3;
}

/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x1802234DC
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802231D4 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x180225F3C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  int v6; // edi
  SIZE_T v7; // r8
  LPVOID v8; // rbp
  int v9; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 10 )
  {
    v6 = v1 + 1;
    goto LABEL_20;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 24) > 0x40u )
    v3 = *(unsigned int *)(a1 + 24);
  v4 = 0xFFFFFFFFLL;
  v5 = 3 * v3;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    v4 = (unsigned int)v5;
  v6 = 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    if ( (unsigned int)v4 <= *(_DWORD *)(a1 + 4) )
    {
      if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 0x10 )
      {
        v7 = 16LL * (unsigned int)v3;
        if ( !v7 )
          v7 = 1LL;
        v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
        if ( v8 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(a1 + 16));
          *(_QWORD *)(a1 + 16) = v8;
          *(_DWORD *)(a1 + 4) = v3;
          goto LABEL_18;
        }
        v9 = -2147024882;
      }
      else
      {
        v9 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v9, 0x100u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
LABEL_18:
  *(_DWORD *)(a1 + 24) = 0;
LABEL_20:
  *(_DWORD *)(a1 + 8) = v6;
}

/*
 * XREFs of ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x18020405C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::DbgSavePresentInfo(__int64 a1, int a2, char a3, int a4, int a5)
{
  __int64 v7; // rdx
  signed int v8; // ecx
  __int64 v9; // rax

  if ( (a3 & 1) == 0 )
  {
    v7 = 0LL;
    v8 = (*(_DWORD *)(a1 + 736) + 1) % 6u;
    v9 = *(_QWORD *)&g_pComposition;
    *(_DWORD *)(a1 + 736) = v8;
    if ( v9 )
      v7 = *(_QWORD *)(v9 + 368);
    *(_QWORD *)(a1 + 24LL * v8 + 592) = v7;
    *(_DWORD *)(a1 + 24 * (*(int *)(a1 + 736) + 25LL)) = a2;
    *(_DWORD *)(a1 + 24LL * *(int *)(a1 + 736) + 604) = a4;
    *(_DWORD *)(a1 + 24LL * *(int *)(a1 + 736) + 608) = a5;
  }
}

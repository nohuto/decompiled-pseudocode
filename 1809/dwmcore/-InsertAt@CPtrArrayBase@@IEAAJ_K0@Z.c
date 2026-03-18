/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8
 * Callers:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180032028 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18006674C (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800A2C88 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800E4A74 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152390 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801AFF98 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1801B7E8C (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  CPtrArrayBase *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // r15
  SIZE_T v17; // r8
  unsigned __int64 v18; // r13
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  CPtrArrayBase *v21; // [rsp+60h] [rbp+8h]

  v21 = this;
  v5 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  v6 = this;
  if ( (*(_QWORD *)this & 2) != 0 )
    v7 = *v5;
  else
    v7 = *(_QWORD *)this & 1LL;
  if ( a3 > v7 )
  {
    v20 = 42;
LABEL_38:
    v8 = -2147024809;
LABEL_40:
    v19 = v8;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v19, v20);
    return v8;
  }
  v8 = 0;
  if ( (a2 & 3) != 0 )
  {
    v20 = 52;
    goto LABEL_38;
  }
  if ( !v7 )
  {
    *(_QWORD *)this = a2 | 1;
    return v8;
  }
  if ( v7 == 1 )
  {
    v11 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = (unsigned __int64)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    LODWORD(this) = -2147024882;
    if ( !v12 )
      v8 = -2147024882;
    if ( (v8 & 0x80000000) == 0 )
    {
      *(_QWORD *)v12 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v11;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)v6 = v12 | 2;
      return v8;
    }
    v20 = 87;
    goto LABEL_40;
  }
  v10 = v5[1];
  if ( v7 != v10 )
  {
    if ( a3 < v7 )
      memmove_0(&v5[a3 + 3], &v5[a3 + 2], 8 * (v7 - a3));
    v5[a3 + 2] = a2;
    ++*v5;
    return v8;
  }
  v13 = 0LL;
  v14 = (double)(int)v10;
  if ( v10 < 0 )
    v14 = v14 + 1.844674407370955e19;
  v15 = v14 * 1.5;
  this = 0LL;
  if ( v15 >= 9.223372036854776e18 )
  {
    v15 = v15 - 9.223372036854776e18;
    if ( v15 < 9.223372036854776e18 )
      this = (CPtrArrayBase *)0x8000000000000000LL;
  }
  v16 = (unsigned __int64)this + (unsigned int)(int)v15 + 2;
  if ( v16 <= v10 )
  {
    LODWORD(this) = -2147024882;
    v20 = 122;
    v8 = -2147024882;
    v19 = -2147024882;
    goto LABEL_42;
  }
  if ( v16 && 0xFFFFFFFFFFFFFFFFuLL / v16 > 8 )
  {
    v17 = 8 * v16;
    if ( !(8 * v16) )
      v17 = 1LL;
    v13 = (unsigned __int64)HeapAlloc(WPF::g_processHeap, 0, v17);
    if ( !v13 )
      v8 = -2147024882;
  }
  else
  {
    v8 = -2147024809;
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    v20 = 130;
    goto LABEL_40;
  }
  v18 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((void *)(v13 + 16), (const void *)(v18 + 16), 8 * a3);
  *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
  if ( a3 < v7 )
    memcpy_0((void *)(v13 + 8 * (a3 + 3)), (const void *)(v18 + 8 * a3 + 16), 8 * (v7 - a3));
  WPF::ProcessHeapImpl::Free((void *)v18);
  *(_QWORD *)v13 = v7 + 1;
  *(_QWORD *)(v13 + 8) = v16 - 2;
  *(_QWORD *)v21 = v13 | 2;
  return v8;
}

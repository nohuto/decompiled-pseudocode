/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007BAC4
 * Callers:
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800333C8 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x180034680 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180037340 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18005C8C8 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800B9728 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C7C80 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801A9C70 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801F0670 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  double v12; // xmm0_8
  double v13; // xmm0_8
  char *v14; // r13
  int v15; // eax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r12
  unsigned int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-48h]
  CPtrArrayBase *v20; // [rsp+70h] [rbp+8h]
  void *v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = this;
  v5 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v6 = *v5;
  else
    v6 = *(_QWORD *)this & 1LL;
  if ( a3 > v6 )
  {
    v19 = 42;
LABEL_30:
    v18 = -2147024809;
    v7 = -2147024809;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v18, v19, 0LL);
    return v7;
  }
  v7 = 0;
  if ( (a2 & 3) != 0 )
  {
    v19 = 52;
    goto LABEL_30;
  }
  if ( !v6 )
  {
    *(_QWORD *)this = a2 | 1;
    return v7;
  }
  if ( v6 == 1 )
  {
    v10 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = (unsigned __int64)DefaultHeap::Alloc(0x30uLL);
    v7 = -2147024882;
    if ( v11 )
    {
      v7 = 0;
      *(_QWORD *)v11 = 2LL;
      *(_QWORD *)(v11 + 8) = 4LL;
      *(_QWORD *)(v11 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v11 + 8 * a3 + 16) = a2;
      *(_QWORD *)v20 = v11 | 2;
      return v7;
    }
    v19 = 86;
    goto LABEL_35;
  }
  v9 = v5[1];
  if ( v6 != v9 )
  {
    if ( a3 < v6 )
      memmove_0(&v5[a3 + 3], &v5[a3 + 2], 8 * (v6 - a3));
    v5[a3 + 2] = a2;
    ++*v5;
    return v7;
  }
  v21 = 0LL;
  v12 = (double)(int)v9;
  if ( v9 < 0 )
    v12 = v12 + 1.844674407370955e19;
  v13 = v12 * 1.5;
  this = 0LL;
  if ( v13 >= 9.223372036854776e18 )
  {
    v13 = v13 - 9.223372036854776e18;
    if ( v13 < 9.223372036854776e18 )
      this = (CPtrArrayBase *)0x8000000000000000LL;
  }
  v14 = (char *)this + (unsigned int)(int)v13 + 2;
  if ( (unsigned __int64)v14 <= v9 )
  {
    v7 = -2147024882;
    v19 = 121;
LABEL_35:
    v18 = -2147024882;
    goto LABEL_32;
  }
  v15 = HrMalloc(8uLL, (unsigned __int64)this + (unsigned int)(int)v13 + 2, &v21);
  v7 = v15;
  if ( v15 < 0 )
  {
    v18 = v15;
    v19 = 128;
    goto LABEL_32;
  }
  v16 = (unsigned __int64)v21;
  v17 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((char *)v21 + 16, (const void *)(v17 + 16), 8 * a3);
  *(_QWORD *)(v16 + 8 * a3 + 16) = a2;
  if ( a3 < v6 )
    memcpy_0((void *)(v16 + 24 + 8 * a3), (const void *)(v17 + 8 * (a3 + 2)), 8 * (v6 - a3));
  operator delete((void *)v17);
  *(_QWORD *)v16 = v6 + 1;
  *(_QWORD *)(v16 + 8) = v14 - 2;
  *(_QWORD *)v20 = v16 | 2;
  return v7;
}

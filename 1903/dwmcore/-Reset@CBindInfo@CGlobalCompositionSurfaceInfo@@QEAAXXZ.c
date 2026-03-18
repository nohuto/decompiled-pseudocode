/*
 * XREFs of ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18003DE6C
 * Callers:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A720 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18003C534 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18003D430 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?OnNotifyInvalidResource@CGlobalCompositionSurfaceInfo@@EEAAXXZ @ 0x18025D730 (-OnNotifyInvalidResource@CGlobalCompositionSurfaceInfo@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rcx

  if ( *((_BYTE *)this + 180) )
    CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this);
  if ( *((_DWORD *)this + 14) )
  {
    v9 = *((unsigned int *)this + 14);
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD **)(v10 + *((_QWORD *)this + 4));
      (*(void (__fastcall **)(_QWORD *, __int64))(v11[11] + 32LL))(
        v11 + 11,
        (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v10 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 8LL);
  *((_QWORD *)this + 9) = 0LL;
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
  ReleaseInterface<IRenderTargetBitmap>((char *)this + 80);
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((struct _LUID *)this + 15) = g_luidZero;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_DWORD *)this + 29) = 0;
  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 181) = 0;
  *((_BYTE *)this + 152) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 24) + 8LL))(*(_QWORD *)(v3 + 24));
  v5 = v4;
  v6 = 0;
  v7 = *(_DWORD *)(v4 + 728);
  if ( v7 )
  {
    v12 = *(_QWORD *)(v4 + 704);
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8LL * v6);
      if ( *(_QWORD *)this == v13 )
        break;
      if ( ++v6 >= v7 )
        goto LABEL_7;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = *(_DWORD *)(v5 + 728);
    if ( v6 >= v15 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x222u, 0LL);
    }
    else
    {
      v16 = v15 - 1;
      if ( v6 < (unsigned int)v16 )
      {
        *(_QWORD *)(*(_QWORD *)(v5 + 704) + 8LL * v6) = *(_QWORD *)(*(_QWORD *)(v5 + 704) + 8 * v16);
        v15 = *(_DWORD *)(v5 + 728);
      }
      *(_DWORD *)(v5 + 728) = v15 - 1;
    }
  }
LABEL_7:
  v8 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}

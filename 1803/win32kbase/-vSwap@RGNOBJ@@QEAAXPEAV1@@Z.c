/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024040 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0044630 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00C8050 (EngUpdateDeviceSurface.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)a2;
  v8 = v6 == -48;
  v9 = (_QWORD *)(v6 + 48);
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v11 = *(_QWORD *)a2 + 48LL;
  v12 = (_QWORD *)*v9;
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    v13 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v14 = (_QWORD *)v9[1], (_QWORD *)*v14 != v9) )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    v9[1] = v9;
    *v9 = v9;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v15 = (_QWORD *)(v7 + 48);
  if ( v7 != -48 )
  {
    KeEnterCriticalRegion();
    v16 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v15[1] = v15;
    *v15 = v15;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v18 = *(_QWORD *)this;
  *(_QWORD *)this = v7;
  *(_QWORD *)a2 = v18;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
  {
    if ( v12 != v9 )
    {
      v19 = *(_QWORD *)this;
      v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
      if ( *(_QWORD *)this != -48LL )
      {
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v20[2] = v19;
        v20[3] = CleanUpRegion;
        if ( ThreadWin32Thread )
        {
          v22 = *(_QWORD *)(ThreadWin32Thread + 88);
          v23 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v22 + 8) != v23 )
            __fastfail(3u);
          *v20 = v22;
          v20[1] = v23;
          *(_QWORD *)(v22 + 8) = v20;
          *v23 = v20;
        }
        else
        {
          v20[1] = v20;
          *v20 = v20;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( v10 != v11 )
    {
      v24 = *(_QWORD *)a2;
      v25 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)a2 != -48LL )
      {
        KeEnterCriticalRegion();
        v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v25[2] = v24;
        v25[3] = CleanUpRegion;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 88);
          v28 = (_QWORD *)(v26 + 88);
          if ( *(_QWORD **)(v27 + 8) != v28 )
            __fastfail(3u);
          *v25 = v27;
          v25[1] = v28;
          *(_QWORD *)(v27 + 8) = v25;
          *v28 = v25;
        }
        else
        {
          v25[1] = v25;
          *v25 = v25;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}

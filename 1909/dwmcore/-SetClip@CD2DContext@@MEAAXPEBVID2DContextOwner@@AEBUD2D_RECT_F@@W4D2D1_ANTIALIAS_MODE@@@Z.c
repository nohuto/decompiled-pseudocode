/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180057CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z @ 0x180058564 (-QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180058AB0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v9; // rdx
  bool v10; // zf
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  CBatchOptimizer *v16; // rcx
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  int v21; // [rsp+30h] [rbp-28h]
  int v22; // [rsp+34h] [rbp-24h]

  v4 = *((_DWORD *)this + 98);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 492)
    || *((_BYTE *)this + 494)
    || a4 != *((_DWORD *)this + 114)
    || a3->left != *((float *)this + 110)
    || a3->top != *((float *)this + 111)
    || a3->right != *((float *)this + 112)
    || a3->bottom != *((float *)this + 113) )
  {
    v9 = *((_QWORD *)this + 22);
    if ( v9 )
    {
      v16 = (CBatchOptimizer *)*((_QWORD *)this + 23);
      if ( v16 )
      {
        CBatchOptimizer::Flush(v16);
        v9 = *((_QWORD *)this + 22);
      }
      *(_DWORD *)(v9 + 52) = *((_DWORD *)this + 8);
      v17 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = 0LL;
      if ( v17 )
      {
        v18 = *((_DWORD *)this + 98);
        v19 = 0LL;
        if ( v18 )
          v19 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v18 - 1));
        CDrawListEntryBatch::QueueForRender((CDrawListEntryBatch *)v17, *(struct IRenderTarget **)(v19 + 24));
        CD2DContext::EnsureBeginDraw(this);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 120LL))(*((_QWORD *)this + 30), v17);
        CDirtyRegion::Release((CDirtyRegion *)(v17 + 8));
      }
    }
    v10 = *(_BYTE *)(v5 + 48) == 0;
    v11 = (__int128)*a3;
    *(_DWORD *)(v5 + 76) = a4;
    *(_OWORD *)(v5 + 60) = v11;
    if ( !v10 )
    {
      v12 = *(_QWORD *)(v5 + 16);
      v21 = 0;
      v22 = 0;
      v13 = *(_QWORD *)(v12 + 232);
      v20 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 240LL))(v13, &v20);
      v14 = *(_QWORD *)(v12 + 240);
      *(_BYTE *)(v12 + 494) = 0;
      v15 = *(_OWORD *)(v5 + 60);
      *(_DWORD *)(v12 + 456) = a4;
      *(_OWORD *)(v12 + 440) = v15;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, v5 + 60, a4);
    }
    *(_BYTE *)(v5 + 56) = 1;
  }
}

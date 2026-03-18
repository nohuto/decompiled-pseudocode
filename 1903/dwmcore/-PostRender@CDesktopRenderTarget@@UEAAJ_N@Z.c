/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800B9890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AA20 (-Release@CVisual@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800DC640 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A8FAC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801C43E8 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?GetNewContentBounds@CComposeTop@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF620 (-GetNewContentBounds@CComposeTop@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF67C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

__int64 __fastcall CDesktopRenderTarget::PostRender(CDesktopRenderTarget *this, char a2)
{
  __int64 v3; // r8
  CComposeTop *v4; // rbx
  __int64 i; // rbp
  __int64 v6; // rdi
  int v7; // eax
  __int64 j; // r14
  int v9; // eax
  __int64 m; // r14
  void *v11; // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  __int64 v14; // r13
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v16; // r15
  struct _LIST_ENTRY *k; // rbx
  CVisual *v18; // rbx
  _BYTE v19[16]; // [rsp+20h] [rbp-48h] BYREF

  *((_BYTE *)this + 194) = 0;
  if ( !a2 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v3) + 858LL) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= *((_DWORD *)this + 8) )
          goto LABEL_5;
      }
      *((_BYTE *)this + 194) = 1;
    }
  }
LABEL_5:
  v4 = (CComposeTop *)*((_QWORD *)this + 25);
  if ( v4 && *((_QWORD *)v4 + 1) )
  {
    if ( a2 && (int)CComposeTop::GetNewContentBounds(*((_QWORD *)this + 25), v19) >= 0 )
      CComposeTop::NewContentRendered(v4);
    v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v4 + 1);
    if ( v13 )
      (**v13)(v13, 1LL);
    *((_QWORD *)v4 + 1) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    v7 = *(_DWORD *)(v6 + 728) - 1;
    for ( j = v7; j >= 0; --j )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v6 + 704) + 8 * j);
      *(_WORD *)(v14 + 945) = 0;
      RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v14);
      v16 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        for ( k = RenderPassInfoList->Flink; k != v16; k = k->Flink )
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&k[-6].Blink);
      }
      CVisual::Release((CVisual *)v14);
    }
    v9 = *(_DWORD *)(v6 + 800) - 1;
    for ( m = v9; m >= 0; --m )
    {
      v18 = *(CVisual **)(*(_QWORD *)(v6 + 776) + 8 * m);
      CVisual::PurgeOldRenderPassInfos(v18);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    *(_DWORD *)(v6 + 728) = 0;
    v11 = *(void **)(v6 + 704);
    if ( v11 != *(void **)(v6 + 712) )
    {
      operator delete(v11);
      *(_QWORD *)(v6 + 704) = *(_QWORD *)(v6 + 712);
      *(_DWORD *)(v6 + 724) = *(_DWORD *)(v6 + 720);
    }
    *(_DWORD *)(v6 + 800) = 0;
  }
  return 0LL;
}

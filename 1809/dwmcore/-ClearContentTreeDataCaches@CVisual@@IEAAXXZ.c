/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180056380 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z @ 0x1800689F8 (--0CReentrancyCheck@CDrawListCacheSet@@QEAA@PEBQEAURenderTargetEntry@1@PEAPEAU21@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int i; // eax
  struct CDrawListCacheSet::RenderTargetEntry ****v8; // rsi
  struct CDrawListCacheSet::RenderTargetEntry ***v9; // rsi
  struct CDrawListCacheSet::RenderTargetEntry **j; // rdi
  struct CDrawListCacheSet::RenderTargetEntry *v11; // rbx
  struct CDrawListCacheSet::RenderTargetEntry *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CDrawListCacheSet::RenderTargetEntry *v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 57);
  if ( v1 == (_QWORD *)-1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *((_QWORD *)this + 57) = -1LL;
  if ( v1 )
  {
    v4 = v1;
    do
    {
      if ( v4[2] )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(v4 + 3);
      v4 = (_QWORD *)v4[10];
    }
    while ( v4 );
  }
  *((_QWORD *)this + 57) = v1;
  v3 = *((_QWORD *)this + 28);
  if ( *(int *)v3 < 0 )
  {
    v5 = *(unsigned int *)(v3 + 4);
    v6 = (_BYTE *)(v3 + 8);
    for ( i = 0; i < (unsigned int)v5; ++v6 )
    {
      if ( *v6 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v5 )
      v8 = 0LL;
    else
      v8 = (struct CDrawListCacheSet::RenderTargetEntry ****)(v3 + v5 + 15 + 8LL * i - (((_BYTE)v5 + 15) & 7));
    v9 = *v8;
    if ( v9 )
    {
      for ( j = *v9;
            j != (struct CDrawListCacheSet::RenderTargetEntry **)v9;
            j = (struct CDrawListCacheSet::RenderTargetEntry **)*j )
      {
        CDrawListCacheSet::CReentrancyCheck::CReentrancyCheck(v12, j - 12, &v14);
        v11 = v14;
        if ( v14 )
        {
          do
          {
            if ( *((_QWORD *)v11 + 2) )
              detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)v11 + 3);
            v11 = (struct CDrawListCacheSet::RenderTargetEntry *)*((_QWORD *)v11 + 10);
          }
          while ( v11 );
          v14 = 0LL;
        }
        *(_QWORD *)v12[0] = v12[1];
      }
    }
  }
}

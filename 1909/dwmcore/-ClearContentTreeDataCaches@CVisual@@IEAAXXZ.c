/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007B730 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B820 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800B7E50 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x1800C0B08 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  _QWORD *j; // rbx

  CDrawListCacheSet::Invalidate((CVisual *)((char *)this + 456));
  v2 = *((_QWORD *)this + 28);
  if ( *(int *)v2 < 0 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = (_BYTE *)(v2 + 8);
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v3 )
      v6 = 0LL;
    else
      v6 = (_QWORD ***)(v3 + 15 + v2 + 8LL * i - (((_BYTE)v3 + 15) & 7));
    v7 = *v6;
    if ( v7 )
    {
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
        CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(j - 12));
    }
  }
}

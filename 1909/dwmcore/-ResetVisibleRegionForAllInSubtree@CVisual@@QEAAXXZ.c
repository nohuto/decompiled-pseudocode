/*
 * XREFs of ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800671F0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1801C2E3C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 */

void __fastcall CVisual::ResetVisibleRegionForAllInSubtree(CVisual *this)
{
  __int64 *v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  CVisual *v5; // rax
  CVisual *v6; // rdi

  v1 = (__int64 *)((char *)this + 72);
  v2 = *((_QWORD *)this + 9);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v4 = (unsigned int)v2;
    do
    {
      v5 = (CVisual *)CPtrArrayBase::operator[](v1, v3);
      v6 = v5;
      if ( v5 )
      {
        CVisual::ResetVisibleRegionForAllInSubtree(v5);
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 312LL))(v6) )
          CVisual::ResetVisibleRegionForAll(v6);
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}

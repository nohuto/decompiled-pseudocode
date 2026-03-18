/*
 * XREFs of ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1801B8680
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801B658C (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18005D2D4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetRenderPassInfoList(CVisual *this, struct _LIST_ENTRY *a2)
{
  __int64 *v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  unsigned int Slot; // eax
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int i; // eax

  v2 = (__int64 *)((char *)this + 224);
  v3 = 0LL;
  v5 = (unsigned int *)*v2;
  v6 = *(_DWORD *)*v2;
  if ( a2 )
  {
    if ( (v6 & 0x40000000) != 0 )
    {
      v11 = v5[1];
      v12 = v5 + 2;
      for ( i = 0; i < (unsigned int)v11; ++v12 )
      {
        if ( *v12 == 2 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v11 )
        v3 = (_QWORD *)((char *)v5 + v11 + 8LL * i - (((_BYTE)v11 + 15) & 7) + 15);
      *v3 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 2) = a2;
    }
  }
  else if ( (v6 & 0x40000000) != 0 )
  {
    v7 = *v2;
    *v5 = v6 & 0xBFFFFFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 2);
    if ( Slot < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(Slot + v9 + 8) = v10;
  }
}

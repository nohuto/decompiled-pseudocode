/*
 * XREFs of ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180004548
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18005D2D4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetCachedWindowBackgroundTreatment(CVisual *this, struct CCachedWindowBackgroundTreatment *a2)
{
  unsigned int **v2; // rcx
  _QWORD *v3; // r11
  unsigned int *v5; // r10
  unsigned int v6; // eax
  unsigned int *v7; // rcx
  unsigned int Slot; // eax
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  unsigned int i; // eax

  v2 = (unsigned int **)((char *)this + 224);
  v3 = 0LL;
  v5 = *v2;
  v6 = **v2;
  if ( a2 )
  {
    if ( (v6 & 0x80000) != 0 )
    {
      v11 = v5[1];
      v12 = v5 + 2;
      for ( i = 0; i < (unsigned int)v11; ++v12 )
      {
        if ( *v12 == 13 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v11 )
        v3 = (_QWORD *)((char *)v5 + v11 + 8LL * i - (((_BYTE)v11 + 15) & 7) + 15);
      *v3 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 13LL) = a2;
    }
  }
  else if ( (v6 & 0x80000) != 0 )
  {
    v7 = *v2;
    *v5 = v6 & 0xFFF7FFFF;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v7, 13LL);
    if ( Slot < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(Slot + v9 + 8) = v10;
  }
}

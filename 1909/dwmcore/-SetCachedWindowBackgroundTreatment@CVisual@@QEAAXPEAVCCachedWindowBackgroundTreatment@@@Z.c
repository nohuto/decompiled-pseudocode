/*
 * XREFs of ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1800121A8
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180011614 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x18007A18C (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetCachedWindowBackgroundTreatment(CVisual *this, struct CCachedWindowBackgroundTreatment *a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  int v5; // eax
  unsigned int Slot; // eax
  char v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  unsigned int i; // eax

  v2 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v3 & 0x80000;
  if ( a2 )
  {
    if ( v5 )
    {
      v9 = (unsigned int)v3[1];
      v10 = v3 + 2;
      for ( i = 0; i < (unsigned int)v9; ++v10 )
      {
        if ( *v10 == 13 )
          break;
        ++i;
      }
      if ( i < (unsigned int)v9 )
        v2 = (_QWORD *)((char *)v3 + 8LL * i - (((_BYTE)v9 + 15) & 7) + v9 + 15);
      *v2 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char *)this + 224, 13LL) = a2;
    }
  }
  else if ( v5 )
  {
    *v3 &= ~0x80000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v3, 13LL);
    if ( Slot < *(_DWORD *)(v8 + 4) )
      *(_BYTE *)(Slot + v8 + 8) = v7;
  }
}

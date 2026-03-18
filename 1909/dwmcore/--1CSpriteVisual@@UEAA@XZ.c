/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x18007B004
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18007B0A0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800B8008 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800D7650 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  CDropShadow *DropShadow; // rbx
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10

  *(_QWORD *)this = &CSpriteVisual::`vftable';
  if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    CDropShadow::RemoveVisualFromCache(DropShadow, this);
    CResource::UnRegisterNotifierInternal(this, DropShadow);
    v3 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v3 & 0x8000) != 0 )
    {
      v4 = *((_QWORD *)this + 28);
      *v3 &= ~0x8000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 17LL);
      if ( Slot < *(_DWORD *)(v6 + 4) )
        *(_BYTE *)(Slot + v6 + 8) = 0;
    }
  }
  CVisual::~CVisual(this);
}

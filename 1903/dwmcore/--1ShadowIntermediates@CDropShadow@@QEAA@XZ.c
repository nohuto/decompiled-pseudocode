/*
 * XREFs of ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800DBA18
 * Callers:
 *     ?clear@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x1800DB9D0 (-clear@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800DBA58 (--1CDropShadow@@UEAA@XZ.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801CABF0 (-erase@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(struct CResource **this)
{
  CResource *v2; // rcx
  struct CResource *v3; // rcx
  struct CResource *v4; // rcx

  v2 = *this;
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, this[1]);
  v3 = this[3];
  if ( v3 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = this[2];
  if ( v4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
}

/*
 * XREFs of ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800E40C8
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E35E0 (--1CDropShadow@@UEAA@XZ.c)
 *     ?clear@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x1800E4080 (-clear@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180194D68 (-erase@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(CDropShadow::ShadowIntermediates *this)
{
  CResource *v2; // rcx

  v2 = *(CResource **)this;
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, *((struct CResource **)this + 1));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
}

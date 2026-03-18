/*
 * XREFs of ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801C8954
 * Callers:
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x1800D9EE4 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801C8CA0 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801C8EB0 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C90F4 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::DestroyIntermediates(CDropShadow::ShadowIntermediates *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a2 )
  {
    v3 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}

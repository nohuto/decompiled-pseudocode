/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x1800D9EE4
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000FD20 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x1800D9E24 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801C89A4 (-EnsureMask@CDropShadow@@AEAAJXZ.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x1801C8CD0 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801C8954 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::SetMask(
        CDropShadow::ShadowIntermediates *this,
        struct CDropShadow *a2,
        struct CSpriteVisualContent *a3)
{
  struct CResource *v5; // rdx
  unsigned int v7; // edi
  CResource *v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx

  v5 = (struct CResource *)*((_QWORD *)this + 1);
  if ( a3 != v5 )
  {
    v9 = *(CResource **)this;
    if ( v9 )
    {
      CResource::UnRegisterNotifierInternal(v9, v5);
      *((_QWORD *)this + 1) = 0LL;
    }
    v10 = CResource::RegisterNotifier(a2, a3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x293u, 0LL);
      return v7;
    }
    *((_QWORD *)this + 1) = a3;
    CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
  }
  *(_QWORD *)this = a2;
  return 0;
}

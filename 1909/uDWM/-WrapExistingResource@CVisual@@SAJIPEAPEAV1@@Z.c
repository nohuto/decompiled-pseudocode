/*
 * XREFs of ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x1800281AC
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180027B80 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180040488 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180091AA0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800B4604 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InitializeFromExistingResource@CVisual@@MEAAJI@Z @ 0x18000F620 (-InitializeFromExistingResource@CVisual@@MEAAJI@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180019DE0 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::WrapExistingResource(unsigned int a1, struct CVisual **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *v9; // [rsp+28h] [rbp-10h]

  if ( a2 )
  {
    v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      240LL);
    if ( v4 )
      v5 = CVisual::CVisual(v4);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = CVisual::InitializeFromExistingResource(v5, a1);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3Eu, v9);
      }
      else
      {
        *a2 = v5;
        v5 = 0LL;
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Cu, v9);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x38u, v9);
  }
  return v7;
}

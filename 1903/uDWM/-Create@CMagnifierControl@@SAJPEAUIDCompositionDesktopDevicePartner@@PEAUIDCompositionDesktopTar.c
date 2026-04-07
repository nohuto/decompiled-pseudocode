/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180044064
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180043EC4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18004410C (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ??0CMagnifierControl@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2@Z @ 0x180044358 (--0CMagnifierControl@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTarget.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierControl::Create(
        struct IDCompositionDesktopDevicePartner *a1,
        struct IDCompositionDesktopTargetPartner *a2,
        struct CVisual *a3,
        struct CVisual *a4,
        struct CMagnifierControl **a5)
{
  CMagnifierControl *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *v14; // [rsp+28h] [rbp-10h]

  v9 = (CMagnifierControl *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              208LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CMagnifierControl::CMagnifierControl(v9, a1, a2, a3, a4);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = CMagnifierControl::Initialize((CMagnifierControl *)v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6Au, v14);
    }
    else
    {
      *a5 = (struct CMagnifierControl *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x68u, v14);
  }
  return v12;
}

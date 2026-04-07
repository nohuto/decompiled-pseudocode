/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180045220
 * Callers:
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18004519C (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@@Z @ 0x1800452D0 (--0CFullScreenMagnifier@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTar.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004C020 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(
        struct IDCompositionDesktopDevicePartner *a1,
        struct IDCompositionDesktopTargetPartner *a2,
        struct CVisual *a3,
        struct CFullScreenMagnifier **a4)
{
  CFullScreenMagnifier *v8; // rax
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rbx
  void *v12; // [rsp+28h] [rbp-10h]

  v8 = (CFullScreenMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 272LL);
  v9 = 0;
  if ( v8 )
    v10 = (volatile signed __int32 *)CFullScreenMagnifier::CFullScreenMagnifier(v8, a1, a2, a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    CFullScreenMagnifier::UpdateSettings((CFullScreenMagnifier *)v10, 1.0, 0.0, 0.0);
    *a4 = (struct CFullScreenMagnifier *)v10;
    _InterlockedIncrement(v10 + 2);
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x67u, v12);
  }
  return v9;
}

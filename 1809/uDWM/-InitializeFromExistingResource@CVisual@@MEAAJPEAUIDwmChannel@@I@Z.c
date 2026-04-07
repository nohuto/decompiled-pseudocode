/*
 * XREFs of ?InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180021FC0
 * Callers:
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021F00 (-WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021FF4 (-WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18003B220 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromExistingResource(
        struct CResource **this,
        struct IDwmChannel *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CResource::WrapExistingResource(a2, a3, this + 2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x58u);
  return v4;
}

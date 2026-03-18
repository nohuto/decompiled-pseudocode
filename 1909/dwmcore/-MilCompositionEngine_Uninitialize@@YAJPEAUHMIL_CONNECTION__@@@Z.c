/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801558A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18016A1E8 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( this )
  {
    CConnection::Disconnect(this);
    CDirtyRegion::Release(this);
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x80070057, 0x43u, 0LL);
  }
  return v1;
}

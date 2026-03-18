/*
 * XREFs of ?ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C017E000
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseClipMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00869B0 (-ReleaseAllReferences@CBaseClipMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CProxyGeometryClipMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[10]);
  v4 = this[11];
  this[10] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[11] = 0LL;
  DirectComposition::CBaseClipMarshaler::ReleaseAllReferences((DirectComposition::CBaseClipMarshaler *)this, a2);
}

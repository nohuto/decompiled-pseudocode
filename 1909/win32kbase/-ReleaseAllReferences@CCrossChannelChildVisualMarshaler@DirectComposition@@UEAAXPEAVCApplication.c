/*
 * XREFs of ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0004B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CE24 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BD70 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  if ( *((_DWORD *)this + 88) )
  {
    DirectComposition::CConnection::ReleaseSystemResource(*((_QWORD *)a2 + 5), *((unsigned int *)this + 88));
    *((_DWORD *)this + 88) = 0;
  }
}

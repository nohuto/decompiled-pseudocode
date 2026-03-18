/*
 * XREFs of ?GetImpl@BamoPeer@dataprovider_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ @ 0x1800E5BC0
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800619F0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BaseBamoPeerImpl *__fastcall dataprovider_AutoBamos::BamoPeer::GetImpl(
        dataprovider_AutoBamos::BamoPeer *this)
{
  return (dataprovider_AutoBamos::BamoPeer *)((char *)this + 8);
}

/*
 * XREFs of ?GetImpl@BamoPeer@dataprovider_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ @ 0x1800DA6C0
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E20E0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BaseBamoPeerImpl *__fastcall dataprovider_AutoBamos::BamoPeer::GetImpl(
        dataprovider_AutoBamos::BamoPeer *this)
{
  return (dataprovider_AutoBamos::BamoPeer *)((char *)this + 8);
}

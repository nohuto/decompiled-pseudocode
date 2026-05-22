/*
 * XREFs of ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18009B578
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009C3A0 (-Thunk_Materialize_BamoDataProviderProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x180011DA0 (-GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ.c)
 *     ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180099ED4 (-CreateDataProviderProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@datapr.c)
 */

void __fastcall __noreturn BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataProviderProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(this);
  BamoImpl::CreateDataProviderProxy(Connection, v2, (struct dataprovider_AutoBamos::BamoPeer *)&v4, v3);
}

/*
 * XREFs of ?Materialize_BamoHeatGripServiceProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180016E4C
 * Callers:
 *     ?Thunk_Materialize_BamoHeatGripServiceProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180018580 (-Thunk_Materialize_BamoHeatGripServiceProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerIm.c)
 * Callees:
 *     ?GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ @ 0x180011DA0 (-GetConnection@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBaseBamoConnectionImpl@23@XZ.c)
 *     ?CreateHeatGripServiceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800163F8 (-CreateHeatGripServiceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISM.c)
 */

void __fastcall __noreturn BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoHeatGripServiceProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BaseBamoPeerImpl::GetConnection(this);
  BamoImpl::CreateHeatGripServiceProxy(Connection, v2, (struct ISMBamos_AutoBamos::BamoPeer *)&v4, v3);
}

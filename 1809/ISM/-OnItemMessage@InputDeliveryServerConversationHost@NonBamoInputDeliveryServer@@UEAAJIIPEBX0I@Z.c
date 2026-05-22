/*
 * XREFs of ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x1800D3D30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::OnItemMessage(
        NonBamoInputDeliveryServer **this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        struct InputDeliveryServerMessage *a5,
        unsigned int a6)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a6 != 64 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.h",
      a4);
    JUMPOUT(0x1800D3D63LL);
  }
  return NonBamoInputDeliveryServer::OnAppThreadMessage(this[2], a5);
}

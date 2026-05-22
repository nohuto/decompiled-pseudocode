/*
 * XREFs of ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x180019038
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x180018D38 (--$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliverySe.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonBamoInputDeliveryServer::Create(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct IInputDeliveryServer **a4)
{
  __int64 v5; // rcx
  struct IInputDeliveryServer *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v10 = a1;
  AcquireSRWLockExclusive(&NonBamoInputDeliveryServer::s_initLock);
  v6 = NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer;
  if ( !NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
           v5,
           &v10,
           &v11,
           &v12);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v7,
        -2);
      JUMPOUT(0x180047FB6LL);
    }
    v6 = NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer;
  }
  *a4 = v6;
  ReleaseSRWLockExclusive(&NonBamoInputDeliveryServer::s_initLock);
  return 0LL;
}

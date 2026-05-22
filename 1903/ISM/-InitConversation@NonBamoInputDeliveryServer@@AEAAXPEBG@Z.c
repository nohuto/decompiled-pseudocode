/*
 * XREFs of ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18001ED08
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18001EC10 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@$$QEAPEAV4@@Z @ 0x18001EDF0 (--$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NonBamoInputDeliveryServer::InitConversation(
        NonBamoInputDeliveryServer *this,
        const unsigned __int16 *a2)
{
  char *v2; // rsi
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, const unsigned __int16 *, _QWORD, __int64 *); // rbp
  int v9; // eax
  int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  NonBamoInputDeliveryServer *v14; // [rsp+90h] [rbp+8h] BYREF

  v2 = (char *)this + 24;
  v14 = this;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer *>(
         v2,
         &v14);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5,
      v10);
    __debugbreak();
  }
  v11 = 0LL;
  v6 = *((_QWORD *)this + 6);
  v7 = *((_QWORD *)this + 8);
  v12 = 1;
  v8 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, __int64 *))(*(_QWORD *)v6 + 280LL);
  if ( v7 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = v8(v6, a2, *((_QWORD *)this + 7), &v11);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      3);
    JUMPOUT(0x18004931ELL);
  }
}

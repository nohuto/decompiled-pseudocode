/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180066AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DE7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?erase@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180066524 (-erase@-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 */

__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  InputSiteElementProxy **i; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  for ( i = (InputSiteElementProxy **)*((_QWORD *)InputSiteManager + 10);
        i != *((InputSiteElementProxy ***)InputSiteManager + 11) && *i != this;
        ++i )
  {
    ;
  }
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::erase((__int64)InputSiteManager + 80, &v5, (__int64)i);
  return 0LL;
}

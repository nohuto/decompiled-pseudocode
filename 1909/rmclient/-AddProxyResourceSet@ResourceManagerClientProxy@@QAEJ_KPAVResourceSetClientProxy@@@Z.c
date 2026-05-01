/*
 * XREFs of ?AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z @ 0x10014140
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ??$emplace@AA_KAAPAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QAE?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@_N@1@AA_KAAPAVResourceSetClientProxy@@@Z @ 0x100139CC (--$emplace@AA_KAAPAVResourceSetClientProxy@@@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientPr.c)
 */

int __thiscall ResourceManagerClientProxy::AddProxyResourceSet(
        ResourceManagerClientProxy *this,
        unsigned __int64 a2,
        struct ResourceSetClientProxy *a3)
{
  int v3; // esi
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = 0;
  if ( !a3 )
    return -2147024809;
  if ( !*(_BYTE *)(utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::emplace<unsigned __int64 &,ResourceSetClientProxy * &>(
                     (int)v5,
                     &a2,
                     &a3)
                 + 4) )
    return -2147024882;
  return v3;
}

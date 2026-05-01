/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180011C60
 * Callers:
 *     ??$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@_N@1@AEA_KAEAPEAVResourceSetClientProxy@@@Z @ 0x1800105C8 (--$emplace@AEA_KAEAPEAVResourceSetClientProxy@@@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClie.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800099DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180011D48 (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_t.c)
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x180011E9C (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 */

__int64 __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *Block)
{
  __int64 *v5; // rdi
  unsigned __int64 v9; // r9
  _QWORD *inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v5 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v9 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                                 * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) >> 33))) >> 33);
    v5[2] = v9;
    if ( (unsigned __int8)utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FindKey(
                            a1,
                            a4,
                            (int)v5 + 24,
                            v9,
                            (__int64)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v5);
    }
    else
    {
      inserted = (_QWORD *)utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InsertNode(
                             a1,
                             (unsigned int)&Block,
                             (_DWORD)Block,
                             (_DWORD)v5,
                             v5[2]);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}

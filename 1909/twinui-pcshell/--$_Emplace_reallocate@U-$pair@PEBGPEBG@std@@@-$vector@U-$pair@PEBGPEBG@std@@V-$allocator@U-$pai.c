/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180181FCC
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180186328 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18018648C (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXQEAU?$pair@PEBGPEBG@2@_K1@Z @ 0x18018682C (-_Change_array@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXQ.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        char **a1,
        char *a2,
        _OWORD *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // r10
  unsigned __int64 v15; // r14
  char *v16; // rcx
  char *v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 result; // rax
  char *v22; // [rsp+68h] [rbp+10h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v22 = v13;
  try
  {
    v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)&v13[v15] = *a3;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v14 - v17;
        do
        {
          *(_OWORD *)&v17[v18] = *(_OWORD *)v17;
          v17 += 16;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v19 = v14 - v17;
        do
        {
          *(_OWORD *)&v17[v19] = *(_OWORD *)v17;
          v17 += 16;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      if ( v4 != v16 )
      {
        v20 = &v14[v15 + 16] - v4;
        do
        {
          *(_OWORD *)&v4[v20] = *(_OWORD *)v4;
          v4 += 16;
        }
        while ( v4 != v16 );
      }
    }
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Change_array(a1, v14, v8, v11, -2LL);
    result = (unsigned __int64)&(*a1)[v15];
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}

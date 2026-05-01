/*
 * XREFs of ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@ABEXU?$integral_constant@_N$0A@@1@AB_KAAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@1@2AAI@Z @ 0x1001394A
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x10014824 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z @ 0x10014C71 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z.c)
 * Callees:
 *     ??R?$equal_to@_K@utl@@QBE_NAB_K0@Z @ 0x10013BFB (--R-$equal_to@_K@utl@@QBE_NAB_K0@Z.c)
 *     ?_HashUint@utl@@YGI_K@Z @ 0x10014FAD (-_HashUint@utl@@YGI_K@Z.c)
 */

int *__thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
        _DWORD *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int *a6)
{
  _DWORD *v6; // edi
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  int *result; // eax
  unsigned __int64 v14; // [esp-4h] [ebp-14h]
  _DWORD *v15; // [esp+Ch] [ebp-4h]

  v6 = this;
  if ( this[2] )
  {
    LODWORD(v14) = *(_DWORD *)(a3 + 4);
    v8 = utl::_HashUint(*(utl **)a3, v14);
    v9 = v8 & ((8 << *((_BYTE *)v6 + 16)) - 1);
    v10 = *(_DWORD **)(v7 + 8 * v9);
    if ( v10 )
    {
      v11 = **(_DWORD ***)(v7 + 8 * v9 + 4);
      v15 = v11;
      while ( v10 != v11 )
      {
        if ( v10[2] >= v8 )
        {
          if ( v10[2] > v8 )
            break;
          if ( (unsigned __int8)utl::equal_to<unsigned __int64>::operator()(a3, v10 + 4) )
          {
            v12 = 1;
            *a4 = v10;
            v6 = (_DWORD *)*v10;
            goto LABEL_11;
          }
          v11 = v15;
        }
        v10 = (_DWORD *)*v10;
      }
    }
  }
  v12 = 0;
  *a4 = v6;
LABEL_11:
  *a5 = v6;
  result = a6;
  *a6 = v12;
  return result;
}

/*
 * XREFs of ?erase@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QAE?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@0@Z @ 0x100151A1
 * Callers:
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z @ 0x10014C71 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z.c)
 * Callees:
 *     ??3@YAXPAXABUnothrow_t@std@@@Z @ 0x1000D01C (--3@YAXPAXABUnothrow_t@std@@@Z.c)
 */

void ***__thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::erase(
        int this,
        void ***a2,
        void **Block,
        void **a4)
{
  void **v4; // edx
  int v6; // esi
  void **v7; // eax
  void **v8; // edx
  _DWORD *v9; // ecx
  int v10; // ebx
  int v11; // edx
  void *v12; // ecx
  void ***result; // eax

  v4 = a4;
  v6 = (8 << *(_BYTE *)(this + 16)) - 1;
  while ( 1 )
  {
    v7 = Block;
    if ( Block == v4 )
      break;
    Block = (void **)*Block;
    v8 = (void **)v7[1];
    v9 = *v7;
    *v8 = *v7;
    v9[1] = v8;
    v10 = *(_DWORD *)(this + 8);
    v11 = v6 & (unsigned int)v7[2];
    if ( *(void ***)(v10 + 8 * v11) == v7 )
    {
      if ( *(void ***)(v10 + 8 * v11 + 4) == v7 )
      {
        *(_DWORD *)(v10 + 8 * v11 + 4) = 0;
        v12 = 0;
      }
      else
      {
        v12 = *v7;
      }
      *(_DWORD *)(v10 + 8 * v11) = v12;
    }
    else if ( *(void ***)(v10 + 8 * v11 + 4) == v7 )
    {
      *(_DWORD *)(v10 + 8 * v11 + 4) = v7[1];
    }
    operator delete(v7);
    --*(_DWORD *)(this + 12);
    v4 = a4;
  }
  result = a2;
  *a2 = a4;
  return result;
}

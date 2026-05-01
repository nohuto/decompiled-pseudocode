/*
 * XREFs of ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE_NE@Z @ 0x100150AB
 * Callers:
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAE?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@PAU?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@0I@Z @ 0x10015030 (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal.c)
 * Callees:
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ??3@YAXPAXABUnothrow_t@std@@@Z @ 0x1000D01C (--3@YAXPAXABUnothrow_t@std@@@Z.c)
 *     ?_InitBuckets@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AAEXXZ @ 0x10015005 (-_InitBuckets@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equa.c)
 */

char __thiscall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_Rehash(
        void *this,
        unsigned __int8 a2)
{
  int v2; // esi
  void *v3; // edi
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  _DWORD *v12; // [esp+4h] [ebp-1Ch]
  char v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  _DWORD *v16; // [esp+1Ch] [ebp-4h]

  v2 = (int)this;
  v13 = 0;
  if ( a2 <= 0x19u )
  {
    v3 = (unsigned int)(8 << a2) > 0x1FFFFFFF ? 0 : operator new(8 * (8 << a2));
    if ( v3 )
    {
      v13 = 1;
      if ( *(_DWORD *)(v2 + 8) )
        operator delete(*(void **)(v2 + 8));
      *(_DWORD *)(v2 + 8) = v3;
      *(_BYTE *)(v2 + 16) = a2;
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InitBuckets(v2);
      v4 = *(_DWORD **)v2;
      v5 = (8 << *(_BYTE *)(v2 + 16)) - 1;
      while ( 1 )
      {
        v12 = v4;
        if ( v4 == (_DWORD *)v2 )
          break;
        v6 = *(_DWORD *)(v2 + 8);
        v7 = v4;
        v4 = (_DWORD *)*v4;
        v2 = (int)this;
        v16 = v7;
        v8 = v5 & v7[2];
        v14 = v6;
        if ( *(_DWORD *)(v6 + 8 * v8 + 4) )
        {
          v9 = **(_DWORD ***)(v6 + 8 * v8 + 4);
          if ( v9 != v7 )
          {
            v10 = (_DWORD *)v4[1];
            *(_DWORD *)v16[1] = v4;
            v4[1] = v16[1];
            v16[1] = v9[1];
            *(_DWORD *)v9[1] = v16;
            v2 = (int)this;
            *v10 = v9;
            v9[1] = v10;
          }
          v6 = v14;
        }
        else
        {
          *(_DWORD *)(v6 + 8 * v8) = v7;
        }
        *(_DWORD *)(v6 + 8 * v8 + 4) = v12;
      }
    }
  }
  return v13;
}

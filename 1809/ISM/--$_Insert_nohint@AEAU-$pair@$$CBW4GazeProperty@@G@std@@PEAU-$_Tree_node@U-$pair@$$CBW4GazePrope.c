/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBW4GazeProperty@@G@std@@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4GazeProperty@@G@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@@Z @ 0x1800C1368
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C0870 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKW4InputType@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKW4InputType@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@1@AEAU?$pair@$$CBKW4InputType@@@1@1@Z @ 0x18004A16C (--$_Insert_at@AEAU-$pair@$$CBKW4InputType@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKW4InputType@@@std.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Insert_nohint<std::pair<enum GazeProperty const,unsigned short> &,std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 *v9; // r9
  char v10; // r10
  int v11; // r8d
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = (__int64 *)(*a1)[1];
  v9 = *a1;
  v10 = 1;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v11 = *a4;
    do
    {
      v9 = v8;
      v10 = v11 < *((_DWORD *)v8 + 7);
      if ( v11 >= *((_DWORD *)v8 + 7) )
        v8 = (__int64 *)v8[2];
      else
        v8 = (__int64 *)*v8;
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  try
  {
    v12 = v9;
    if ( v10 )
    {
      if ( v9 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Insert_at<std::pair<unsigned long const,enum InputType> &,std::_Tree_node<std::pair<unsigned long const,enum InputType>,void *> *>(
                           a1,
                           &v19,
                           1,
                           v9,
                           v18,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v12 = (__int64 *)v9[2];
      }
      else
      {
        v15 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v16 = (__int64 *)v9[1];
          if ( !*((_BYTE *)v16 + 25) )
          {
            v17 = v9;
            do
            {
              if ( v17 != (__int64 *)*v16 )
                break;
              v12 = v16;
              v16 = (__int64 *)v16[1];
              v17 = v12;
            }
            while ( !*((_BYTE *)v16 + 25) );
          }
          if ( !*((_BYTE *)v12 + 25) )
            v12 = v16;
        }
        else
        {
          do
          {
            v12 = v15;
            v15 = (__int64 *)v15[2];
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v12 + 7) >= *a4 )
    {
      operator delete(a5, (const struct std::nothrow_t *)0x28);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Insert_at<std::pair<unsigned long const,enum InputType> &,std::_Tree_node<std::pair<unsigned long const,enum InputType>,void *> *>(
                         a1,
                         &v19,
                         v10,
                         v9,
                         v18,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::allocator<std::_List_node<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>,void *>>::deallocate(
      v13,
      a5);
    throw;
  }
  return result;
}

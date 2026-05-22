/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x1800B6D7C
 * Callers:
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AFB28 (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@1@Z @ 0x180093BA0 (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Insert_nohint<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>> &,std::_Tree_node<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 **v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // r9
  char v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rcx
  volatile signed __int32 *v19; // rdi
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v23; // [rsp+60h] [rbp+8h]

  v8 = *a1;
  v9 = (*a1)[1];
  v10 = (__int64 *)*a1;
  v11 = 1;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v12 = *a4;
    do
    {
      v10 = v9;
      v11 = v12 < v9[4];
      if ( v12 >= v9[4] )
        v9 = (__int64 *)v9[2];
      else
        v9 = (__int64 *)*v9;
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  try
  {
    v13 = v10;
    v23 = v10;
    if ( v11 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
                           a1,
                           &v21,
                           1,
                           v10,
                           v20,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v13 = (__int64 *)v10[2];
      }
      else
      {
        v16 = (__int64 *)*v10;
        if ( *(_BYTE *)(*v10 + 25) )
        {
          v17 = (__int64 *)v10[1];
          if ( !*((_BYTE *)v17 + 25) )
          {
            v18 = v10;
            do
            {
              if ( v18 != (__int64 *)*v17 )
                break;
              v13 = v17;
              v17 = (__int64 *)v17[1];
              v18 = v13;
            }
            while ( !*((_BYTE *)v17 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = v17;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = (__int64 *)v16[2];
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
      v23 = v13;
    }
    if ( v13[4] >= *a4 )
    {
      v19 = (volatile signed __int32 *)a5[6];
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
        v13 = v23;
      }
      operator delete(a5, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
                         a1,
                         v22,
                         v11,
                         v10,
                         v20,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Destroy_if_node(
      v14,
      a5);
    throw;
  }
  return result;
}

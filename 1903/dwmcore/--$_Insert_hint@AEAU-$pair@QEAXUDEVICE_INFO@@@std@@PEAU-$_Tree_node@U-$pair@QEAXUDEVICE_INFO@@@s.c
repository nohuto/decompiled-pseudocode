/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236B94
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180236E6C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tm.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Insert_at@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@1@Z @ 0x180236A04 (--$_Insert_at@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236D74 (--$_Insert_nohint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_hint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // r9
  char v8; // r8
  _QWORD *v9; // r10
  unsigned __int64 v10; // r11
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  int v17; // [rsp+20h] [rbp-28h]
  _QWORD *v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h] BYREF

  v6 = a2;
  if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) )
  {
    v9 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
    if ( a3 == *(_QWORD *)CPointerDeviceCache::s_deviceCache )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        v18 = a5;
LABEL_8:
        v7 = (_QWORD *)a3;
        goto LABEL_3;
      }
LABEL_40:
      *v6 = *(_QWORD *)std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_nohint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
                         a1,
                         (unsigned int)&v19,
                         a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v6;
    }
    if ( a3 == (_QWORD)CPointerDeviceCache::s_deviceCache )
    {
      v7 = *(_QWORD **)(CPointerDeviceCache::s_deviceCache + 16);
      if ( v7[4] >= *a4 )
        goto LABEL_40;
      v18 = a5;
    }
    else
    {
      v10 = *a4;
      v11 = *(_QWORD *)(a3 + 32) < *a4;
      if ( *(_QWORD *)(a3 + 32) > *a4 )
      {
        v7 = (_QWORD *)a3;
        if ( *(_BYTE *)(a3 + 25) )
        {
          v7 = *(_QWORD **)(a3 + 16);
        }
        else
        {
          v12 = *(_QWORD *)a3;
          if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
          {
            v13 = *(_QWORD *)(a3 + 8);
            if ( !*(_BYTE *)(v13 + 25) )
            {
              a1 = a3;
              do
              {
                v14 = v13;
                if ( a1 != *(_QWORD *)v13 )
                  break;
                v7 = (_QWORD *)v13;
                v13 = *(_QWORD *)(v13 + 8);
                a1 = v14;
              }
              while ( !*(_BYTE *)(v13 + 25) );
            }
            if ( !*((_BYTE *)v7 + 25) )
              v7 = (_QWORD *)v13;
          }
          else
          {
            do
            {
              v7 = (_QWORD *)v12;
              v12 = *(_QWORD *)(v12 + 16);
            }
            while ( !*(_BYTE *)(v12 + 25) );
          }
        }
        if ( v7[4] < v10 )
        {
          a2 = v6;
          v18 = a5;
          if ( !*(_BYTE *)(v7[2] + 25LL) )
            goto LABEL_8;
          goto LABEL_12;
        }
        v11 = *(_QWORD *)(a3 + 32) < v10;
      }
      if ( !v11 )
        goto LABEL_40;
      a1 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(a1 + 25) )
      {
        v7 = *(_QWORD **)(a3 + 8);
        if ( !*((_BYTE *)v7 + 25) )
        {
          v15 = (_QWORD *)a3;
          do
          {
            LODWORD(a1) = (_DWORD)v7;
            if ( v15 != (_QWORD *)v7[2] )
              break;
            v15 = v7;
            v7 = (_QWORD *)v7[1];
          }
          while ( !*((_BYTE *)v7 + 25) );
        }
      }
      else
      {
        v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)a1);
      }
      if ( v7 != v9 && v10 >= v7[4] )
        goto LABEL_40;
      a1 = *(_QWORD *)(a3 + 16);
      a2 = v6;
      v18 = a5;
      if ( !*(_BYTE *)(a1 + 25) )
        goto LABEL_3;
      v7 = (_QWORD *)a3;
    }
LABEL_12:
    v8 = 0;
    goto LABEL_4;
  }
  v7 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
  v18 = a5;
LABEL_3:
  v8 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_at<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
    a1,
    a2,
    v8,
    v7,
    v17,
    v18);
  return v6;
}

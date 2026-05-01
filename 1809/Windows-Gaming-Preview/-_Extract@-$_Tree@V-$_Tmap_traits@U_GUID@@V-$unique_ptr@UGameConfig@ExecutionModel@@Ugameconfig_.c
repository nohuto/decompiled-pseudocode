/*
 * XREFs of ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D620
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18001D3B0 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Extract(
        _QWORD *a1,
        __int64 *j)
{
  __int64 *v3; // r10
  __int64 **v4; // rax
  __int64 *v5; // r8
  __int64 *i; // rax
  __int64 **v7; // r9
  __int64 *v8; // r8
  _QWORD *v9; // r11
  __int64 *k; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  char v15; // cl
  bool m; // zf
  __int64 *v17; // r11
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 *v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rax
  __int64 **v33; // rax
  __int64 v34; // rcx

  v3 = j;
  if ( !*((_BYTE *)j + 25) )
  {
    v4 = (__int64 **)j[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v5 = *v4;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        j = v5;
    }
  }
  v7 = (__int64 **)v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      v7 = (__int64 **)*v3;
    }
    else
    {
      v7 = (__int64 **)j[2];
      if ( j != v3 )
      {
        *(_QWORD *)(*v3 + 8) = j;
        *j = *v3;
        if ( j == (__int64 *)v3[2] )
        {
          v8 = j;
        }
        else
        {
          v8 = (__int64 *)j[1];
          if ( !*((_BYTE *)v7 + 25) )
            v7[1] = v8;
          *v8 = (__int64)v7;
          j[2] = v3[2];
          *(_QWORD *)(v3[2] + 8) = j;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = j;
        }
        else
        {
          v14 = (__int64 **)v3[1];
          if ( *v14 == v3 )
            *v14 = j;
          else
            v14[2] = j;
        }
        j[1] = v3[1];
        v15 = *((_BYTE *)j + 24);
        *((_BYTE *)j + 24) = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = v15;
        goto LABEL_46;
      }
    }
  }
  v8 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v7 + 25) )
    v7[1] = v8;
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else if ( (__int64 *)*v8 == v3 )
  {
    *v8 = (__int64)v7;
  }
  else
  {
    v8[2] = (__int64)v7;
  }
  v9 = (_QWORD *)*a1;
  if ( *(__int64 **)*a1 == v3 )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      k = v8;
    }
    else
    {
      v11 = *v7;
      for ( k = (__int64 *)v7; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        k = v11;
    }
    *v9 = k;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v3 )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      v12 = v8;
    }
    else
    {
      v13 = v7[2];
      v12 = (__int64 *)v7;
      while ( !*((_BYTE *)v13 + 25) )
      {
        v12 = v13;
        v13 = (__int64 *)v13[2];
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v12;
  }
LABEL_46:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_113;
  for ( m = v7 == *(__int64 ***)(*a1 + 8LL); !m; m = v17 == *(__int64 **)(*a1 + 8LL) )
  {
    v17 = v8;
    if ( *((_BYTE *)v7 + 24) != 1 )
      break;
    v18 = (__int64 *)*v8;
    if ( v7 == (__int64 **)*v8 )
    {
      v18 = (__int64 *)v8[2];
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v19 = (__int64 *)v8[2];
        *((_BYTE *)v8 + 24) = 0;
        v8[2] = *v19;
        if ( !*(_BYTE *)(*v19 + 25) )
          *(_QWORD *)(*v19 + 8) = v8;
        v19[1] = v8[1];
        if ( v8 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v19;
        }
        else
        {
          v20 = (__int64 **)v8[1];
          if ( v8 == *v20 )
            *v20 = v19;
          else
            v20[2] = v19;
        }
        *v19 = (__int64)v8;
        v8[1] = (__int64)v19;
        v18 = (__int64 *)v8[2];
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        if ( *(_BYTE *)(*v18 + 24) != 1 || *(_BYTE *)(v18[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v18[2] + 24) == 1 )
          {
            *(_BYTE *)(*v18 + 24) = 1;
            v21 = *v18;
            *((_BYTE *)v18 + 24) = 0;
            *v18 = *(_QWORD *)(v21 + 16);
            v22 = *(_QWORD *)(v21 + 16);
            if ( !*(_BYTE *)(v22 + 25) )
              *(_QWORD *)(v22 + 8) = v18;
            *(_QWORD *)(v21 + 8) = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v21;
            }
            else
            {
              v27 = (_QWORD *)v18[1];
              if ( v18 == (__int64 *)v27[2] )
                v27[2] = v21;
              else
                *v27 = v21;
            }
            *(_QWORD *)(v21 + 16) = v18;
            v18[1] = v21;
            v18 = (__int64 *)v8[2];
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v8 + 24);
          *((_BYTE *)v8 + 24) = 1;
          *(_BYTE *)(v18[2] + 24) = 1;
          v28 = (__int64 *)v8[2];
          v8[2] = *v28;
          if ( !*(_BYTE *)(*v28 + 25) )
            *(_QWORD *)(*v28 + 8) = v8;
          v28[1] = v8[1];
          if ( v8 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v29 = (__int64 **)v8[1];
            if ( v8 == *v29 )
              *v29 = v28;
            else
              v29[2] = v28;
          }
          *v28 = (__int64)v8;
LABEL_111:
          v8[1] = (__int64)v28;
          break;
        }
LABEL_80:
        *((_BYTE *)v18 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v23 = (__int64 *)*v8;
        *((_BYTE *)v8 + 24) = 0;
        *v8 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v8;
        v23[1] = v8[1];
        if ( v8 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v23;
        }
        else
        {
          v25 = (_QWORD *)v8[1];
          if ( v8 == (__int64 *)v25[2] )
            v25[2] = v23;
          else
            *v25 = v23;
        }
        v23[2] = (__int64)v8;
        v8[1] = (__int64)v23;
        v18 = (__int64 *)*v8;
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        v26 = v18[2];
        if ( *(_BYTE *)(v26 + 24) != 1 || *(_BYTE *)(*v18 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v18 + 24) == 1 )
          {
            *(_BYTE *)(v26 + 24) = 1;
            v30 = (__int64 *)v18[2];
            *((_BYTE *)v18 + 24) = 0;
            v18[2] = *v30;
            if ( !*(_BYTE *)(*v30 + 25) )
              *(_QWORD *)(*v30 + 8) = v18;
            v30[1] = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v30;
            }
            else
            {
              v31 = (__int64 **)v18[1];
              if ( v18 == *v31 )
                *v31 = v30;
              else
                v31[2] = v30;
            }
            *v30 = (__int64)v18;
            v18[1] = (__int64)v30;
            v18 = (__int64 *)*v8;
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v8 + 24);
          *((_BYTE *)v8 + 24) = 1;
          *(_BYTE *)(*v18 + 24) = 1;
          v28 = (__int64 *)*v8;
          *v8 = *(_QWORD *)(*v8 + 16);
          v32 = v28[2];
          if ( !*(_BYTE *)(v32 + 25) )
            *(_QWORD *)(v32 + 8) = v8;
          v28[1] = v8[1];
          if ( v8 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v28;
          }
          else
          {
            v33 = (__int64 **)v8[1];
            if ( v8 == v33[2] )
              v33[2] = v28;
            else
              *v33 = v28;
          }
          v28[2] = (__int64)v8;
          goto LABEL_111;
        }
        goto LABEL_80;
      }
    }
    v7 = (__int64 **)v8;
    v8 = (__int64 *)v8[1];
  }
  *((_BYTE *)v7 + 24) = 1;
LABEL_113:
  v34 = a1[1];
  if ( v34 )
    a1[1] = v34 - 1;
  return v3;
}

/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18007BFF8
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x18000F040 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180054330 (-GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E958 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18007C25C (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??0?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@1@@Z @ 0x18007C34C (--0-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18007C4AC (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C4E8 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18007C634 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        LPCWCH lpString1,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // edi
  RTL_SRWLOCK *v6; // rbx
  DWORD LastError; // ebx
  wchar_t **v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  RTL_SRWLOCK *v13; // rax
  __int64 *v14; // rbx
  RTL_SRWLOCK *v15; // rsi
  bool v16; // zf
  RTL_SRWLOCK v17; // rsi
  RTL_SRWLOCK *Ptr; // rbx
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+38h] [rbp-38h] BYREF
  LPCWCH v22; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  char v24; // [rsp+58h] [rbp-18h] BYREF
  RTL_SRWLOCK *v25; // [rsp+B8h] [rbp+48h] BYREF
  RTL_SRWLOCK *v26; // [rsp+C0h] [rbp+50h]

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  AcquireSRWLockShared(&stru_18018F1F0);
  v6 = &stru_18018F1F0;
  v25 = &stru_18018F1F0;
  if ( !qword_18018F1E8 )
  {
    LastError = GetLastError();
    ReleaseSRWLockShared(&stru_18018F1F0);
    SetLastError(LastError);
    v6 = 0LL;
    v25 = 0LL;
    AcquireSRWLockExclusive(&stru_18018F1F0);
    v26 = &stru_18018F1F0;
    if ( qword_18018F1E8 )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v21);
      ReleaseSRWLockExclusive(&stru_18018F1F0);
      goto LABEL_11;
    }
    v8 = off_1800EECF8;
    v9 = 1201LL;
    do
    {
      v10 = (__int64)*(v8 - 1);
      if ( v10 )
      {
        v22 = *v8;
        v23 = v10;
        v11 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
                &qword_18018F1E0,
                &v22);
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          (unsigned int)&qword_18018F1E0,
          (unsigned int)&v24,
          v12,
          v11 + 32,
          v11);
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
    ReleaseSRWLockExclusive(&stru_18018F1F0);
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v21);
  if ( v6 )
    ReleaseSRWLockShared(v6);
LABEL_11:
  v13 = (RTL_SRWLOCK *)v21[0];
  v14 = *(__int64 **)(v21[0] + 8LL);
  v15 = (RTL_SRWLOCK *)v21[0];
  if ( *((_BYTE *)v14 + 25) )
    goto LABEL_18;
  do
  {
    if ( CompareStringOrdinal((LPCWCH)v14[4], -1, lpString1, -1, 1) == 1 )
    {
      v14 = (__int64 *)v14[2];
    }
    else
    {
      v15 = (RTL_SRWLOCK *)v14;
      v14 = (__int64 *)*v14;
    }
  }
  while ( !*((_BYTE *)v14 + 25) );
  v13 = (RTL_SRWLOCK *)v21[0];
  if ( v15 == (RTL_SRWLOCK *)v21[0]
    || (v16 = CompareStringOrdinal(lpString1, -1, (LPCWCH)v15[4].Ptr, -1, 1) == 1, v13 = (RTL_SRWLOCK *)v21[0], v16) )
  {
LABEL_18:
    v15 = v13;
  }
  if ( v15 == v13 )
  {
    v5 = -2147024809;
  }
  else
  {
    v17.Ptr = v13[1].Ptr;
    Ptr = v13;
    if ( !*((_BYTE *)v17.Ptr + 25) )
    {
      do
      {
        if ( CompareStringOrdinal(*((LPCWCH *)v17.Ptr + 4), -1, lpString1, -1, 1) == 1 )
        {
          v17.Ptr = (PVOID)*((_QWORD *)v17.Ptr + 2);
        }
        else
        {
          Ptr = (RTL_SRWLOCK *)v17.Ptr;
          v17.Ptr = *(PVOID *)v17.Ptr;
        }
      }
      while ( !*((_BYTE *)v17.Ptr + 25) );
      v13 = (RTL_SRWLOCK *)v21[0];
    }
    if ( Ptr == v13 || CompareStringOrdinal(lpString1, -1, (LPCWCH)Ptr[4].Ptr, -1, 1) == 1 )
    {
      v22 = lpString1;
      v23 = 0LL;
      v19 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
              v21,
              &v22);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (unsigned int)v21,
        (unsigned int)&v25,
        (_DWORD)Ptr,
        v19 + 32,
        v19);
      Ptr = v25;
    }
    *(RTL_SRWLOCK *)a2 = Ptr[5];
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v21);
  return v5;
}

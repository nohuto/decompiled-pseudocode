/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801BFDB8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180175A8C (-Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMI.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800302D0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1801BF9F8 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(CExpressionManager *this, int a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // edi
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // r12d
  __int64 *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rcx
  char *v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // edi
  signed int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+30h] [rbp-10h] BYREF
  const void *retaddr; // [rsp+68h] [rbp+28h]
  int v33; // [rsp+78h] [rbp+38h] BYREF

  v33 = a2;
  if ( (_BYTE)a3 )
  {
    if ( a4 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        (__int64)this + 400,
        (__int64)v31,
        a3,
        &v33);
      return;
    }
    v5 = *((unsigned int *)this + 41);
    v6 = 0LL;
    if ( !*((_DWORD *)this + 8 * v5 + 48) )
      goto LABEL_49;
    while ( 1 )
    {
      v7 = *(_DWORD **)(*((_QWORD *)this + 4 * (unsigned int)v5 + 21) + 8 * v6);
      v31[0] = v7;
      if ( !v7 || v7[42] != a2 )
        goto LABEL_19;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 55LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 48LL))(v31[0], 90LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 48LL))(v31[0], 107LL) )
      {
        break;
      }
LABEL_18:
      a2 = v33;
LABEL_19:
      v6 = (unsigned int)(v6 + 1);
      LODWORD(v5) = *((_DWORD *)this + 41);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 8 * (unsigned int)v5 + 48) )
        goto LABEL_49;
    }
    v9 = (_QWORD *)((char *)this + 296);
    v10 = *((_DWORD *)this + 80);
    v11 = v10 + 1;
    if ( v10 + 1 >= v10 )
    {
      if ( v11 <= *((_DWORD *)this + 79) )
      {
        *(_QWORD *)(*v9 + 8LL * *((unsigned int *)this + 80)) = v31[0];
        *((_DWORD *)this + 80) = v11;
LABEL_17:
        *(_QWORD *)(*((_QWORD *)this + 4 * *((unsigned int *)this + 41) + 21) + 8 * v6) = 0LL;
        goto LABEL_18;
      }
      v13 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 296, 8u, (__int64)v9, v31);
      v12 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC3u, 0LL);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v12 < 0 )
      ModuleFailFastForHRESULT(v12, retaddr);
    goto LABEL_17;
  }
  v15 = *((_DWORD *)this + 80);
  if ( !v15 )
    goto LABEL_49;
  v16 = 0;
  v17 = (__int64 *)((char *)this + 296);
  v18 = 0LL;
  do
  {
    v19 = *(_QWORD *)(v18 + *v17);
    v31[0] = v19;
    if ( v19 && *(_DWORD *)(v19 + 168) == a2 )
    {
      v20 = (char *)this + 32 * *((unsigned int *)this + 41);
      v21 = *((_DWORD *)v20 + 48);
      v22 = v21 + 1;
      if ( v21 + 1 >= v21 )
      {
        if ( v22 <= *((_DWORD *)v20 + 47) )
        {
          *(_QWORD *)(*((_QWORD *)v20 + 21) + 8LL * *((unsigned int *)v20 + 48)) = v31[0];
          *((_DWORD *)v20 + 48) = v22;
LABEL_33:
          a2 = v33;
          *(_QWORD *)(v18 + *v17) = 0LL;
          goto LABEL_34;
        }
        v24 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v20 + 168), 8u, (__int64)v20, v31);
        v23 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC3u, 0LL);
      }
      else
      {
        v23 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v23 < 0 )
        ModuleFailFastForHRESULT(v23, retaddr);
      goto LABEL_33;
    }
LABEL_34:
    ++v16;
    v18 += 8LL;
  }
  while ( v16 < v15 );
  v26 = 0LL;
  v27 = v15 - 1;
  if ( v15 != 1 )
  {
    do
    {
      v28 = *v17;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v28 + 8 * v26);
        if ( !v29 || (unsigned int)v26 >= (unsigned int)v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
      }
      while ( 1 )
      {
        v30 = *(_QWORD *)(v28 + 8 * v27);
        if ( v30 || (unsigned int)v26 >= (unsigned int)v27 )
          break;
        v27 = (unsigned int)(v27 - 1);
      }
      if ( !v29 && v30 )
      {
        *(_QWORD *)(v28 + 8 * v26) = v30;
        *(_QWORD *)(*v17 + 8 * v27) = 0LL;
      }
    }
    while ( (unsigned int)v26 < (unsigned int)v27 );
  }
  *((_DWORD *)this + 80) = v27;
  DynArrayImpl<1>::ShrinkToSize((__int64)v17, 8u);
LABEL_49:
  *((_BYTE *)this + 416) |= 8u;
}

/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18018A408
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x18014B174 (-Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180065D48 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1800C4344 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(__int64 **this, int a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // r13d
  __int64 *v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 **v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // edi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rax
  _QWORD v32[2]; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+38h]
  int v34; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+58h]

  v34 = a2;
  if ( a4 )
  {
    if ( (_BYTE)a3 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        this + 50,
        (__int64)v32,
        a3,
        &v34);
      return;
    }
    goto LABEL_26;
  }
  if ( !(_BYTE)a3 )
  {
LABEL_26:
    v15 = *((_DWORD *)this + 80);
    if ( !v15 )
      goto LABEL_56;
    v16 = v35;
    v17 = (__int64 *)(this + 37);
    v18 = 0;
    v19 = 0LL;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v19 + *v17);
      v32[0] = v20;
      if ( v20 )
      {
        if ( *(_DWORD *)(v20 + 168) == a2 )
          break;
      }
LABEL_41:
      ++v18;
      v19 += 8LL;
      if ( v18 >= v15 )
      {
        v27 = 0LL;
        v28 = v15 - 1;
        if ( v15 != 1 )
        {
          do
          {
            v29 = *v17;
            while ( 1 )
            {
              v30 = *(_QWORD *)(v29 + 8 * v27);
              if ( !v30 || (unsigned int)v27 >= (unsigned int)v28 )
                break;
              v27 = (unsigned int)(v27 + 1);
            }
            while ( 1 )
            {
              v31 = *(_QWORD *)(v29 + 8 * v28);
              if ( v31 || (unsigned int)v27 >= (unsigned int)v28 )
                break;
              v28 = (unsigned int)(v28 - 1);
            }
            if ( !v30 )
            {
              if ( v31 )
              {
                *(_QWORD *)(v29 + 8 * v27) = v31;
                *(_QWORD *)(*v17 + 8 * v28) = 0LL;
              }
            }
          }
          while ( (unsigned int)v27 < (unsigned int)v28 );
        }
        *((_DWORD *)this + 80) = v28;
        DynArrayImpl<1>::ShrinkToSize((__int64)v17, 8u);
        goto LABEL_56;
      }
    }
    v21 = &this[4 * *((unsigned int *)this + 41)];
    v22 = *((unsigned int *)v21 + 48);
    v23 = v22 + 1;
    if ( (int)v22 + 1 >= (unsigned int)v22 )
      v16 = v22 + 1;
    v24 = v23 < (unsigned int)v22 ? 0x80070216 : 0;
    if ( v23 < (unsigned int)v22 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v24, 0xB5u);
    }
    else
    {
      if ( v16 <= *((_DWORD *)v21 + 47) )
      {
        v21[21][v22] = v32[0];
        *((_DWORD *)v21 + 48) = v16;
LABEL_39:
        if ( v24 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
        *(_QWORD *)(v19 + *v17) = 0LL;
        goto LABEL_41;
      }
      v25 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v21 + 21), 8u, (__int64)v21, v32);
      v24 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xC0u);
    }
    a2 = v34;
    goto LABEL_39;
  }
  v5 = *((unsigned int *)this + 41);
  v6 = 0LL;
  if ( LODWORD(this[4 * v5 + 24]) )
  {
    v7 = v35;
    do
    {
      v8 = (_DWORD *)this[4 * (unsigned int)v5 + 21][v6];
      v32[0] = v8;
      if ( v8 && v8[42] == a2 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 53LL)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v32[0] + 48LL))(v32[0], 85LL)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v32[0] + 48LL))(v32[0], 100LL) )
        {
          v9 = this + 37;
          v10 = *((unsigned int *)this + 80);
          v11 = v10 + 1;
          if ( (int)v10 + 1 >= (unsigned int)v10 )
            v7 = v10 + 1;
          v12 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
          if ( v11 < (unsigned int)v10 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0xB5u);
          }
          else if ( v7 > *((_DWORD *)this + 79) )
          {
            v13 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(this + 37), 8u, (__int64)v9, v32);
            v12 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*v9 + 8 * v10) = v32[0];
            *((_DWORD *)this + 80) = v7;
          }
          if ( v12 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
          this[4 * *((unsigned int *)this + 41) + 21][v6] = 0LL;
        }
        a2 = v34;
      }
      v6 = (unsigned int)(v6 + 1);
      LODWORD(v5) = *((_DWORD *)this + 41);
    }
    while ( (unsigned int)v6 < LODWORD(this[4 * (unsigned int)v5 + 24]) );
  }
LABEL_56:
  *((_BYTE *)this + 416) |= 8u;
}

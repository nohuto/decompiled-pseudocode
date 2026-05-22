/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z @ 0x1800D01AC
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1800D013C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D0618 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree__ea_1800D0618.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x1800D0684 (--$_Insert_hint@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$pai.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(
        MagnifierRecognizer *this,
        const struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r15d
  unsigned int *v8; // r14
  char *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 *v17; // rax
  unsigned int v18; // ecx
  void *v19; // rax
  __int128 v20; // xmm1
  __int64 *v21; // rbx
  __int64 *v22; // rax
  void *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  __int128 v26; // [rsp+38h] [rbp-30h]
  __int128 v27; // [rsp+48h] [rbp-20h]
  char *v28; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp+50h]
  __int64 *v30; // [rsp+C0h] [rbp+58h]
  __int64 v31; // [rsp+C8h] [rbp+60h] BYREF

  v4 = 0;
  *((_DWORD *)this + 1) = 0;
  v7 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v8 = (unsigned int *)((char *)a2 + 32 * v7 + 56);
      if ( (v8[1] & 2) != 0 )
      {
        ++*((_DWORD *)this + 1);
        v9 = (char *)this + 16;
        v10 = *((_QWORD *)this + 2);
        v11 = v10;
        v12 = *(_QWORD *)(v10 + 8);
        while ( !*(_BYTE *)(v12 + 25) )
        {
          if ( *(_DWORD *)(v12 + 32) >= *v8 )
          {
            v11 = v12;
            v12 = *(_QWORD *)v12;
          }
          else
          {
            v12 = *(_QWORD *)(v12 + 16);
          }
        }
        if ( v11 == v10 || (v12 = *(unsigned int *)(v11 + 32), *v8 < (unsigned int)v12) )
          v11 = *((_QWORD *)this + 2);
        if ( v11 == v10 )
        {
          v13 = *((_QWORD *)a2 + 2);
          *((_QWORD *)&v27 + 1) = 0LL;
          v26 = 0uLL;
          *(_QWORD *)&v26 = *((_QWORD *)v8 + 3);
          v14 = MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v31, v13, a4);
          v12 = *(_QWORD *)v9;
          v15 = *(__int64 **)v9;
          v16 = *v14;
          v17 = *(__int64 **)(*(_QWORD *)v9 + 8LL);
          *(_QWORD *)&v27 = v16;
          if ( *((_BYTE *)v17 + 25) )
            goto LABEL_20;
          v18 = *v8;
          do
          {
            if ( *((_DWORD *)v17 + 8) >= v18 )
            {
              v15 = v17;
              v17 = (__int64 *)*v17;
            }
            else
            {
              v17 = (__int64 *)v17[2];
            }
          }
          while ( !*((_BYTE *)v17 + 25) );
          if ( v15 == (__int64 *)v12 || v18 < *((_DWORD *)v15 + 8) )
          {
LABEL_20:
            v28 = (char *)a2 + 32 * v7 + 56;
            v19 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                            (char *)this + 16,
                            v12,
                            &v28);
            std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_hint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
              (_DWORD)this + 16,
              v19);
            v15 = v29;
          }
          v20 = v27;
          *(_OWORD *)(v15 + 5) = v26;
          *(_OWORD *)(v15 + 7) = v20;
        }
        v21 = *(__int64 **)v9;
        v22 = *(__int64 **)(*(_QWORD *)v9 + 8LL);
        if ( *((_BYTE *)v22 + 25) )
          goto LABEL_30;
        v12 = *v8;
        do
        {
          if ( *((_DWORD *)v22 + 8) >= (unsigned int)v12 )
          {
            v21 = v22;
            v22 = (__int64 *)*v22;
          }
          else
          {
            v22 = (__int64 *)v22[2];
          }
        }
        while ( !*((_BYTE *)v22 + 25) );
        if ( v21 == *(__int64 **)v9 || (unsigned int)v12 < *((_DWORD *)v21 + 8) )
        {
LABEL_30:
          v28 = (char *)a2 + 32 * v7 + 56;
          v23 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                          (char *)this + 16,
                          v12,
                          &v28);
          std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_hint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
            (_DWORD)this + 16,
            v23);
          v21 = v30;
        }
        *((_DWORD *)v21 + 12) = v8[6];
        *((_DWORD *)v21 + 13) = v8[7];
        v21[8] = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v25, *((_QWORD *)a2 + 2), a4);
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 12) );
    v4 = *((_DWORD *)this + 1);
  }
  v24 = *((_DWORD *)this + 2);
  if ( v24 <= v4 )
    v24 = v4;
  *((_DWORD *)this + 2) = v24;
}

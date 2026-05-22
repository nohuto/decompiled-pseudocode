/*
 * XREFs of ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800F6500
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F79F0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree__ea_1800F79F0.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x1800F7A64 (--$_Insert_hint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUIn.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCProcessor::PopulateDetectedOrLostReport(
        MPCProcessor *this,
        unsigned __int8 a2,
        unsigned int a3,
        struct LegacyInputInfo *a4)
{
  int v4; // esi
  char *v5; // rdi
  __int64 v6; // rdx
  int v7; // esi
  unsigned int *v10; // rbx
  __int64 *v11; // rax
  void *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  __int64 *v16; // rax
  void *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int *v19; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+40h] BYREF

  v20 = a3;
  v4 = a2;
  v5 = (char *)this + 3760;
  v6 = *((_QWORD *)this + 470);
  v7 = v4 ^ 1;
  v10 = (unsigned int *)v6;
  v11 = *(__int64 **)(v6 + 8);
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v11 + 8) >= a3 )
    {
      v10 = (unsigned int *)v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v10 == (unsigned int *)v6 || a3 < v10[8] )
  {
LABEL_8:
    v19 = &v20;
    v12 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    v5,
                    v6,
                    &v19);
    std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_hint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
      (int)v5,
      v12);
    v10 = v19;
  }
  v13 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, v7 + 4, 512, **((_DWORD **)this + 6), (__int64)(v10 + 10));
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800F6655LL);
  }
  v15 = *(unsigned int **)v5;
  v16 = *(__int64 **)(*(_QWORD *)v5 + 8LL);
  if ( *((_BYTE *)v16 + 25) )
    goto LABEL_18;
  v14 = v20;
  do
  {
    if ( *((_DWORD *)v16 + 8) >= v20 )
    {
      v15 = (unsigned int *)v16;
      v16 = (__int64 *)*v16;
    }
    else
    {
      v16 = (__int64 *)v16[2];
    }
  }
  while ( !*((_BYTE *)v16 + 25) );
  if ( v15 == *(unsigned int **)v5 || v20 < v15[8] )
  {
LABEL_18:
    v19 = &v20;
    v17 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    v5,
                    v14,
                    &v19);
    std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_hint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
      (int)v5,
      v17);
    v15 = v19;
  }
  memcpy_0(a4, v15 + 10, 0x640uLL);
}

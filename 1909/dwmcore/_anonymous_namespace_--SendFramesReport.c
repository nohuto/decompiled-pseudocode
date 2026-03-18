/*
 * XREFs of _anonymous_namespace_::SendFramesReport @ 0x180040348
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x1800CC1A0 (_anonymous_namespace_--SendFramesReports.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x1800383C8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x18003DB40 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x180040DC0 (_anonymous_namespace_--PackedStringArrayBuilder--Append.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x180040E84 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180041048 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800412FC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180041F80 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180041FDC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@U_Iterator_.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEB_K@Z @ 0x180042028 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0.c)
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18004205C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     ??$_Emplace_reallocate@D@?$vector@DV?$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z @ 0x180042594 (--$_Emplace_reallocate@D@-$vector@DV-$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime @ 0x1800B3914 (_anonymous_namespace_--QpcToFileTimeAndGetCurrentFileTime.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1180 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C4954 (--$_Try_emplace@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PEBV-.c)
 *     ??$_Try_emplace@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C4A0C (--$_Try_emplace@AEBQEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PE.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x1800C4A94 (--$_Insert_hint@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@st.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@XZ @ 0x1800C4D38 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800C4D6C (--$_Try_emplace@AEB_K$$V@-$map@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@@std@@QEA.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C4DD4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x1800C8800 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--LessThan_std-.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800CBE24 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@0@Z @ 0x1800CEE3C (-erase@-$_Tree@V-$_Tmap_traits@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@$0A@@std@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@2@0@Z @ 0x1800D0AC8 (-erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder @ 0x1800D5EFC (_anonymous_namespace_--PackedStringArrayBuilder--PackedStringArrayBuilder.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const________std::_Iterator_base0_::operator__ @ 0x1800D8114 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pai_ea_1800D8114.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::SendFramesReport(__int64 *a1)
{
  int v1; // r13d
  __int64 v3; // rax
  LPCSTR *v4; // r14
  _BYTE *v5; // rdi
  _BYTE *v6; // rsi
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD **v13; // rax
  _QWORD **v14; // r12
  _QWORD **v15; // r14
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  _BYTE *v20; // rdi
  _BYTE *v21; // rdi
  _BYTE *v22; // rdi
  unsigned int v23; // ebx
  _BYTE *v24; // rdi
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  _BYTE *v27; // rdi
  _BYTE *v28; // rdi
  _BYTE *v29; // rdi
  _BYTE *v30; // rdi
  _BYTE *v31; // rdi
  _BYTE *v32; // rdi
  unsigned int v33; // ebx
  _BYTE *v34; // rdi
  unsigned int v35; // ebx
  _BYTE *v36; // rdi
  LPCSTR *v37; // rax
  LPCSTR *v38; // r9
  LPCSTR *v39; // r8
  char *v40; // r9
  _BYTE *v41; // rdi
  _QWORD *v42; // rax
  int v43; // r12d
  __int64 v44; // rax
  _QWORD *v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // r12
  __int64 i; // rbx
  __int64 *v49; // rbx
  __int64 *v50; // rax
  LPCSTR *v51; // rax
  DWORD CurrentProcessId; // eax
  const CHAR *v53; // rdx
  __int64 v54; // rax
  unsigned __int16 v55; // dx
  int v56; // eax
  const CHAR *v57; // rdx
  const CHAR *v58; // rdx
  __int64 v60; // rax
  _QWORD *v61; // r13
  unsigned int v62; // edx
  signed int LastError; // eax
  __int64 v64; // r8
  __int64 v65; // [rsp+38h] [rbp-D0h] BYREF
  LPCSTR *v66; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v67; // [rsp+48h] [rbp-C0h]
  _BYTE *v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v70; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v71[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v73; // [rsp+80h] [rbp-88h] BYREF
  __int64 v74; // [rsp+88h] [rbp-80h]
  _QWORD v75[2]; // [rsp+90h] [rbp-78h] BYREF
  DWORD pSessionId; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v77; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v78[2]; // [rsp+B0h] [rbp-58h] BYREF
  int v79; // [rsp+C0h] [rbp-48h] BYREF
  _WORD *v80; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v81; // [rsp+D0h] [rbp-38h]
  char v82[8]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD *v83; // [rsp+E8h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-18h]
  _QWORD v85[2]; // [rsp+F8h] [rbp-10h] BYREF
  char v86[8]; // [rsp+108h] [rbp+0h] BYREF
  char v87[8]; // [rsp+110h] [rbp+8h] BYREF
  LPCSTR psz[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v89; // [rsp+128h] [rbp+20h]
  unsigned __int64 v90; // [rsp+130h] [rbp+28h]
  LPCSTR v91[2]; // [rsp+138h] [rbp+30h] BYREF
  __m128i si128; // [rsp+148h] [rbp+40h]
  LPCSTR v93[4]; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp+70h] BYREF
  _QWORD *v95; // [rsp+198h] [rbp+90h]
  __int64 v96; // [rsp+1A0h] [rbp+98h]
  char *v97; // [rsp+1A8h] [rbp+A0h]
  __int64 v98; // [rsp+1B0h] [rbp+A8h]
  DWORD *p_pSessionId; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  __int64 v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  char *v103; // [rsp+1D8h] [rbp+D0h]
  __int64 v104; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v106; // [rsp+1F8h] [rbp+F0h]
  __int64 v107; // [rsp+200h] [rbp+F8h]
  LPCSTR *v108; // [rsp+208h] [rbp+100h]
  int v109; // [rsp+210h] [rbp+108h]
  int v110; // [rsp+214h] [rbp+10Ch]
  _WORD *v111; // [rsp+218h] [rbp+110h]
  int v112; // [rsp+220h] [rbp+118h]
  int v113; // [rsp+224h] [rbp+11Ch]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+228h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+238h] [rbp+130h] BYREF
  void *retaddr; // [rsp+280h] [rbp+178h]

  v1 = 0;
  v90 = 15LL;
  v89 = 0LL;
  LOBYTE(psz[0]) = 0;
  v74 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v66 = 0LL;
  v4 = 0LL;
  v67 = 0LL;
  v5 = 0LL;
  v68 = 0LL;
  *(_QWORD *)v3 = v3;
  v6 = 0LL;
  *(_QWORD *)(v3 + 8) = v3;
  v7 = 0;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  v73 = (_QWORD *)v3;
  v75[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  v9 = *a1;
  v75[0] = v8;
  v10 = *(_QWORD **)(v9 + 160);
  v11 = (_QWORD *)*v10;
  v71[0] = *v10;
  while ( v11 != v10 )
  {
    v70 = v11 + 4;
    std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(v75, v78, &v70);
    *(_DWORD *)(v78[0] + 40LL) = v7++;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>,std::_Iterator_base0>::operator++(v71);
    v11 = (_QWORD *)v71[0];
  }
  v12 = *a1;
  v13 = *(_QWORD ***)(*a1 + 120);
  v14 = *(_QWORD ***)(*a1 + 112);
  if ( v14 != v13 )
  {
    LOBYTE(v69) = 0;
    v15 = v13;
    do
    {
      v16 = *v14;
      v17 = *((_DWORD *)*v14 + 26);
      v71[0] = **v14;
      v70 = (_QWORD *)v16[12];
      v18 = std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Lbound<unsigned __int64>(
              &v73,
              v71);
      if ( (_QWORD *)v18 == v73 || v19 < *(_QWORD *)(v18 + 32) )
      {
        v85[0] = v71;
        v18 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                           (unsigned int)&v73,
                           (unsigned int)v78,
                           v18,
                           v19,
                           (__int64)v85);
      }
      *(_DWORD *)(v18 + 40) = v1++;
      LOBYTE(v65) = v17;
      if ( v6 == v5 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v5, &v65);
        v6 = v68;
        v20 = v67;
      }
      else
      {
        *v5 = v17;
        v20 = v5 + 1;
        v67 = v20;
      }
      LOBYTE(v65) = BYTE1(v17);
      if ( v6 == v20 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v20, &v65);
        v6 = v68;
        v21 = v67;
      }
      else
      {
        *v20 = BYTE1(v17);
        v21 = v20 + 1;
        v67 = v21;
      }
      LOBYTE(v65) = BYTE2(v17);
      if ( v6 == v21 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v21, &v65);
        v6 = v68;
        v22 = v67;
      }
      else
      {
        *v21 = BYTE2(v17);
        v22 = v21 + 1;
        v67 = v22;
      }
      v23 = HIBYTE(v17);
      LOBYTE(v65) = v23;
      if ( v6 == v22 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v22, &v65);
        v6 = v68;
        v24 = v67;
      }
      else
      {
        *v22 = v23;
        v24 = v22 + 1;
        v67 = v24;
      }
      LOBYTE(v65) = v71[0];
      if ( v6 == v24 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v24, &v65);
        v6 = v68;
        v25 = v67;
      }
      else
      {
        *v24 = v71[0];
        v25 = v24 + 1;
        v67 = v25;
      }
      LOBYTE(v65) = BYTE1(v71[0]);
      if ( v6 == v25 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v25, &v65);
        v6 = v68;
        v26 = v67;
      }
      else
      {
        *v25 = BYTE1(v71[0]);
        v26 = v25 + 1;
        v67 = v26;
      }
      LOBYTE(v65) = BYTE2(v71[0]);
      if ( v6 == v26 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v26, &v65);
        v6 = v68;
        v27 = v67;
      }
      else
      {
        *v26 = BYTE2(v71[0]);
        v27 = v26 + 1;
        v67 = v27;
      }
      LOBYTE(v65) = BYTE3(v71[0]);
      if ( v6 == v27 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v27, &v65);
        v6 = v68;
        v28 = v67;
      }
      else
      {
        *v27 = BYTE3(v71[0]);
        v28 = v27 + 1;
        v67 = v28;
      }
      LOBYTE(v65) = BYTE4(v71[0]);
      if ( v6 == v28 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v28, &v65);
        v6 = v68;
        v29 = v67;
      }
      else
      {
        *v28 = BYTE4(v71[0]);
        v29 = v28 + 1;
        v67 = v29;
      }
      LOBYTE(v65) = BYTE5(v71[0]);
      if ( v6 == v29 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v29, &v65);
        v6 = v68;
        v30 = v67;
      }
      else
      {
        *v29 = BYTE5(v71[0]);
        v30 = v29 + 1;
        v67 = v30;
      }
      LOBYTE(v65) = BYTE6(v71[0]);
      if ( v6 == v30 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v30, &v65);
        v6 = v68;
        v31 = v67;
      }
      else
      {
        *v30 = BYTE6(v71[0]);
        v31 = v30 + 1;
        v67 = v31;
      }
      LOBYTE(v65) = HIBYTE(v71[0]);
      if ( v6 == v31 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v31, &v65);
        v6 = v68;
        v32 = v67;
      }
      else
      {
        *v31 = HIBYTE(v71[0]);
        v32 = v31 + 1;
        v67 = v32;
      }
      if ( v70 )
      {
        v49 = (__int64 *)v75[0];
        v50 = *(__int64 **)(v75[0] + 8LL);
        if ( *((_BYTE *)v50 + 25) )
          goto LABEL_81;
        do
        {
          if ( v50[4] < (unsigned __int64)v70 )
          {
            v50 = (__int64 *)v50[2];
          }
          else
          {
            v49 = v50;
            v50 = (__int64 *)*v50;
          }
        }
        while ( !*((_BYTE *)v50 + 25) );
        if ( v49 == (__int64 *)v75[0] || (unsigned __int64)v70 < v49[4] )
        {
LABEL_81:
          v60 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Buynode0(v75);
          *(_WORD *)(v60 + 24) = 0;
          *(_QWORD *)(v60 + 32) = v70;
          *(_DWORD *)(v60 + 40) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_hint<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
            (unsigned int)v75,
            (unsigned int)&v77,
            (_DWORD)v49,
            v60 + 32,
            v60);
          v49 = v77;
        }
        v33 = *((_DWORD *)v49 + 10) + 1;
      }
      else
      {
        v33 = 0;
      }
      LOBYTE(v65) = v33;
      if ( v6 == v32 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v32, &v65);
        v6 = v68;
        v34 = v67;
      }
      else
      {
        *v32 = v33;
        v34 = v32 + 1;
        v67 = v34;
      }
      v35 = v33 >> 8;
      LOBYTE(v65) = v35;
      if ( v6 == v34 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v34, &v65);
        v36 = v67;
      }
      else
      {
        *v34 = v35;
        v36 = v34 + 1;
        v67 = v36;
      }
      v37 = psz;
      if ( v90 >= 0x10 )
        v37 = (LPCSTR *)psz[0];
      v89 = 0LL;
      *(_BYTE *)v37 = 0;
      anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize(*v14 + 1, psz);
      v38 = psz;
      v39 = psz;
      if ( v90 >= 0x10 )
        v38 = (LPCSTR *)psz[0];
      v40 = (char *)v38 + v89;
      if ( v90 >= 0x10 )
        v39 = (LPCSTR *)psz[0];
      std::vector<char>::_Insert_range<char *>(&v66, v36, v39, v40);
      v6 = v68;
      v41 = v67;
      if ( v68 == v67 )
      {
        std::vector<char>::_Emplace_reallocate<char>(&v66, v67, &v69);
        v6 = v68;
        v5 = v67;
      }
      else
      {
        *v67 = 0;
        v5 = v41 + 1;
        v67 = v5;
      }
      ++v14;
    }
    while ( v14 != v15 );
    v12 = *a1;
    v4 = v66;
  }
  LOWORD(v72) = v74;
  EncodeStringsList(v93, v12 + 160);
  v84 = 0LL;
  v42 = (_QWORD *)std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
  v67 = 0LL;
  v43 = 0;
  v83 = v42;
  v66 = v91;
  v44 = *a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v91[0]) = 0;
  LODWORD(v68) = 0;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v66, *(_DWORD *)(v44 + 152));
  v45 = *(_QWORD **)(*a1 + 144);
  v46 = (_QWORD *)*v45;
  v70 = (_QWORD *)*v45;
  while ( v46 != v45 )
  {
    v61 = v46 + 4;
    std::map<unsigned __int64,unsigned int>::_Try_emplace<unsigned __int64 const &,>(&v73, v78, v46 + 4);
    Base853Encoder::AppendVarInt((Base853Encoder *)&v66, *(_DWORD *)(v78[0] + 40LL));
    Base853Encoder::AppendVarInt((Base853Encoder *)&v66, *((_DWORD *)v61 + 2));
    v77 = (__int64 *)v61[2];
    if ( v77 )
    {
      std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const * const &,>(v75, v85, &v77);
      v62 = *(_DWORD *)(v85[0] + 40LL) + 1;
    }
    else
    {
      v62 = 0;
    }
    Base853Encoder::AppendVarInt((Base853Encoder *)&v66, v62);
    std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const___(
      v82,
      v71,
      v61);
    *(_DWORD *)(v71[0] + 48LL) = v43++;
    std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const________std::_Iterator_base0_::operator__(&v70);
    v46 = v70;
  }
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v66);
  if ( HIDWORD(v67) )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v66);
  anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder(&v79);
  v47 = *(_QWORD *)(*a1 + 24);
  for ( i = *(_QWORD *)(*a1 + 16); ; i += 480LL )
  {
    v89 = 0LL;
    v51 = psz;
    if ( i == v47 )
      break;
    if ( v90 >= 0x10 )
      v51 = (LPCSTR *)psz[0];
    *(_BYTE *)v51 = 0;
    anonymous_namespace_::SequenceEncoder::Serialize(i, &v73, v82, psz);
    anonymous_namespace_::PackedStringArrayBuilder::Append(&v79, psz);
  }
  if ( v90 >= 0x10 )
    v51 = (LPCSTR *)psz[0];
  *(_BYTE *)v51 = 0;
  anonymous_namespace_::GlobalResourceCountersEncoder::Serialize(*a1 + 40, psz);
  anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 464LL), v87, v86);
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v64);
  }
  if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
  {
    LODWORD(v71[0]) = 0;
    v95 = v71;
    v53 = (const CHAR *)psz;
    v96 = 4LL;
    v97 = v86;
    v98 = 8LL;
    p_pSessionId = &pSessionId;
    v54 = *a1 + 176;
    v100 = 4LL;
    v101 = v54;
    if ( v90 >= 0x10 )
      v53 = psz[0];
    v102 = 16LL;
    v103 = v87;
    v104 = 8LL;
    TlgCreateSz(&pDesc, v53);
    v106 = &v72;
    v107 = 2LL;
    v108 = v4;
    v109 = (_DWORD)v5 - (_DWORD)v4;
    v110 = 0;
    *v80 = v79;
    v55 = v81 - (_WORD)v80;
    *v80 = v79;
    v111 = v80;
    v56 = v55;
    v57 = (const CHAR *)v93;
    if ( v93[3] >= (LPCSTR)0x10 )
      v57 = v93[0];
    v112 = v56;
    v113 = 0;
    TlgCreateSz(&v114, v57);
    v58 = (const CHAR *)v91;
    if ( si128.m128i_i64[1] >= 0x10uLL )
      v58 = v91[0];
    TlgCreateSz(&v115, v58);
    TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D7252, 0LL, 0LL, 0xDu, &pData);
  }
  std::vector<unsigned char>::_Tidy(&v80);
  std::string::_Tidy_deallocate(v91);
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase(
    (__int64)v82,
    v78,
    (_QWORD *)*v83,
    v83);
  std::_Deallocate<16,0>(v83, 56LL);
  std::string::_Tidy_deallocate(v93);
  std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::erase(
    v75,
    v78,
    *(_QWORD *)v75[0],
    v75[0]);
  std::_Deallocate<16,0>(v75[0], 48LL);
  if ( v4 )
    std::_Deallocate<16,0>(v4, v6 - (_BYTE *)v4);
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::erase(
    &v73,
    v78,
    *v73,
    v73);
  std::_Deallocate<16,0>(v73, 48LL);
  return std::string::_Tidy_deallocate(psz);
}

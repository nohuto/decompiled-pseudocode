/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::Serialize @ 0x18007C6B4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x18007C278 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18007C5AC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18007CF60 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18007D230 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8A44 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8A44.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1800C8BF8 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_ea_1800C8BF8.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0060 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 */

void __fastcall anonymous_namespace_::SequenceEncoder::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // rbx
  __int64 *v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // [rsp+30h] [rbp-20h] BYREF
  int v39; // [rsp+38h] [rbp-18h]
  int v40; // [rsp+3Ch] [rbp-14h]
  int v41; // [rsp+40h] [rbp-10h]
  __int64 v42; // [rsp+48h] [rbp-8h]
  __int64 v43; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v44; // [rsp+88h] [rbp+38h] BYREF

  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = a2;
  v6 = *(_DWORD *)a1;
  v38 = a4;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v6);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 4));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 8));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 12));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 16));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 20));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 24));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 28));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 32));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 36));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 40));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 44));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 48));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 52));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 56));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 60));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 64));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 68));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 72));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 76));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 80));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 84));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 88));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 92));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 96));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 100));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 104));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 108));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 112));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 116));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 120));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 124));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 128));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 132));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 136));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 140));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 144));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 148));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 152));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 156));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 160));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 164));
  v7 = *(_QWORD *)(a1 + 168);
  LODWORD(v8) = -1;
  if ( v7 >= 0xF424000000000LL )
    LODWORD(v9) = -1;
  else
    v9 = v7 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v9);
  v10 = *(_QWORD *)(a1 + 176);
  if ( v10 >= 0xF424000000000LL )
    LODWORD(v11) = -1;
  else
    v11 = v10 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v11);
  v12 = *(_QWORD *)(a1 + 184);
  if ( v12 >= 0xF424000000000LL )
    LODWORD(v13) = -1;
  else
    v13 = v12 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v13);
  v14 = *(_QWORD *)(a1 + 192);
  if ( v14 >= 0xF424000000000LL )
    LODWORD(v15) = -1;
  else
    v15 = v14 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v15);
  v16 = *(_QWORD *)(a1 + 200);
  if ( v16 >= 0xF424000000000LL )
    LODWORD(v17) = -1;
  else
    v17 = v16 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v17);
  v18 = *(_QWORD *)(a1 + 208);
  if ( v18 >= 0xF424000000000LL )
    LODWORD(v19) = -1;
  else
    v19 = v18 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v19);
  v20 = *(_QWORD *)(a1 + 216);
  if ( v20 >= 0xF424000000000LL )
    LODWORD(v21) = -1;
  else
    v21 = v20 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v21);
  v22 = *(_QWORD *)(a1 + 224);
  if ( v22 >= 0xF424000000000LL )
    LODWORD(v23) = -1;
  else
    v23 = v22 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v23);
  v24 = *(_QWORD *)(a1 + 232);
  if ( v24 >= 0xF424000000000LL )
    LODWORD(v25) = -1;
  else
    v25 = v24 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v25);
  v26 = *(_QWORD *)(a1 + 240);
  if ( v26 >= 0xF424000000000LL )
    LODWORD(v27) = -1;
  else
    v27 = v26 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v27);
  v28 = *(_QWORD *)(a1 + 248);
  if ( v28 >= 0xF424000000000LL )
    LODWORD(v29) = -1;
  else
    v29 = v28 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v29);
  v30 = *(_QWORD *)(a1 + 256);
  if ( v30 < 0xF424000000000LL )
    v8 = v30 / 0x3E8 / 0x3E8;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, v8);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 264));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 268));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 272));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 276));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 280));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 284));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 288));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 292));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 296));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 300));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 304));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 308));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 312));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 316));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 320));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 324));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 328));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 332));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 336));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 340));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 344));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 348));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 352));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 356));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 360));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 364));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 368));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 372));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 376));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 380));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 384));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 388));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 392));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 396));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 400));
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 404));
  anonymous_namespace_::SequenceEncoder::AppendIndexSet((Base853Encoder *)&v38, a1 + 408);
  anonymous_namespace_::SequenceEncoder::AppendIndexSet((Base853Encoder *)&v38, a1 + 424);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(a1 + 456));
  v31 = *(__int64 **)(a1 + 448);
  v32 = *v31;
  v43 = *v31;
  while ( (__int64 *)v32 != v31 )
  {
    v33 = *(__int64 **)(a3 + 8);
    v34 = v33;
    v35 = (__int64 *)v33[1];
    while ( !*((_BYTE *)v35 + 25) )
    {
      if ( (unsigned __int64)v35[4] >= *(_QWORD *)(v32 + 32) || *((_DWORD *)v35 + 10) >= *(_DWORD *)(v32 + 40) )
      {
        v33 = v35;
        v35 = (__int64 *)*v35;
      }
      else
      {
        v35 = (__int64 *)v35[2];
      }
    }
    if ( v33 == v34 || *(_QWORD *)(v32 + 32) < (unsigned __int64)v33[4] && *(_DWORD *)(v32 + 40) < *((_DWORD *)v33 + 10) )
    {
      v36 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0(a3);
      *(_WORD *)(v36 + 24) = 0;
      v37 = *(_OWORD *)(v32 + 32);
      *(_DWORD *)(v36 + 48) = 0;
      *(_OWORD *)(v36 + 32) = v37;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        a3,
        (unsigned int)&v44,
        (_DWORD)v33,
        v36 + 32,
        v36);
      v33 = v44;
    }
    Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *((_DWORD *)v33 + 12));
    Base853Encoder::AppendVarInt((Base853Encoder *)&v38, *(_DWORD *)(v32 + 48));
    std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v43);
    v32 = v43;
  }
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v38);
  if ( v40 )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v38);
}

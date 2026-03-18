/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x180040E84 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x180040FC8 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180041F80 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18004205C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 * Callees:
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800412FC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180041F48 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180041F80 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800C7B58 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, unsigned int a2)
{
  unsigned int i; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  char v8; // r14
  unsigned int v9; // r8d
  char v10; // bp
  char v11; // si
  char v12; // bl
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r8d

  for ( i = a2; i != (i & 0x7F); i >>= 7 )
  {
    Base853Encoder::EnsureZeroesAreSerialized(this);
    v27 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 2) |= ((unsigned __int8)i | 0x80) << (8 * (3 - v27));
    *((_DWORD *)this + 3) = v27 + 1;
    if ( v27 == 3 )
      Base853Encoder::EncodeBlock(this);
  }
  if ( i || *((_DWORD *)this + 3) )
  {
    v4 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v4 )
    {
      v25 = *(_QWORD *)this;
      v26 = v4 - 1;
      if ( v4 == 1 )
      {
        LOBYTE(v26) = 45;
        std::string::push_back(v25, v26);
      }
      else if ( v4 == 2 )
      {
        LOBYTE(v26) = 95;
        std::string::push_back(v25, v26);
      }
      else
      {
        LOBYTE(v26) = 61;
        std::string::push_back(v25, v26);
        Base853Encoder::AppendVarInt(this, v4);
      }
    }
    v5 = *((_DWORD *)this + 3);
    v6 = *((_DWORD *)this + 2) | ((unsigned __int8)i << (8 * (3 - v5++)));
    *((_DWORD *)this + 2) = v6;
    *((_DWORD *)this + 3) = v5;
    if ( v5 == 4 )
    {
      v7 = v6 / 0x55;
      v8 = a0123456789Abcd[v6 % 0x55];
      v9 = v6 / 0x55 / 0x55;
      v10 = a0123456789Abcd[v7 - 85 * v9];
      v11 = a0123456789Abcd[v9 % 0x55];
      v12 = a0123456789Abcd[v9 / 0x55 % 0x55];
      std::string::push_back(*(_QWORD *)this, (unsigned __int8)a0123456789Abcd[v9 / 0x55 / 0x55]);
      v13 = *(_QWORD **)this;
      v14 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      v15 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v14 >= v15 )
      {
        std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v13);
      }
      else
      {
        v13[2] = v14 + 1;
        if ( v15 >= 0x10 )
          v13 = (_QWORD *)*v13;
        *((_BYTE *)v13 + v14) = v12;
        *((_BYTE *)v13 + v14 + 1) = 0;
      }
      v16 = *(_QWORD **)this;
      v17 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      v18 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v17 >= v18 )
      {
        std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v16);
      }
      else
      {
        v16[2] = v17 + 1;
        if ( v18 >= 0x10 )
          v16 = (_QWORD *)*v16;
        *((_BYTE *)v16 + v17) = v11;
        *((_BYTE *)v16 + v17 + 1) = 0;
      }
      v19 = *(_QWORD **)this;
      v20 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      v21 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v20 >= v21 )
      {
        std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v19);
      }
      else
      {
        v19[2] = v20 + 1;
        if ( v21 >= 0x10 )
          v19 = (_QWORD *)*v19;
        *((_BYTE *)v19 + v20) = v10;
        *((_BYTE *)v19 + v20 + 1) = 0;
      }
      v22 = *(_QWORD **)this;
      v23 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      v24 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v23 >= v24 )
      {
        std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_(v22);
      }
      else
      {
        v22[2] = v23 + 1;
        if ( v24 >= 0x10 )
          v22 = (_QWORD *)*v22;
        *((_BYTE *)v22 + v23) = v8;
        *((_BYTE *)v22 + v23 + 1) = 0;
      }
      *((_QWORD *)this + 1) = 0LL;
    }
  }
  else
  {
    ++*((_DWORD *)this + 4);
  }
}

/*
 * XREFs of ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800DD0AC (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x1800DDC34 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800DDD78 (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800DDDFC (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800DEC24 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x1800DE778 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800DEC24 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800DEC80 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // edx
  __int64 v6; // rcx

  v2 = a2;
  if ( (_DWORD)a2 != (a2 & 0x7F) )
  {
    do
    {
      Base853Encoder::EnsureZeroesAreSerialized(this);
      a2 = *((unsigned int *)this + 3);
      *((_DWORD *)this + 2) |= ((unsigned __int8)v2 | 0x80) << (8 * (3 - a2));
      *((_DWORD *)this + 3) = a2 + 1;
      if ( (_DWORD)a2 == 3 )
        Base853Encoder::EncodeBlock(this);
      v2 >>= 7;
    }
    while ( v2 != (v2 & 0x7F) );
  }
  if ( !v2 && !*((_DWORD *)this + 3) )
  {
    ++*((_DWORD *)this + 4);
    return;
  }
  v4 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v6 = *(_QWORD *)this;
      LOBYTE(a2) = 45;
    }
    else
    {
      v6 = *(_QWORD *)this;
      if ( v4 != 2 )
      {
        LOBYTE(a2) = 61;
        std::string::push_back(v6, a2);
        Base853Encoder::AppendVarInt(this, v4);
        goto LABEL_6;
      }
      LOBYTE(a2) = 95;
    }
    std::string::push_back(v6, a2);
  }
LABEL_6:
  v5 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) |= (unsigned __int8)v2 << (8 * (3 - v5));
  *((_DWORD *)this + 3) = v5 + 1;
  if ( v5 == 3 )
    Base853Encoder::EncodeBlock(this);
}

/*
 * XREFs of ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x1800DEC24
 * Callers:
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x1800DD0AC (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x1800DDC34 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800DDDFC (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x1800DE960 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800DE674 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x1800DEC80 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

void __fastcall Base853Encoder::EnsureZeroesAreSerialized(Base853Encoder *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)this;
    if ( v2 == 1 )
    {
      LOBYTE(a2) = 45;
    }
    else
    {
      if ( v2 != 2 )
      {
        LOBYTE(a2) = 61;
        std::string::push_back(v4, a2);
        Base853Encoder::AppendVarInt(this, v2);
        return;
      }
      LOBYTE(a2) = 95;
    }
    std::string::push_back(v4, a2);
  }
}

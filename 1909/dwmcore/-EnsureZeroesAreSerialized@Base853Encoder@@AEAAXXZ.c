/*
 * XREFs of ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x180041F80
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize @ 0x180040E84 (_anonymous_namespace_--ProcessAttributionResourceCountersEncoder--Serialize.c)
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180041048 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18004205C (_anonymous_namespace_--GlobalResourceCountersEncoder--Serialize.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x180041CB0 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180041F48 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

void __fastcall Base853Encoder::EnsureZeroesAreSerialized(Base853Encoder *this)
{
  unsigned int v1; // edi
  _QWORD *v3; // rcx
  char v4; // dl

  v1 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  if ( v1 )
  {
    v3 = *(_QWORD **)this;
    if ( v1 == 1 )
    {
      v4 = 45;
    }
    else
    {
      if ( v1 != 2 )
      {
        std::string::push_back(v3, 61);
        Base853Encoder::AppendVarInt(this, v1);
        return;
      }
      v4 = 95;
    }
    std::string::push_back(v3, v4);
  }
}

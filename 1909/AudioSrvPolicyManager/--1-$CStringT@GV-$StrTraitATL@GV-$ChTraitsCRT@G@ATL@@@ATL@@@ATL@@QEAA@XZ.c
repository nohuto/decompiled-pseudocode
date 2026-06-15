/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000D520
 * Callers:
 *     _ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber_::_1_::dtor$0 @ 0x180035DE0 (_ApplicationSpecificEndpointInfo--DoesStringRepresentAPositiveNumber_--_1_--dtor$0.c)
 *     _TsSessionCreate_::_1_::dtor$17 @ 0x180035DF2 (_TsSessionCreate_--_1_--dtor$17.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x180036876 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x1800369FF (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x180037165 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x180037214 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$7 @ 0x180037226 (_TsSessionCreate_--_1_--dtor$7.c)
 *     _TsSessionCreate_::_1_::dtor$9 @ 0x180037238 (_TsSessionCreate_--_1_--dtor$9.c)
 *     _TsSessionCreate_::_1_::dtor$11 @ 0x18003724A (_TsSessionCreate_--_1_--dtor$11.c)
 *     _TsSessionCreate_::_1_::dtor$13 @ 0x18003725C (_TsSessionCreate_--_1_--dtor$13.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$0 @ 0x1800378DB (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$1 @ 0x1800378ED (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$0 @ 0x180037959 (_ATL--CSid--CSid_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$1 @ 0x18003796F (_ATL--CSid--CSid_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$2 @ 0x180037985 (_ATL--CSid--CSid_--_1_--dtor$2.c)
 *     _ATL::CSid::CSid_::_1_::dtor$3 @ 0x18003799B (_ATL--CSid--CSid_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$2 @ 0x180037AB0 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$2.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$3 @ 0x180037AC6 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$4 @ 0x180037ADC (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$4.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$5 @ 0x180037AF2 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}

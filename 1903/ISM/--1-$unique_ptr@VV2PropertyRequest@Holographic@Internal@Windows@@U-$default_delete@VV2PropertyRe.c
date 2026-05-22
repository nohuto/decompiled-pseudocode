/*
 * XREFs of ??1?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180151B0C
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest_::_1_::dtor$2 @ 0x180152FE9 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddDevicePropertyRequest_ea_180152FE9.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$2 @ 0x1801532B0 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddNodePropertyRequests_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180152A8C (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 */

__int64 __fastcall std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>::~unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()();
  return result;
}

/*
 * XREFs of ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x180152258
 * Callers:
 *     _Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest_::_1_::dtor$0 @ 0x180151454 (_Windows--Internal--Holographic--V2DevicePropertyRequest--V2DevicePropertyRequest_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::V2NodePropertyRequest::V2NodePropertyRequest_::_1_::dtor$0 @ 0x180151574 (_Windows--Internal--Holographic--V2NodePropertyRequest--V2NodePropertyRequest_--_1_--dtor$0.c)
 *     ??_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152D80 (--_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152DD0 (--_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180152E20 (--_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 26) == -2147023899;
  *(_QWORD *)this = &Windows::Internal::Holographic::V2PropertyRequest::`vftable';
  if ( v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      66LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    __debugbreak();
  }
  std::vector<unsigned char>::_Tidy((__int64)this + 80);
}

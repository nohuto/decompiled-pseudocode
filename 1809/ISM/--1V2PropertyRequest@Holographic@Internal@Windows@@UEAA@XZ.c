/*
 * XREFs of ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x180110D5C
 * Callers:
 *     ??_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180111210 (--_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1801116D0 (--_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180111780 (--_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     _Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest_::_1_::dtor$0 @ 0x180135A88 (_Windows--Internal--Holographic--V2DevicePropertyRequest--V2DevicePropertyRequest_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$3 @ 0x180135B75 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddNodePropertyRequests_--_1_--dtor$3.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  char *v8; // r8
  char *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 26) == -2147023899;
  *(_QWORD *)this = &Windows::Internal::Holographic::V2PropertyRequest::`vftable';
  if ( v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    JUMPOUT(0x180110DE0LL);
  }
  v6 = (char *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)(*((_QWORD *)this + 12) - (_QWORD)v6);
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v8 = (char *)*((_QWORD *)v6 - 1);
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v9 = (char *)(v6 - v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v9, v7);
        __debugbreak();
      }
      v6 = v8;
    }
    operator delete(v6, v7);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}

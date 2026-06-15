/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002C020
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029F94 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002A17C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002AAD4 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002AF8C (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18002D730 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002DBD0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18002DE60 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180040910 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // bl
  unsigned __int8 v5; // r9
  bool v6; // bl
  DWORD SecurityDescriptorLength; // ebx
  void *v8; // rax
  int v10; // [rsp+20h] [rbp-138h]
  int v11; // [rsp+28h] [rbp-130h]
  int v12; // [rsp+30h] [rbp-128h]
  int v13; // [rsp+38h] [rbp-120h]
  int v14; // [rsp+40h] [rbp-118h]
  void **v15; // [rsp+60h] [rbp-F8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-F0h]
  void *v17[2]; // [rsp+70h] [rbp-E8h] BYREF
  char v18; // [rsp+80h] [rbp-D8h]
  int v19; // [rsp+84h] [rbp-D4h]
  __int128 v20; // [rsp+88h] [rbp-D0h]
  __int64 v21; // [rsp+98h] [rbp-C0h]
  int v22; // [rsp+A0h] [rbp-B8h]
  __int64 v23; // [rsp+A8h] [rbp-B0h]
  struct _SID_IDENTIFIER_AUTHORITY v24; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v25[128]; // [rsp+C0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v23 = -2LL;
  v15 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v24.Value = 0;
  *(_WORD *)&v24.Value[4] = 1280;
  v17[1] = 0LL;
  v18 = 0;
  v19 = 2;
  v17[0] = &ATL::CDacl::`vftable';
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v14 = 1366760775;
  v13 = -116925420;
  v12 = -1669870755;
  v11 = 1911656217;
  v10 = -1618417719;
  v2 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v25, &v24, 6u, 80LL, v10, v11, v12, v13, v14, 0LL, 0LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v17, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v25);
  if ( v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)0x80004005LL);
    ATL::CDacl::~CDacl(v17);
    v15 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v15);
    return 2147500037LL;
  }
  else
  {
    ATL::CSid::CSid(
      (ATL::CSid *)v25,
      (const struct _SID_IDENTIFIER_AUTHORITY *)&ATL::Sids::SecurityNTAuthority,
      1u,
      11LL);
    v6 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v17, (const struct ATL::CSid *)v25, 0x1000u, v5);
    ATL::CSid::~CSid((ATL::CSid *)v25);
    if ( v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)0x80004005LL);
      ATL::CDacl::~CDacl(v17);
      v15 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v15);
      return 2147500037LL;
    }
    else
    {
      ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v15, (const struct ATL::CDacl *)v17);
      ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v15);
      ATL::CDacl::~CDacl(v17);
      SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
      v8 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
      *a1 = v8;
      if ( v8 )
      {
        memcpy_0(v8, pSecurityDescriptor, SecurityDescriptorLength);
        v15 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v15);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
          (const char *)0x8007000ELL);
        v15 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v15);
        return 2147942414LL;
      }
    }
  }
}

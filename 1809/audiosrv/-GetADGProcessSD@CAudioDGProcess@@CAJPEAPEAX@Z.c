/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180007BDC
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800079F4 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18000891C (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180008B98 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180008D20 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180008FBC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000901C (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800090D8 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x1800142B0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  const struct ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // bl
  unsigned __int8 v5; // r9
  bool v6; // bl
  bool v7; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v9; // rax
  void **v11; // [rsp+60h] [rbp-F8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-F0h]
  _QWORD v13[2]; // [rsp+70h] [rbp-E8h] BYREF
  char v14; // [rsp+80h] [rbp-D8h]
  int v15; // [rsp+84h] [rbp-D4h]
  __int128 v16; // [rsp+88h] [rbp-D0h]
  __int64 v17; // [rsp+98h] [rbp-C0h]
  int v18; // [rsp+A0h] [rbp-B8h]
  __int64 v19; // [rsp+A8h] [rbp-B0h]
  struct _SID_IDENTIFIER_AUTHORITY v20; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v21[128]; // [rsp+C0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v19 = -2LL;
  v11 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v20.Value = 0;
  *(_WORD *)&v20.Value[4] = 1280;
  v13[1] = 0LL;
  v14 = 0;
  v15 = 2;
  v13[0] = &ATL::CDacl::`vftable';
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v2 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v21, &v20, 6u, 80LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v13, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v21);
  if ( v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)0x80004005LL,
      -1618417719);
    ATL::CDacl::~CDacl((ATL::CDacl *)v13);
    v11 = &ATL::CSecurityDesc::`vftable';
    ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
    return 2147500037LL;
  }
  else
  {
    ATL::CSid::CSid((ATL::CSid *)v21, (PSID_IDENTIFIER_AUTHORITY)&ATL::Sids::SecurityNTAuthority, 1u, 11LL);
    v6 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v13, (const struct ATL::CSid *)v21, 0x1000u, v5);
    ATL::CSid::~CSid((ATL::CSid *)v21);
    if ( v6 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)0x80004005LL,
        -1618417719);
      ATL::CDacl::~CDacl((ATL::CDacl *)v13);
      v11 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
      return 2147500037LL;
    }
    else
    {
      ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v11, (const struct ATL::CDacl *)v13, v7);
      ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v11);
      ATL::CDacl::~CDacl((ATL::CDacl *)v13);
      SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
      v9 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
      *a1 = v9;
      if ( v9 )
      {
        memcpy_0(v9, pSecurityDescriptor, SecurityDescriptorLength);
        v11 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
          (const char *)0x8007000ELL,
          -1618417719);
        v11 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
        return 2147942414LL;
      }
    }
  }
}

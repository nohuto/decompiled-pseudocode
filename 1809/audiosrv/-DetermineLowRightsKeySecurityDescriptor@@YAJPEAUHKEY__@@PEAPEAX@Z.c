/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180007220 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18000891C (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180008B98 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180008D20 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x180008FBC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000901C (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800090D8 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180009280 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x1800142B0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180043DE0 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043EE0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x1800468FC (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180046A38 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  signed int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  bool *v8; // r8
  bool *v9; // r9
  struct _ACL *PACL; // rax
  const struct _ACL *v11; // rbx
  const struct ATL::CSid *v12; // rax
  unsigned __int8 v13; // r9
  bool v14; // bl
  bool v15; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v17; // rax
  void **v19; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v22; // [rsp+78h] [rbp-150h]
  void **v23; // [rsp+80h] [rbp-148h]
  _QWORD v24[2]; // [rsp+88h] [rbp-140h] BYREF
  char v25; // [rsp+98h] [rbp-130h]
  int v26; // [rsp+9Ch] [rbp-12Ch]
  __int128 v27; // [rsp+A0h] [rbp-128h]
  __int64 v28; // [rsp+B0h] [rbp-118h]
  int v29; // [rsp+B8h] [rbp-110h]
  _QWORD v30[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v31; // [rsp+D0h] [rbp-F8h]
  int v32; // [rsp+D4h] [rbp-F4h]
  __int128 v33; // [rsp+D8h] [rbp-F0h]
  __int64 v34; // [rsp+E8h] [rbp-E0h]
  int v35; // [rsp+F0h] [rbp-D8h]
  __int64 v36; // [rsp+F8h] [rbp-D0h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v38[128]; // [rsp+110h] [rbp-B8h] BYREF

  v36 = -2LL;
  v23 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v4 = v6;
    v22 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        if ( KeySecurity > 0 )
          v5 = (unsigned __int16)KeySecurity | 0x80070000;
        else
          v5 = KeySecurity;
      }
      else
      {
        v19 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v30[1] = 0LL;
        v31 = 0;
        v32 = 2;
        v30[0] = &ATL::CDacl::`vftable';
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0;
        if ( v4 )
        {
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v19);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v19, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v19, (struct ATL::CDacl *)v30, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v30);
        v11 = PACL;
        if ( PACL )
        {
          EditAppContainerMask(PACL);
          v24[1] = 0LL;
          v25 = 0;
          v26 = 2;
          v24[0] = &ATL::CDacl::`vftable';
          v27 = 0LL;
          v28 = 0LL;
          v29 = 0;
          ATL::CDacl::Copy((ATL::CDacl *)v24, v11);
          v12 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v38, &pIdentifierAuthority, 6u);
          v14 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v24, v12, 0x10000000u, v13);
          ATL::CSid::~CSid((ATL::CSid *)v38);
          if ( v14 )
          {
            v5 = -2147467259;
            ATL::CDacl::~CDacl((ATL::CDacl *)v24);
            ATL::CDacl::~CDacl((ATL::CDacl *)v30);
            v19 = &ATL::CSecurityDesc::`vftable';
            ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v19);
            goto LABEL_13;
          }
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v19, (const struct ATL::CDacl *)v24, v15);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v19);
          ATL::CDacl::~CDacl((ATL::CDacl *)v24);
        }
        else
        {
          v5 = -2147024809;
        }
        ATL::CDacl::~CDacl((ATL::CDacl *)v30);
        if ( v5 >= 0 )
        {
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v17 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v17;
          if ( v17 )
            memcpy_0(v17, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
        }
        v19 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v19);
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
LABEL_13:
  operator delete(v4);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("DetermineLowRightsKeySecurityDescriptor", 0x266u, v5);
  return (unsigned int)v5;
}

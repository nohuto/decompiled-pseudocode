/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002F1E0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002D00C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18002D890 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002D964 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002DB10 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002DE1C (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18002DED8 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180030A60 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180030CF0 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180030F90 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180042D70 (-SetCount@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044E00 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800DD354 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, struct _ACL *a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  signed int v5; // esi
  struct _ACL *v6; // rax
  LSTATUS KeySecurity; // eax
  PSECURITY_DESCRIPTOR v8; // rcx
  void (__fastcall *v9)(void ***); // rax
  const struct _ACL *v10; // rbx
  struct _ACL *PACL; // rax
  const struct _ACL *v12; // rbx
  const struct ATL::CSid *v13; // rax
  unsigned __int8 v14; // r9
  bool v15; // bl
  void *v16; // rcx
  void *v17; // rcx
  DWORD SecurityDescriptorLength; // ebx
  void *v19; // rax
  HANDLE ProcessHeap; // rax
  void **v22; // [rsp+60h] [rbp-178h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-170h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-168h] BYREF
  WINBOOL bDaclPresent; // [rsp+74h] [rbp-164h] BYREF
  void **v26; // [rsp+78h] [rbp-160h] BYREF
  void *v27; // [rsp+80h] [rbp-158h]
  char v28; // [rsp+88h] [rbp-150h]
  int v29; // [rsp+8Ch] [rbp-14Ch]
  void *v30[2]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-138h]
  int v32; // [rsp+A8h] [rbp-130h]
  void **v33; // [rsp+B0h] [rbp-128h] BYREF
  void *Block; // [rsp+B8h] [rbp-120h]
  char v35; // [rsp+C0h] [rbp-118h]
  int v36; // [rsp+C4h] [rbp-114h]
  void *v37[2]; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-100h]
  int v39; // [rsp+E0h] [rbp-F8h]
  WINBOOL bDaclDefaulted; // [rsp+E8h] [rbp-F0h] BYREF
  PACL pDacl[5]; // [rsp+F0h] [rbp-E8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v42; // [rsp+118h] [rbp-C0h] BYREF
  _QWORD v43[16]; // [rsp+120h] [rbp-B8h] BYREF

  pDacl[3] = (PACL)-2LL;
  pDacl[2] = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _ACL *)operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v4 = (struct _SECURITY_DESCRIPTOR *)v6;
    pDacl[1] = v6;
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
        v22 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v42.Value = 0;
        *(_WORD *)&v42.Value[4] = 1280;
        v27 = 0LL;
        v28 = 0;
        v29 = 2;
        v26 = &ATL::CDacl::`vftable';
        *(_OWORD *)v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        v8 = 0LL;
        if ( v4 )
        {
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v22);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v22, v4);
          v8 = pSecurityDescriptor;
        }
        if ( v8 && GetSecurityDescriptorDacl(v8, &bDaclPresent, pDacl, &bDaclDefaulted) )
        {
          v9 = (void (__fastcall *)(void ***))v26[2];
          if ( bDaclPresent )
          {
            v10 = pDacl[0];
            v9(&v26);
            if ( v10 )
              ATL::CDacl::Copy((ATL::CDacl *)&v26, v10);
            else
              v28 = 1;
          }
          else
          {
            v9(&v26);
            v28 = 0;
          }
        }
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)&v26);
        v12 = PACL;
        if ( PACL )
        {
          EditAppContainerMask(PACL);
          Block = 0LL;
          v35 = 0;
          v36 = 2;
          v33 = &ATL::CDacl::`vftable';
          *(_OWORD *)v37 = 0LL;
          v38 = 0LL;
          v39 = 0;
          ATL::CDacl::Copy((ATL::CDacl *)&v33, v12);
          v13 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v43, &v42, 6u);
          v15 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v33, v13, 0x10000000u, v14);
          v43[0] = &ATL::CSid::`vftable';
          ATL::CStringData::Release((ATL::CStringData *)(v43[14] - 24LL));
          ATL::CStringData::Release((ATL::CStringData *)(v43[13] - 24LL));
          ATL::CStringData::Release((ATL::CStringData *)(v43[12] - 24LL));
          ATL::CStringData::Release((ATL::CStringData *)(v43[11] - 24LL));
          if ( v15 )
          {
            v5 = -2147467259;
            ATL::CDacl::~CDacl((void **)&v33);
            ATL::CDacl::~CDacl((void **)&v26);
            v22 = &ATL::CSecurityDesc::`vftable';
            ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v22);
            goto LABEL_22;
          }
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v22, (const struct ATL::CDacl *)&v33);
          ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v22);
          v33 = &ATL::CDacl::`vftable';
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(v37);
          free(Block);
          v16 = 0LL;
          Block = 0LL;
          if ( v37[0] )
          {
            ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
              v37[0],
              v37[1]);
            free(v37[0]);
            v16 = Block;
          }
          v33 = &ATL::CAcl::`vftable';
          free(v16);
        }
        else
        {
          v5 = -2147024809;
        }
        v26 = &ATL::CDacl::`vftable';
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(v30);
        free(v27);
        v17 = 0LL;
        v27 = 0LL;
        if ( v30[0] )
        {
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
            v30[0],
            v30[1]);
          free(v30[0]);
          v17 = v27;
        }
        v26 = &ATL::CAcl::`vftable';
        free(v17);
        if ( v5 >= 0 )
        {
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v19 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = (struct _ACL)v19;
          if ( v19 )
            memcpy_0(v19, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
        }
        v22 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v22);
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
LABEL_22:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("DetermineLowRightsKeySecurityDescriptor", 604, v5);
  return (unsigned int)v5;
}

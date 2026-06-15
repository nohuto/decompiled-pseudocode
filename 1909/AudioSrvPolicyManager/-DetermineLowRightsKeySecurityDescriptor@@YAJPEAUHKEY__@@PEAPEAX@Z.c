/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032100
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18002E7A8 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002A544 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18002FDAC (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18002FF70 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180030158 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800303DC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180030470 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800306C4 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800314AC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18003165C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180031980 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003200C (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18003281C (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800328A8 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034A98 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180035993 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY a1, void **a2)
{
  void *v3; // r15
  unsigned int v4; // ebx
  void *v5; // rax
  LSTATUS KeySecurity; // eax
  void *v7; // rsi
  bool *v8; // r8
  bool *v9; // r9
  struct _ACL *PACL; // rsi
  ATL::CSid *v11; // rdx
  PSECURITY_DESCRIPTOR v12; // rsi
  void *v13; // rax
  void *v14; // r12
  unsigned __int64 SecurityDescriptorLength; // r12
  void *v16; // rax
  HANDLE ProcessHeap; // rax
  int Error; // ebx
  int v20; // ebx
  int v21; // ebx
  unsigned __int64 v22; // [rsp+20h] [rbp-1B8h]
  WORD pControl[2]; // [rsp+60h] [rbp-178h] BYREF
  DWORD dwBufferLength; // [rsp+64h] [rbp-174h] BYREF
  void **v25; // [rsp+68h] [rbp-170h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-168h]
  DWORD cbSecurityDescriptor; // [rsp+78h] [rbp-160h] BYREF
  DWORD dwRevision; // [rsp+7Ch] [rbp-15Ch] BYREF
  void *v29; // [rsp+80h] [rbp-158h]
  void **v30; // [rsp+88h] [rbp-150h]
  _QWORD v31[2]; // [rsp+90h] [rbp-148h] BYREF
  char v32; // [rsp+A0h] [rbp-138h]
  int v33; // [rsp+A4h] [rbp-134h]
  __int128 v34; // [rsp+A8h] [rbp-130h]
  __int64 v35; // [rsp+B8h] [rbp-120h]
  int v36; // [rsp+C0h] [rbp-118h]
  _QWORD v37[2]; // [rsp+C8h] [rbp-110h] BYREF
  char v38; // [rsp+D8h] [rbp-100h]
  int v39; // [rsp+DCh] [rbp-FCh]
  __int128 v40; // [rsp+E0h] [rbp-F8h]
  __int64 v41; // [rsp+F0h] [rbp-E8h]
  int v42; // [rsp+F8h] [rbp-E0h]
  __int64 v43; // [rsp+100h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY v44; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v45[128]; // [rsp+120h] [rbp-B8h] BYREF

  v43 = -2LL;
  v30 = a2;
  cbSecurityDescriptor = 0;
  v3 = 0LL;
  v4 = 0;
  if ( RegGetKeySecurity(HKEY_CURRENT_USER, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v5 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v5;
    v29 = v5;
    if ( v5 )
    {
      KeySecurity = RegGetKeySecurity(HKEY_CURRENT_USER, 4u, v5, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        v4 = (unsigned __int16)KeySecurity | 0x80070000;
        if ( KeySecurity <= 0 )
          v4 = KeySecurity;
      }
      else
      {
        v25 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v44.Value = 0;
        *(_WORD *)&v44.Value[4] = 1280;
        v37[1] = 0LL;
        v38 = 0;
        v39 = 2;
        v37[0] = &ATL::CDacl::`vftable';
        v40 = 0LL;
        v41 = 0LL;
        v42 = 0;
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v25);
        dwBufferLength = GetSecurityDescriptorLength(v3);
        v7 = malloc(dwBufferLength);
        pSecurityDescriptor = v7;
        if ( !v7 )
          ATL::AtlThrowImpl(-2147024882);
        if ( !GetSecurityDescriptorControl(v3, pControl, &dwRevision) )
        {
          Error = ATL::AtlHresultFromLastError();
          free(v7);
          pSecurityDescriptor = 0LL;
          ATL::AtlThrowImpl(Error);
        }
        if ( (pControl[0] & 0x8000u) == 0 )
        {
          if ( !MakeSelfRelativeSD(v3, v7, &dwBufferLength) )
          {
            v20 = ATL::AtlHresultFromLastError();
            free(v7);
            pSecurityDescriptor = 0LL;
            ATL::AtlThrowImpl(v20);
          }
        }
        else
        {
          ATL::Checked::memcpy_s(
            (ATL::Checked *)v7,
            (void *)dwBufferLength,
            (unsigned __int64)v3,
            (const void *)dwBufferLength,
            v22);
        }
        ATL::CSecurityDesc::GetDacl((PSECURITY_DESCRIPTOR *)&v25, (struct ATL::CDacl *)v37, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v37);
        EditAppContainerMask(PACL);
        v31[1] = 0LL;
        v32 = 0;
        v33 = 2;
        v31[0] = &ATL::CDacl::`vftable';
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v31, PACL);
        v11 = ATL::CSid::CSid((ATL::CSid *)v45, &v44, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v31, v11);
        ATL::CSid::~CSid((ATL::CSid *)v45);
        if ( (_BYTE)PACL )
        {
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v25, (const struct ATL::CDacl *)v31);
          v12 = pSecurityDescriptor;
          if ( pSecurityDescriptor )
          {
            pControl[0] = 0;
            if ( !GetSecurityDescriptorControl(pSecurityDescriptor, pControl, &dwRevision) )
              ATL::AtlThrowImpl(-2147467259);
            if ( (pControl[0] & 0x8000) == 0 )
            {
              dwBufferLength = 0;
              MakeSelfRelativeSD(v12, 0LL, &dwBufferLength);
              if ( GetLastError() != 122 )
                ATL::AtlThrowLastWin32();
              v13 = malloc(dwBufferLength);
              v14 = v13;
              if ( !v13 )
                ATL::AtlThrowImpl(-2147024882);
              if ( !MakeSelfRelativeSD(v12, v13, &dwBufferLength) )
              {
                v21 = ATL::AtlHresultFromLastError();
                free(v14);
                ATL::AtlThrowImpl(v21);
              }
              ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v25);
              v12 = v14;
              pSecurityDescriptor = v14;
            }
          }
          ATL::CDacl::~CDacl((ATL::CDacl *)v31);
          ATL::CDacl::~CDacl((ATL::CDacl *)v37);
          SecurityDescriptorLength = GetSecurityDescriptorLength(v12);
          v16 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v16;
          if ( v16 )
            memcpy_0(v16, v12, SecurityDescriptorLength);
          else
            v4 = -2147024882;
          v25 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v25);
        }
        else
        {
          v4 = -2147467259;
          ATL::CDacl::~CDacl((ATL::CDacl *)v31);
          ATL::CDacl::~CDacl((ATL::CDacl *)v37);
          v25 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v25);
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  return v4;
}

/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800338EC
 * Callers:
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18003481C (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035308 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000FEC4 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002DB74 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180033188 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180033248 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180033F60 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180034224 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800359C8 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rsi
  __int64 v4; // rcx
  DWORD i; // r14d
  unsigned int v6; // r12d
  const struct _GUID *v7; // r15
  const struct _GUID *v8; // rbx
  char *v9; // rcx
  HANDLE v10; // rax
  ATL::CDacl::CAccessObjectAce *v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  HANDLE ProcessHeap; // rax
  ATL::CDacl::CAccessAce *v15; // rax
  __int64 v16; // [rsp+48h] [rbp-110h]
  __int64 v17; // [rsp+48h] [rbp-110h]
  int v18; // [rsp+50h] [rbp-108h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v20; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  __int64 v22; // [rsp+70h] [rbp-E8h]
  ATL::CDacl::CAccessObjectAce *v23; // [rsp+78h] [rbp-E0h]
  ATL::CDacl::CAccessAce *v24; // [rsp+80h] [rbp-D8h]
  DWORD pAclInformation[6]; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v26[9]; // [rsp+A0h] [rbp-B8h] BYREF
  char v27; // [rsp+ECh] [rbp-6Ch]
  int v28; // [rsp+F0h] [rbp-68h]
  __int64 v29; // [rsp+F8h] [rbp-60h]
  __int64 v30; // [rsp+100h] [rbp-58h]
  __int64 v31; // [rsp+108h] [rbp-50h]
  __int64 v32; // [rsp+110h] [rbp-48h]

  v22 = -2LL;
  v3 = this;
  v20 = this;
  pAcl = a2;
  if ( a2 )
  {
    v26[0] = &ATL::CSid::`vftable';
    v27 = 0;
    v28 = 7;
    v29 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v30 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v31 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    v32 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v18, 4u, AclRevisionInformation) )
    {
LABEL_34:
      ATL::AtlThrowLastWin32();
    }
    *((_DWORD *)v3 + 5) = v18;
    for ( i = 0; ; ++i )
    {
      if ( i >= pAclInformation[0] )
      {
        ATL::CSid::~CSid((ATL::CSid *)v26);
        return;
      }
      if ( !GetAce(pAcl, i, &pAce) )
        goto LABEL_34;
      v6 = *((_DWORD *)pAce + 1);
      if ( *(_BYTE *)pAce <= 1u )
      {
        ATL::CSid::operator=((__int64)v26, (char *)pAce + 8);
        try
        {
          ProcessHeap = GetProcessHeap();
          v15 = (ATL::CDacl::CAccessAce *)HeapAlloc(ProcessHeap, 0, 0x98uLL);
          v24 = v15;
          if ( v15 )
            v12 = ATL::CDacl::CAccessAce::CAccessAce(
                    v15,
                    (const struct ATL::CSid *)v26,
                    v6,
                    *((_BYTE *)pAce + 1),
                    *(_BYTE *)pAce == 0);
          else
            v12 = 0LL;
          v17 = v12;
        }
        catch ( ... )
        {
          v12 = v17;
          v3 = v20;
        }
      }
      else
      {
        if ( (unsigned __int8)(*(_BYTE *)pAce - 5) > 1u )
          continue;
        v7 = 0LL;
        v8 = 0LL;
        v9 = (char *)pAce + 44;
        if ( (*((_DWORD *)pAce + 2) & 1) != 0 )
          v7 = (const struct _GUID *)((char *)pAce + 12);
        else
          v9 = (char *)pAce + 28;
        if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
          v8 = (const struct _GUID *)((char *)pAce + (v7 != 0LL ? 28LL : 12LL));
        else
          v9 -= 16;
        ATL::CSid::operator=((__int64)v26, v9);
        v10 = GetProcessHeap();
        v11 = (ATL::CDacl::CAccessObjectAce *)HeapAlloc(v10, 0, 0xA8uLL);
        try
        {
          v23 = v11;
          if ( v11 )
            v12 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                    v11,
                    (const struct ATL::CSid *)v26,
                    v6,
                    *((_BYTE *)pAce + 1),
                    *(_BYTE *)pAce == 5,
                    v7,
                    v8);
          else
            v12 = 0LL;
          v16 = v12;
        }
        catch ( ... )
        {
          v12 = v16;
          v3 = v20;
        }
      }
      if ( !v12
        || (v13 = *((_QWORD *)v3 + 4), v13 >= *((_QWORD *)v3 + 5))
        && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
              (__int64)v3 + 24,
              v13 + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v13) = v12;
      ++*((_QWORD *)v3 + 4);
    }
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
      v4,
      *((_QWORD *)v3 + 4));
    free(*((void **)v3 + 3));
    *((_QWORD *)v3 + 3) = 0LL;
  }
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  *((_BYTE *)v3 + 16) = 1;
}

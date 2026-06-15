/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180043EE0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180043DE0 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180008D20 (--1CSid@ATL@@UEAA@XZ.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@XZ @ 0x180043E68 (--0CSid@ATL@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180046B9C (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800CE66C (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800CEBDC (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800CEFB4 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800CF018 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800CF03C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rsi
  DWORD v4; // r12d
  unsigned int v5; // r14d
  char *v6; // rbx
  int *v7; // rcx
  __int64 v8; // rdi
  int *v9; // rcx
  __int64 v10; // rdi
  int *v11; // rcx
  __int64 v12; // rdi
  int *v13; // rcx
  __int64 v14; // rdi
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r13
  volatile signed __int32 *v20; // rdi
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v22; // r15
  volatile signed __int32 *v23; // rdi
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v25; // r15
  volatile signed __int32 *v26; // rdi
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v28; // r15
  DWORD v29; // eax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  size_t v32; // rdx
  size_t v33; // r14
  void *v34; // rax
  void *v35; // r15
  void *v36; // rcx
  size_t v37; // r8
  void *v38; // rax
  const struct _GUID *v39; // rdi
  const struct _GUID *v40; // rbx
  struct _SID *v41; // rdx
  int v42; // r9d
  __int64 v43; // rbx
  ATL::CDacl::CAccessObjectAce *v44; // rax
  __int64 v45; // rax
  int Error; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  rsize_t v49; // r9
  __int64 v50; // rax
  __int64 v51; // rcx
  rsize_t v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  rsize_t v55; // r9
  int v56; // eax
  bool v57; // [rsp+40h] [rbp-128h]
  char v58; // [rsp+41h] [rbp-127h]
  DWORD v59; // [rsp+44h] [rbp-124h]
  __int64 v60; // [rsp+48h] [rbp-120h] BYREF
  int v61; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v62; // [rsp+54h] [rbp-114h]
  LPVOID pAce; // [rsp+58h] [rbp-110h] BYREF
  ATL::CDacl *v64; // [rsp+60h] [rbp-108h]
  char *v65; // [rsp+68h] [rbp-100h]
  PACL pAcl; // [rsp+70h] [rbp-F8h]
  __int64 v67; // [rsp+78h] [rbp-F0h]
  ATL::CDacl::CAccessObjectAce *v68; // [rsp+80h] [rbp-E8h]
  _QWORD *v69; // [rsp+88h] [rbp-E0h]
  char *v70; // [rsp+90h] [rbp-D8h]
  char v71[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+A8h] [rbp-C0h] BYREF
  char v73; // [rsp+ECh] [rbp-7Ch]
  int v74; // [rsp+F0h] [rbp-78h]
  void *Source; // [rsp+F8h] [rbp-70h] BYREF
  void *v76; // [rsp+100h] [rbp-68h] BYREF
  void *v77; // [rsp+108h] [rbp-60h] BYREF
  __int64 v78; // [rsp+110h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+120h] [rbp-48h] BYREF

  v67 = -2LL;
  v3 = this;
  v64 = this;
  pAcl = a2;
  if ( a2 )
  {
    ATL::CSid::CSid((ATL::CSid *)v71);
    v60 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v61, 4u, AclRevisionInformation) )
    {
LABEL_56:
      ATL::AtlThrowLastWin32();
    }
    *((_DWORD *)v3 + 5) = v61;
    v4 = 0;
    v59 = 0;
    while ( v4 < pAclInformation[0] )
    {
      if ( !GetAce(pAcl, v4, &pAce) )
        goto LABEL_56;
      v5 = *((_DWORD *)pAce + 1);
      v62 = v5;
      if ( *(_BYTE *)pAce > 1u )
      {
        if ( (unsigned __int8)(*(_BYTE *)pAce - 5) <= 1u )
        {
          v39 = 0LL;
          v40 = 0LL;
          v41 = (struct _SID *)((char *)pAce + 44);
          v42 = *((_DWORD *)pAce + 2);
          if ( (v42 & 1) != 0 )
            v39 = (const struct _GUID *)((char *)pAce + 12);
          else
            v41 = (struct _SID *)((char *)pAce + 28);
          if ( (v42 & 2) != 0 )
          {
            v43 = 28LL;
            if ( !v39 )
              v43 = 12LL;
            v40 = (const struct _GUID *)((char *)pAce + v43);
          }
          else
          {
            v41 = (struct _SID *)((char *)v41 - 16);
          }
          ATL::CSid::operator=((ATL::CSid *)v71, v41);
          try
          {
            v44 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
            v68 = v44;
            if ( v44 )
              v45 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                      v44,
                      (const struct ATL::CSid *)v71,
                      v5,
                      *((_BYTE *)pAce + 1),
                      *(_BYTE *)pAce == 5,
                      v39,
                      v40);
            else
              v45 = 0LL;
            v60 = v45;
          }
          catch ( ... )
          {
            v45 = v60;
            v4 = v59;
            v3 = v64;
          }
          if ( !v45 )
LABEL_101:
            ATL::AtlThrowImpl(-2147024882);
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
            (char *)v3 + 24,
            &v60);
        }
      }
      else
      {
        v6 = (char *)pAce + 8;
        if ( !v73 || pDestinationSid != v6 )
        {
          v74 = 7;
          v7 = (int *)((char *)Source - 24);
          v8 = *((_QWORD *)Source - 3);
          if ( *((_DWORD *)Source - 4) )
          {
            if ( v7[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v7);
              Source = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Source, 0);
            }
          }
          v9 = (int *)((char *)v76 - 24);
          v10 = *((_QWORD *)v76 - 3);
          if ( *((_DWORD *)v76 - 4) )
          {
            if ( v9[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v9);
              v76 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v76, 0);
            }
          }
          v11 = (int *)((char *)v77 - 24);
          v12 = *((_QWORD *)v77 - 3);
          if ( *((_DWORD *)v77 - 4) )
          {
            if ( v11[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v11);
              v77 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v77, 0);
            }
          }
          v13 = (int *)(v78 - 24);
          v14 = *(_QWORD *)(v78 - 24);
          if ( *(_DWORD *)(v78 - 24 + 8) )
          {
            if ( v13[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v13);
              v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v78, 0);
            }
          }
          v73 = 0;
          if ( !IsValidSid(v6) )
            goto LABEL_100;
          LengthSid = GetLengthSid(v6);
          if ( LengthSid > 0x44 )
            goto LABEL_100;
          v73 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v6) )
          {
            Error = ATL::AtlHresultFromLastError();
            v73 = 0;
            ATL::AtlThrowImpl(Error);
          }
          v74 = 8;
        }
        ProcessHeap = GetProcessHeap();
        v17 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
        try
        {
          v18 = v17;
          v69 = v17;
          if ( v17 )
          {
            v57 = *(_BYTE *)pAce == 0;
            v58 = *((_BYTE *)pAce + 1);
            *v17 = &ATL::CAcl::CAce::`vftable';
            v70 = (char *)(v17 + 1);
            v17[1] = &ATL::CSid::`vftable';
            *((_BYTE *)v17 + 84) = v73;
            *((_DWORD *)v17 + 22) = v74;
            v19 = v17 + 12;
            v65 = (char *)(v17 + 12);
            v20 = (volatile signed __int32 *)Source;
            v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Source - 3) + 32LL))(*((_QWORD *)Source - 3));
            if ( *((int *)v20 - 2) >= 0 && v21 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 - 3) )
            {
              v22 = v20 - 6;
              _InterlockedIncrement(v20 - 2);
            }
            else
            {
              v47 = (**v21)(v21, *((unsigned int *)v20 - 4), 2LL);
              v22 = (volatile signed __int32 *)v47;
              if ( !v47 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v48);
              *(_DWORD *)(v47 + 8) = *((_DWORD *)v20 - 4);
              v49 = 2LL * (*((_DWORD *)v20 - 4) + 1);
              memcpy_s((void *const)(v47 + 24), v49, (const void *const)v20, v49);
            }
            *v19 = v22 + 6;
            v65 = (char *)(v18 + 13);
            v23 = (volatile signed __int32 *)v76;
            v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v76 - 3) + 32LL))(*((_QWORD *)v76 - 3));
            if ( *((int *)v23 - 2) >= 0 && v24 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v23 - 3) )
            {
              v25 = v23 - 6;
              _InterlockedIncrement(v23 - 2);
            }
            else
            {
              v50 = (**v24)(v24, *((unsigned int *)v23 - 4), 2LL);
              v25 = (volatile signed __int32 *)v50;
              if ( !v50 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v51);
              *(_DWORD *)(v50 + 8) = *((_DWORD *)v23 - 4);
              v52 = 2LL * (*((_DWORD *)v23 - 4) + 1);
              memcpy_s((void *const)(v50 + 24), v52, (const void *const)v23, v52);
            }
            v18[13] = v25 + 6;
            v65 = (char *)(v18 + 14);
            v26 = (volatile signed __int32 *)v77;
            v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v77 - 3) + 32LL))(*((_QWORD *)v77 - 3));
            if ( *((int *)v26 - 2) >= 0 && v27 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v26 - 3) )
            {
              v28 = v26 - 6;
              _InterlockedIncrement(v26 - 2);
            }
            else
            {
              v53 = (**v27)(v27, *((unsigned int *)v26 - 4), 2LL);
              v28 = (volatile signed __int32 *)v53;
              if ( !v53 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v54);
              *(_DWORD *)(v53 + 8) = *((_DWORD *)v26 - 4);
              v55 = 2LL * (*((_DWORD *)v26 - 4) + 1);
              memcpy_s((void *const)(v53 + 24), v55, (const void *const)v26, v55);
            }
            v18[14] = v28 + 6;
            v18[15] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
            if ( v73 )
            {
              if ( !IsValidSid(pDestinationSid) )
                ATL::AtlThrowImpl(-2147024809);
              v29 = GetLengthSid(pDestinationSid);
              if ( !CopySid(v29, v18 + 2, pDestinationSid) )
              {
                v56 = ATL::AtlHresultFromLastError();
                ATL::AtlThrowImpl(v56);
              }
            }
            *((_DWORD *)v18 + 32) = v62;
            *((_BYTE *)v18 + 132) = v58;
            v18[17] = 0LL;
            *v18 = &ATL::CDacl::CAccessAce::`vftable';
            *((_BYTE *)v18 + 144) = v57;
          }
          else
          {
            v18 = 0LL;
          }
          v60 = (__int64)v18;
        }
        catch ( ... )
        {
          v18 = (_QWORD *)v60;
          v4 = v59;
          v3 = v64;
        }
        if ( !v18 )
          goto LABEL_101;
        v30 = *((_QWORD *)v3 + 4);
        v31 = *((_QWORD *)v3 + 5);
        if ( v30 >= v31 )
        {
          v32 = v30 + 1;
          if ( v30 + 1 > v31 )
          {
            v33 = *((int *)v3 + 12);
            if ( *((_QWORD *)v3 + 3) )
            {
              if ( !*((_DWORD *)v3 + 12) )
              {
                v33 = v31 >> 1;
                if ( v32 - v31 > v31 >> 1 )
                  v33 = v32 - v31;
              }
              v33 += v31;
              if ( v32 >= v33 )
                v33 = v30 + 1;
              v34 = calloc(v33, 8uLL);
              v35 = v34;
              if ( !v34 )
                goto LABEL_101;
              v36 = (void *)*((_QWORD *)v3 + 3);
              v37 = 8LL * *((_QWORD *)v3 + 4);
              if ( v37 )
              {
                if ( !v36 )
                {
                  *(_DWORD *)_o__errno(0LL) = 22;
                  invalid_parameter_noinfo();
LABEL_100:
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(v34, *((const void **)v3 + 3), v37);
                v36 = (void *)*((_QWORD *)v3 + 3);
              }
              free(v36);
              *((_QWORD *)v3 + 3) = v35;
            }
            else
            {
              if ( v33 <= v32 )
                v33 = v30 + 1;
              v38 = calloc(v33, 8uLL);
              *((_QWORD *)v3 + 3) = v38;
              if ( !v38 )
                goto LABEL_101;
            }
            *((_QWORD *)v3 + 5) = v33;
          }
        }
        v60 = 0LL;
        *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v30) = v18;
        ++*((_QWORD *)v3 + 4);
      }
      v59 = ++v4;
    }
    ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v60);
    ATL::CSid::~CSid((ATL::CSid *)v71);
  }
  else
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
  }
}

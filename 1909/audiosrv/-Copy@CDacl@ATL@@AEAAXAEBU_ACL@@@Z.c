/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180030F90
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C15D8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800DC7C4 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800DCE10 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800DD154 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800DD30C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800DD330 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // r14
  ATL::CDacl::CAccessObjectAce *v4; // rbx
  DWORD i; // r15d
  unsigned int v6; // esi
  char v7; // al
  char *v8; // rbx
  int *v9; // rcx
  __int64 v10; // rdi
  int *v11; // rcx
  __int64 v12; // rdi
  int *v13; // rcx
  __int64 v14; // rdi
  int *v15; // rcx
  __int64 v16; // rdi
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  _QWORD *v19; // rax
  ATL::CDacl::CAccessObjectAce *v20; // rdi
  _QWORD *v21; // r12
  volatile signed __int32 *v22; // rbx
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v24; // r13
  volatile signed __int32 *v25; // rbx
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v27; // r13
  volatile signed __int32 *v28; // rbx
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v30; // r13
  DWORD v31; // eax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  unsigned __int64 v35; // rdx
  size_t v36; // rbx
  void *v37; // rax
  void *v38; // r12
  void *v39; // rcx
  size_t v40; // r8
  void *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  const struct _GUID *v46; // rdi
  const struct _GUID *v47; // rbx
  struct _SID *v48; // rdx
  int v49; // r9d
  __int64 v50; // rbx
  ATL::CDacl::CAccessObjectAce *v51; // rax
  int Error; // eax
  __int64 v53; // rax
  __int64 v54; // rcx
  rsize_t v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  rsize_t v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  rsize_t v61; // r9
  int v62; // eax
  bool v63; // [rsp+40h] [rbp-128h]
  char v64; // [rsp+41h] [rbp-127h]
  ATL::CDacl::CAccessObjectAce *v65; // [rsp+48h] [rbp-120h] BYREF
  int v66; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v67; // [rsp+54h] [rbp-114h]
  LPVOID pAce; // [rsp+58h] [rbp-110h] BYREF
  ATL::CDacl *v69; // [rsp+60h] [rbp-108h]
  char *v70; // [rsp+68h] [rbp-100h]
  PACL pAcl; // [rsp+70h] [rbp-F8h]
  __int64 v72; // [rsp+78h] [rbp-F0h]
  ATL::CDacl::CAccessObjectAce *v73; // [rsp+80h] [rbp-E8h]
  _QWORD *v74; // [rsp+88h] [rbp-E0h]
  char *v75; // [rsp+90h] [rbp-D8h]
  void **v76; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+A8h] [rbp-C0h] BYREF
  char v78; // [rsp+ECh] [rbp-7Ch]
  int v79; // [rsp+F0h] [rbp-78h]
  void *Source; // [rsp+F8h] [rbp-70h] BYREF
  void *v81; // [rsp+100h] [rbp-68h] BYREF
  void *v82; // [rsp+108h] [rbp-60h] BYREF
  __int64 v83; // [rsp+110h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+120h] [rbp-48h] BYREF

  v72 = -2LL;
  v3 = this;
  v69 = this;
  pAcl = a2;
  if ( a2 )
  {
    v76 = &ATL::CSid::`vftable';
    v78 = 0;
    v79 = 7;
    Source = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v81 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v82 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v83 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    v4 = 0LL;
    v65 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    if ( !GetAclInformation(a2, &v66, 4u, AclRevisionInformation) )
      ATL::AtlThrowLastWin32();
    *((_DWORD *)v3 + 5) = v66;
    for ( i = 0; i < pAclInformation[0]; ++i )
    {
      if ( !GetAce(pAcl, i, &pAce) )
        ATL::AtlThrowLastWin32();
      v6 = *((_DWORD *)pAce + 1);
      v67 = v6;
      v7 = *(_BYTE *)pAce;
      if ( !*(_BYTE *)pAce || v7 == 1 )
      {
        v8 = (char *)pAce + 8;
        if ( !v78 || pDestinationSid != v8 )
        {
          v79 = 7;
          v9 = (int *)((char *)Source - 24);
          v10 = *((_QWORD *)Source - 3);
          if ( *((_DWORD *)Source - 4) )
          {
            if ( v9[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v9);
              Source = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&Source, 0LL);
            }
          }
          v11 = (int *)((char *)v81 - 24);
          v12 = *((_QWORD *)v81 - 3);
          if ( *((_DWORD *)v81 - 4) )
          {
            if ( v11[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v11);
              v81 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v81, 0LL);
            }
          }
          v13 = (int *)((char *)v82 - 24);
          v14 = *((_QWORD *)v82 - 3);
          if ( *((_DWORD *)v82 - 4) )
          {
            if ( v13[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v13);
              v82 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v82, 0LL);
            }
          }
          v15 = (int *)(v83 - 24);
          v16 = *(_QWORD *)(v83 - 24);
          if ( *(_DWORD *)(v83 - 24 + 8) )
          {
            if ( v15[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v15);
              v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v83, 0LL);
            }
          }
          v78 = 0;
          if ( !IsValidSid(v8) )
            ATL::AtlThrowImpl(-2147024809);
          LengthSid = GetLengthSid(v8);
          if ( LengthSid > 0x44 )
            ATL::AtlThrowImpl(-2147024809);
          v78 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v8) )
          {
            Error = ATL::AtlHresultFromLastError();
            v78 = 0;
            ATL::AtlThrowImpl(Error);
          }
          v79 = 8;
        }
        ProcessHeap = GetProcessHeap();
        v19 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
        try
        {
          v20 = (ATL::CDacl::CAccessObjectAce *)v19;
          v74 = v19;
          if ( v19 )
          {
            v63 = *(_BYTE *)pAce == 0;
            v64 = *((_BYTE *)pAce + 1);
            *v19 = &ATL::CAcl::CAce::`vftable';
            v75 = (char *)(v19 + 1);
            v19[1] = &ATL::CSid::`vftable';
            *((_BYTE *)v19 + 84) = v78;
            *((_DWORD *)v19 + 22) = v79;
            v21 = v19 + 12;
            v70 = (char *)(v19 + 12);
            v22 = (volatile signed __int32 *)Source;
            v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Source - 3) + 32LL))(*((_QWORD *)Source - 3));
            if ( *((int *)v22 - 2) >= 0 && v23 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v22 - 3) )
            {
              v24 = v22 - 6;
              _InterlockedIncrement(v22 - 2);
            }
            else
            {
              v53 = (**v23)(v23, *((unsigned int *)v22 - 4), 2LL);
              v24 = (volatile signed __int32 *)v53;
              if ( !v53 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v54);
              *(_DWORD *)(v53 + 8) = *((_DWORD *)v22 - 4);
              v55 = 2LL * (*((_DWORD *)v22 - 4) + 1);
              memcpy_s((void *const)(v53 + 24), v55, (const void *const)v22, v55);
            }
            *v21 = v24 + 6;
            v70 = (char *)v20 + 104;
            v25 = (volatile signed __int32 *)v81;
            v26 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v81 - 3) + 32LL))(*((_QWORD *)v81 - 3));
            if ( *((int *)v25 - 2) >= 0 && v26 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v25 - 3) )
            {
              v27 = v25 - 6;
              _InterlockedIncrement(v25 - 2);
            }
            else
            {
              v56 = (**v26)(v26, *((unsigned int *)v25 - 4), 2LL);
              v27 = (volatile signed __int32 *)v56;
              if ( !v56 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v57);
              *(_DWORD *)(v56 + 8) = *((_DWORD *)v25 - 4);
              v58 = 2LL * (*((_DWORD *)v25 - 4) + 1);
              memcpy_s((void *const)(v56 + 24), v58, (const void *const)v25, v58);
            }
            *((_QWORD *)v20 + 13) = v27 + 6;
            v70 = (char *)v20 + 112;
            v28 = (volatile signed __int32 *)v82;
            v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v82 - 3) + 32LL))(*((_QWORD *)v82 - 3));
            if ( *((int *)v28 - 2) >= 0 && v29 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v28 - 3) )
            {
              v30 = v28 - 6;
              _InterlockedIncrement(v28 - 2);
            }
            else
            {
              v59 = (**v29)(v29, *((unsigned int *)v28 - 4), 2LL);
              v30 = (volatile signed __int32 *)v59;
              if ( !v59 )
                ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v60);
              *(_DWORD *)(v59 + 8) = *((_DWORD *)v28 - 4);
              v61 = 2LL * (*((_DWORD *)v28 - 4) + 1);
              memcpy_s((void *const)(v59 + 24), v61, (const void *const)v28, v61);
            }
            *((_QWORD *)v20 + 14) = v30 + 6;
            *((_QWORD *)v20 + 15) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
            if ( v78 )
            {
              if ( !IsValidSid(pDestinationSid) )
                ATL::AtlThrowImpl(-2147024809);
              v31 = GetLengthSid(pDestinationSid);
              if ( !CopySid(v31, (char *)v20 + 16, pDestinationSid) )
              {
                v62 = ATL::AtlHresultFromLastError();
                ATL::AtlThrowImpl(v62);
              }
            }
            *((_DWORD *)v20 + 32) = v67;
            *((_BYTE *)v20 + 132) = v64;
            *((_QWORD *)v20 + 17) = 0LL;
            *(_QWORD *)v20 = &ATL::CDacl::CAccessAce::`vftable';
            *((_BYTE *)v20 + 144) = v63;
          }
          else
          {
            v20 = 0LL;
          }
          v65 = v20;
        }
        catch ( ... )
        {
          v20 = v65;
          v3 = v69;
        }
        if ( !v20 )
          ATL::AtlThrowImpl(-2147024882);
        v32 = *((_QWORD *)v3 + 4);
        v33 = *((_QWORD *)v3 + 5);
        if ( v32 >= v33 )
        {
          v34 = v32 + 1;
          if ( v32 + 1 > v33 )
          {
            if ( *((_QWORD *)v3 + 3) )
            {
              v35 = *((int *)v3 + 12);
              if ( !*((_DWORD *)v3 + 12) )
              {
                v35 = v33 >> 1;
                if ( v34 - v33 > v33 >> 1 )
                  v35 = v34 - v33;
              }
              v36 = v35 + v33;
              if ( v34 >= v35 + v33 )
                v36 = v32 + 1;
              v37 = calloc(v36, 8uLL);
              v38 = v37;
              if ( !v37 )
                goto LABEL_115;
              v39 = (void *)*((_QWORD *)v3 + 3);
              v40 = 8LL * *((_QWORD *)v3 + 4);
              if ( v40 )
              {
                if ( !v39 )
                {
                  *(_DWORD *)_o__errno(0LL) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(v37, *((const void **)v3 + 3), v40);
                v39 = (void *)*((_QWORD *)v3 + 3);
              }
              free(v39);
              *((_QWORD *)v3 + 3) = v38;
            }
            else
            {
              v36 = *((int *)v3 + 12);
              if ( v36 <= v34 )
                v36 = v32 + 1;
              v41 = calloc(v36, 8uLL);
              *((_QWORD *)v3 + 3) = v41;
              if ( !v41 )
LABEL_115:
                ATL::AtlThrowImpl(-2147024882);
            }
            *((_QWORD *)v3 + 5) = v36;
          }
        }
        v4 = 0LL;
        v65 = 0LL;
        *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v32) = v20;
        ++*((_QWORD *)v3 + 4);
      }
      else if ( (unsigned __int8)(v7 - 5) <= 1u )
      {
        v46 = 0LL;
        v47 = 0LL;
        v48 = (struct _SID *)((char *)pAce + 44);
        v49 = *((_DWORD *)pAce + 2);
        if ( (v49 & 1) != 0 )
          v46 = (const struct _GUID *)((char *)pAce + 12);
        else
          v48 = (struct _SID *)((char *)pAce + 28);
        if ( (v49 & 2) != 0 )
        {
          v50 = 28LL;
          if ( !v46 )
            v50 = 12LL;
          v47 = (const struct _GUID *)((char *)pAce + v50);
        }
        else
        {
          v48 = (struct _SID *)((char *)v48 - 16);
        }
        ATL::CSid::operator=((ATL::CSid *)&v76, v48);
        try
        {
          v51 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
          v73 = v51;
          if ( v51 )
            v51 = (ATL::CDacl::CAccessObjectAce *)ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                                                    v51,
                                                    (const struct ATL::CSid *)&v76,
                                                    v6,
                                                    *((_BYTE *)pAce + 1),
                                                    *(_BYTE *)pAce == 5,
                                                    v46,
                                                    v47);
          v65 = v51;
        }
        catch ( ... )
        {
          v51 = v65;
          v3 = v69;
        }
        if ( !v51 )
          ATL::AtlThrowImpl(-2147024882);
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
          (char *)v3 + 24,
          &v65);
        v4 = v65;
      }
    }
    if ( v4 )
      (**(void (__fastcall ***)(ATL::CDacl::CAccessObjectAce *, __int64))v4)(v4, 1LL);
    v76 = &ATL::CSid::`vftable';
    v42 = (_QWORD *)(v83 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
    v43 = (char *)v82 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v82 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 8LL))(*v43);
    v44 = (char *)v81 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
    v45 = (char *)Source - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Source - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v45 + 8LL))(*v45);
  }
  else
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
  }
}

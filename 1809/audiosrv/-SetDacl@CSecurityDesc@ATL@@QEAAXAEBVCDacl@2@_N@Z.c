/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800090D8
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800073C4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180007BDC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180009280 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180046604 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800CF018 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800CF03C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  BOOL v5; // r14d
  void *v6; // rax
  struct _ACL *PACL; // rax
  unsigned int v8; // eax
  __int64 v9; // rbp
  struct _ACL *v10; // rdi
  const struct _ACL *v11; // rax
  int Error; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  void *Block; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+34h] [rbp-34h]

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v4 = (void *)*((_QWORD *)this + 1);
  }
  Block = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, (PACL *)&Block, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v6 = malloc(0x28uLL);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      goto LABEL_28;
    if ( !InitializeSecurityDescriptor(v6, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v10 = 0LL;
    goto LABEL_15;
  }
  PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
  if ( *((_BYTE *)a2 + 16) )
  {
    v8 = 0;
  }
  else
  {
    if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    v8 = Size;
  }
  v9 = v8;
  v10 = (struct _ACL *)malloc(v8);
  if ( !v10 )
LABEL_28:
    ATL::AtlThrowImpl(-2147024882);
  v11 = ATL::CAcl::GetPACL(a2);
  if ( v9 )
  {
    if ( !v11 )
    {
      memset_0(v10, 0, (unsigned int)v9);
      *(_DWORD *)_o__errno(v13) = 22;
      invalid_parameter_noinfo();
      ATL::AtlThrowImpl(-2147024809);
    }
    memcpy_0(v10, v11, (unsigned int)v9);
  }
LABEL_15:
  if ( !*((_BYTE *)a2 + 16) && !v10 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v5, v10, 0) )
  {
    v14 = ATL::AtlHresultFromLastError();
    free(v10);
    ATL::AtlThrowImpl(v14);
  }
  free(Block);
}

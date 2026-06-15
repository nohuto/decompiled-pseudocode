/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002D964
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002EEB0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002DB10 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002DC64 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800DD30C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800DD330 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  BOOL v5; // r14d
  struct _ACL *PACL; // rax
  unsigned int v7; // eax
  __int64 v8; // rbp
  struct _ACL *v9; // rdi
  const struct _ACL *v10; // rax
  void *v11; // rax
  int Error; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
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
  pDacl = 0LL;
  v5 = 1;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    v11 = malloc(0x28uLL);
    *((_QWORD *)this + 1) = v11;
    if ( !v11 )
      goto LABEL_28;
    if ( !InitializeSecurityDescriptor(v11, 1u) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
  if ( *((_BYTE *)a2 + 16) )
  {
    v7 = 0;
  }
  else
  {
    if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    v7 = Size;
  }
  v8 = v7;
  v9 = (struct _ACL *)malloc(v7);
  if ( !v9 )
LABEL_28:
    ATL::AtlThrowImpl(-2147024882);
  v10 = ATL::CAcl::GetPACL(a2);
  if ( v8 )
  {
    if ( !v10 )
    {
      memset_0(v9, 0, (unsigned int)v8);
      *(_DWORD *)_o__errno(v13) = 22;
      invalid_parameter_noinfo();
      ATL::AtlThrowImpl(-2147024809);
    }
    memcpy_0(v9, v10, (unsigned int)v8);
  }
LABEL_14:
  if ( !*((_BYTE *)a2 + 16) && !v9 )
    v5 = 0;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v5, v9, 0) )
  {
    v14 = ATL::AtlHresultFromLastError();
    free(v9);
    ATL::AtlThrowImpl(v14);
  }
  free(pDacl);
}

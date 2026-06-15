/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002ADD4
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002AAD4 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800DD7AC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800DD7D0 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // r12
  DWORD v5; // ecx
  void *pOwner; // r15
  DWORD v7; // eax
  void *pPrimaryGroup; // r14
  DWORD v9; // eax
  struct _ACL *v10; // rsi
  DWORD v11; // eax
  struct _ACL *pSacl; // rdi
  void *v13; // rax
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+64h] [rbp-14h] BYREF
  DWORD dwRevision[4]; // [rsp+68h] [rbp-10h] BYREF
  WORD pControl; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      goto LABEL_25;
    if ( (pControl & 0x8000u) == 0 )
      return;
    v3 = (void *)*((_QWORD *)this + 1);
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize = 0;
    MakeAbsoluteSD(
      v3,
      0LL,
      &dwAbsoluteSecurityDescriptorSize,
      0LL,
      &dwDaclSize,
      0LL,
      &dwSaclSize,
      0LL,
      &dwOwnerSize,
      0LL,
      &dwPrimaryGroupSize);
    if ( GetLastError() != 122 )
      ATL::AtlThrowLastWin32();
    v4 = malloc(dwAbsoluteSecurityDescriptorSize);
    if ( !v4 )
      goto LABEL_25;
    v5 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v13 = malloc(dwOwnerSize);
      v5 = dwOwnerSize;
      pOwner = v13;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v5 && !pOwner )
      goto LABEL_25;
    v7 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = malloc(dwPrimaryGroupSize);
      v7 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v7 && !pPrimaryGroup
      || ((v9 = dwDaclSize) == 0
        ? (v10 = 0LL)
        : (struct _ACL *)(v10 = (struct _ACL *)malloc(dwDaclSize), v9 = dwDaclSize),
          v9 && !v10
       || ((v11 = dwSaclSize) != 0
         ? (struct _ACL *)(pSacl = (struct _ACL *)malloc(dwSaclSize), v11 = dwSaclSize)
         : (pSacl = 0LL),
           v11 && !pSacl)) )
    {
LABEL_25:
      ATL::AtlThrowImpl(-2147467259);
    }
    if ( !MakeAbsoluteSD(
            *((PSECURITY_DESCRIPTOR *)this + 1),
            v4,
            &dwAbsoluteSecurityDescriptorSize,
            v10,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(v4);
      free(pOwner);
      free(pPrimaryGroup);
      free(v10);
      free(pSacl);
      ATL::AtlThrowImpl(Error);
    }
    (*(void (__fastcall **)(ATL::CSecurityDesc *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)this + 1) = v4;
  }
}

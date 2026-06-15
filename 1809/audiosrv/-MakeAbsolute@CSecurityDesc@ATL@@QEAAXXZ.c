/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180046604
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800090D8 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x1800467AC (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800CF018 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800CF03C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // r12
  DWORD v4; // ecx
  void *pOwner; // r15
  DWORD v6; // eax
  void *pPrimaryGroup; // r14
  DWORD v8; // eax
  struct _ACL *v9; // rsi
  DWORD v10; // eax
  struct _ACL *pSacl; // rdi
  void *v12; // rax
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-10h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize[3]; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v16; // [rsp+B0h] [rbp+40h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+B8h] [rbp+48h] BYREF
  DWORD dwOwnerSize; // [rsp+C0h] [rbp+50h] BYREF
  DWORD dwSaclSize; // [rsp+C8h] [rbp+58h] BYREF

  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v16) )
      goto LABEL_25;
    if ( (v16 & 0x8000u) == 0 )
      return;
    v2 = this[1];
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize[0] = 0;
    MakeAbsoluteSD(
      v2,
      0LL,
      dwAbsoluteSecurityDescriptorSize,
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
    v3 = malloc(dwAbsoluteSecurityDescriptorSize[0]);
    if ( !v3 )
      goto LABEL_25;
    v4 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v12 = malloc(dwOwnerSize);
      v4 = dwOwnerSize;
      pOwner = v12;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v4 && !pOwner )
      goto LABEL_25;
    v6 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = malloc(dwPrimaryGroupSize);
      v6 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v6 && !pPrimaryGroup
      || ((v8 = dwDaclSize) == 0 ? (v9 = 0LL) : (struct _ACL *)(v9 = (struct _ACL *)malloc(dwDaclSize), v8 = dwDaclSize),
          v8 && !v9
       || ((v10 = dwSaclSize) != 0
         ? (struct _ACL *)(pSacl = (struct _ACL *)malloc(dwSaclSize), v10 = dwSaclSize)
         : (pSacl = 0LL),
           v10 && !pSacl)) )
    {
LABEL_25:
      ATL::AtlThrowImpl(-2147467259);
    }
    if ( !MakeAbsoluteSD(
            this[1],
            v3,
            dwAbsoluteSecurityDescriptorSize,
            v9,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(v3);
      free(pOwner);
      free(pPrimaryGroup);
      free(v9);
      free(pSacl);
      ATL::AtlThrowImpl(Error);
    }
    (*((void (__fastcall **)(PSECURITY_DESCRIPTOR *))*this + 1))(this);
    this[1] = v3;
  }
}

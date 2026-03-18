/*
 * XREFs of SeAccessCheckFromState @ 0x140003BC0
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1405C5A20 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x1406F75E4 (CmpCheckAdminAccess.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x140003CD0 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x140003D64 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  int v12; // ebp
  _BYTE *v14; // r8
  _BYTE v16[1184]; // [rsp+50h] [rbp-988h] BYREF
  _BYTE v17[1184]; // [rsp+4F0h] [rbp-4E8h] BYREF

  v12 = (int)SecurityDescriptor;
  memset(v17, 0, 0x498uLL);
  memset(v16, 0, 0x498uLL);
  SepTokenFromAccessInformation(PrimaryTokenInformation, v17);
  LODWORD(v14) = 0;
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v16);
    v14 = v16;
  }
  return SeAccessCheckFromStateEx(
           v12,
           (unsigned int)v17,
           (_DWORD)v14,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}

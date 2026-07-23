/*
 * XREFs of RtlSidDominates @ 0x14000AF00
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     SeIsTokenAssignableToProcess @ 0x14061E550 (SeIsTokenAssignableToProcess.c)
 *     SepAdjustPrivileges @ 0x140679C70 (SepAdjustPrivileges.c)
 *     SepValidLabelSubjectContext @ 0x1406DB094 (SepValidLabelSubjectContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v8; // si
  __int16 v9; // bp
  BOOLEAN v10; // al
  unsigned int v12; // edx

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v4 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v8 = HIBYTE(*(_WORD *)Sid1);
  v9 = HIBYTE(*(_WORD *)Sid2);
  v10 = 1;
  if ( *(_WORD *)Sid1 != *(_WORD *)Sid2 || memcmp(Sid1, Sid2, 4LL * (unsigned __int8)v8 + 8) )
  {
    v12 = (_BYTE)v8 ? *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v8 + 1) : 0;
    if ( (_BYTE)v9 && v12 < *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v9 + 1) )
      v10 = 0;
  }
  *Dominates = v10;
  return 0;
}

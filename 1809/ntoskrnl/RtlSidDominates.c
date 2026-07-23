/*
 * XREFs of RtlSidDominates @ 0x1400A9170
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     SepValidLabelSubjectContext @ 0x14060A6D0 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14060AD70 (SepAdjustPrivileges.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
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

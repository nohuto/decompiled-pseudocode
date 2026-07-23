/*
 * XREFs of SepConvertTokenPrivileges @ 0x1400142A0
 * Callers:
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 */

__int64 __fastcall SepConvertTokenPrivileges(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = SepConvertTokenPrivilegesToLuidAndAttributes(a1, a2 + 1);
  *a2 = result;
  return result;
}

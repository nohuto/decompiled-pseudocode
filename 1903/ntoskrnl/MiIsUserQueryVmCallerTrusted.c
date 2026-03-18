/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x14061A178
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsReferenceEffectiveToken @ 0x1405DEBD0 (PsReferenceEffectiveToken.c)
 *     SeTokenIsAdmin @ 0x14061A1E0 (SeTokenIsAdmin.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiIsUserQueryVmCallerTrusted(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rdi
  bool v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v2 = PsReferenceEffectiveToken(a1, &v6, &v4, &v5, 0LL);
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v1 = 1;
  ObfDereferenceObject(v2);
  return v1;
}

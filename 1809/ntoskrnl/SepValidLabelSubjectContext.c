/*
 * XREFs of SepValidLabelSubjectContext @ 0x14060A6D0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406131AC (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(__int64 *a1, void *a2, char a3)
{
  PSID SeMediumMandatorySid; // rdi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  BOOLEAN result; // al
  PSID Sid1; // [rsp+20h] [rbp-18h]
  BOOLEAN Dominates; // [rsp+40h] [rbp+8h] BYREF

  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  v6 = *a1;
  if ( !*a1 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, &Dominates) < 0 )
      return 0;
    if ( !Dominates )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( RtlSidDominates(Sid1, SeMediumMandatorySid, &Dominates) < 0 )
    return 0;
  result = Dominates;
  if ( !Dominates )
  {
    LOBYTE(v8) = 1;
    return SeSinglePrivilegeCheckEx(SeRelabelPrivilege, a1, v8);
  }
  return result;
}

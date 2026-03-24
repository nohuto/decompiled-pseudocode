/*
 * XREFs of SepValidLabelSubjectContext @ 0x1406096D0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091E20 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9230 (RtlSidDominates.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406121AC (SeSinglePrivilegeCheckEx.c)
 */

char __fastcall SepValidLabelSubjectContext(__int64 *a1, _DWORD *a2, char a3)
{
  _DWORD *SeMediumMandatorySid; // rdi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  char result; // al
  _DWORD *Buf1; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

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
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (_DWORD *)SeExports->SeMediumMandatorySid, (bool *)&v11) < 0 )
      return 0;
    if ( !v11 )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(Buf1, SeMediumMandatorySid, (bool *)&v11) < 0 )
    return 0;
  result = v11;
  if ( !v11 )
  {
    LOBYTE(v8) = 1;
    return SeSinglePrivilegeCheckEx(SeRelabelPrivilege, a1, v8);
  }
  return result;
}

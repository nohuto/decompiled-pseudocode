/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406BA398
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x140749B58 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SepIsChildTokenByPointer @ 0x1406BA548 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406BA5D4 (SepIsSiblingTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PERESOURCE *v5; // rbx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  void *v12; // r13
  char v13; // bl
  PSID Sid2; // [rsp+20h] [rbp-20h]
  PSID Sid1; // [rsp+30h] [rbp-10h]
  BOOLEAN Dominates; // [rsp+88h] [rbp+48h] BYREF
  char v17; // [rsp+90h] [rbp+50h] BYREF
  char v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v17 = 0;
  v18 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity();
  v8 = v5[138];
  ExReleaseResourceLite(v5[6]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity();
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(void **)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == 2 && v11 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( result >= 0 )
  {
    if ( !Dominates )
      goto LABEL_13;
    Dominates = 0;
    result = RtlSidDominatesForTrust(v8, v12, &Dominates);
    if ( result < 0 )
      return result;
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v17);
      v13 = v17;
      if ( !v17 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v18);
      }
    }
    else
    {
LABEL_13:
      v13 = v17;
    }
    if ( result >= 0 )
    {
      if ( v13 || v18 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

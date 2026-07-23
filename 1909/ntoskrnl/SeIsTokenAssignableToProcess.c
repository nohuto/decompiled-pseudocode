/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x14061E550
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x14074AF20 (PspAssignPrimaryToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14000AF00 (RtlSidDominates.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     SepCopyTokenIntegrity @ 0x1400E4838 (SepCopyTokenIntegrity.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x14061E6C8 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14061E7BC (SepIsChildTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  int v9; // r15d
  NTSTATUS result; // eax
  char v11; // bl
  char v12; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v14; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v12 = 0;
  v14 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity((__int64)v5);
  ExReleaseResourceLite(v5[6]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v8 = *(_DWORD *)(a1 + 192);
  v9 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 == 2 && v9 < 2 )
    return -1073741659;
  result = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v12);
      v11 = v12;
      if ( !v12 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v14);
      }
    }
    else
    {
      v11 = v12;
    }
    if ( result >= 0 )
    {
      if ( v11 || v14 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

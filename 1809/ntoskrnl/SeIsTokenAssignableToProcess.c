/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406B9118
 * Callers:
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x140748988 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepCopyTokenIntegrity @ 0x140091E20 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9210 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x1400AD180 (RtlSidDominatesForTrust.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     SepIsChildTokenByPointer @ 0x1406B92C8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406B9354 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PACCESS_TOKEN v5; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // r13
  char v13; // bl
  _DWORD *Buf2; // [rsp+20h] [rbp-20h]
  _DWORD *Buf1; // [rsp+30h] [rbp-10h]
  bool v16; // [rsp+88h] [rbp+48h] BYREF
  char v17; // [rsp+90h] [rbp+50h] BYREF
  char v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v17 = 0;
  v18 = 0;
  v16 = 0;
  v5 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)v5 + 6), 1u);
  SepCopyTokenIntegrity();
  v8 = *((_QWORD *)v5 + 138);
  ExReleaseResourceLite(*((PERESOURCE *)v5 + 6));
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
  v12 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == 2 && v11 < 2 )
    return 3221225637LL;
  result = RtlSidDominates(Buf1, Buf2, &v16);
  if ( (int)result >= 0 )
  {
    if ( !v16 )
      goto LABEL_13;
    v16 = 0;
    result = RtlSidDominatesForTrust(v8, v12, &v16);
    if ( (int)result < 0 )
      return result;
    if ( v16 )
    {
      result = SepIsChildTokenByPointer(a1, &v17);
      v13 = v17;
      if ( !v17 )
      {
        if ( (int)result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v18);
      }
    }
    else
    {
LABEL_13:
      v13 = v17;
    }
    if ( (int)result >= 0 )
    {
      if ( v13 || v18 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x1408A3BC0
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1408A3E70 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *a2 & 0xF;
  v3 = *a1 & 0xF;
  v5 = *a2 & 0xF;
  v6 = 104LL * (*(_BYTE *)a1 & 3);
  v7 = SepLogonSessions + 8 * v3;
  v19 = SepLogonSessions + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (unsigned int)v3 >= (unsigned int)v2 )
  {
    v11 = 104LL * (v5 & 3);
    ExAcquireResourceExclusiveLite((struct _ERESOURCE *)((char *)&SepRmDbLock + v11), 1u);
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v12 = v6;
  }
  else
  {
    ExAcquireResourceExclusiveLite((struct _ERESOURCE *)((char *)&SepRmDbLock + v6), 1u);
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = 104LL * (v5 & 3);
    v12 = v11;
  }
  ExAcquireResourceExclusiveLite((struct _ERESOURCE *)((char *)&SepRmDbLock + v12), 1u);
  v14 = 0;
  do
    v7 = *(_QWORD *)v7;
  while ( v7
       && (*(_QWORD *)(v7 + 160) != PsGetCurrentServerSilo()
        || *a1 != *(_DWORD *)(v7 + 8)
        || a1[1] != *(_DWORD *)(v7 + 12)) );
  v15 = v19;
  do
    v15 = *(_QWORD *)v15;
  while ( v15
       && (*(_QWORD *)(v15 + 160) != PsGetCurrentServerSilo()
        || *a2 != *(_DWORD *)(v15 + 8)
        || a2[1] != *(_DWORD *)(v15 + 12)) );
  if ( v7 && v15 )
  {
    v16 = *(_QWORD *)a2;
    *(_DWORD *)(v7 + 32) |= 0x40u;
    *(_QWORD *)(v7 + 168) = v16;
    v17 = *(_QWORD *)a1;
    *(_DWORD *)(v15 + 32) |= 0x40u;
    *(_QWORD *)(v15 + 168) = v17;
  }
  else
  {
    v14 = -1073741729;
  }
  ExReleaseResourceLite((struct _ERESOURCE *)((char *)&SepRmDbLock + v6));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExReleaseResourceLite((struct _ERESOURCE *)((char *)&SepRmDbLock + v11));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v14;
}

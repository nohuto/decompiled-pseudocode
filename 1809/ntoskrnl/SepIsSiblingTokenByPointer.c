/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x1406BA5D4
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepReleaseOrderedReadLocks @ 0x1400135BC (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryToken(Process);
  v7 = (unsigned __int64)v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = v6[3];
  v9 = v6[4];
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v6);
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v9 )
  {
    if ( v10 == v8 )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v7, a1);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 216);
        v13 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v13 + 32) & *(_BYTE *)(v12 + 32) & 0x40) != 0
          && v8 == *(_QWORD *)(v12 + 168)
          && v10 == *(_QWORD *)(v13 + 168) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v7, a1);
    }
  }
  return 0LL;
}

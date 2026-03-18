/*
 * XREFs of ViWdIrpBeforeCompletionRoutine @ 0x14097E1B8
 * Callers:
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 */

void __fastcall ViWdIrpBeforeCompletionRoutine(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax
  void **v4; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 67LL) >= *(_BYTE *)(*(_QWORD *)a1 + 29LL) )
  {
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( *((_BYTE *)v1 + 28) )
    {
      v3 = (_QWORD *)*v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (void **)v1[1], *v4 != v1) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      *((_BYTE *)v1 + 28) = 0;
      --ViWdIrpListLength;
    }
    KxReleaseSpinLock(&VfWdIrpListLock);
    ExFreeToNPagedLookasideList(&ViWdIrpLookasideList, v1);
    *(_QWORD *)a1 = 0LL;
  }
}

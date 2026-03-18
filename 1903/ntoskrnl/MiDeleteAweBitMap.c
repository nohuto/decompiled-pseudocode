/*
 * XREFs of MiDeleteAweBitMap @ 0x140896610
 * Callers:
 *     MiDeleteAweInfo @ 0x140896668 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x140896B9C (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(struct _KPROCESS *a1, _QWORD *a2)
{
  void *v4; // rcx
  __int64 v5; // rdx

  v4 = (void *)a2[1];
  v5 = 0LL;
  if ( v4 )
  {
    if ( a1 )
    {
      LOBYTE(v5) = (*a2 & 0x3FLL) != 0;
      PsReturnProcessNonPagedPoolQuota(a1, 8 * ((*a2 >> 6) + v5));
      v4 = (void *)a2[1];
    }
    ExFreePoolWithTag(v4, 0);
  }
}

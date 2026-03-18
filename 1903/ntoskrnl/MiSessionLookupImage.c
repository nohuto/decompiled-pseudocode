/*
 * XREFs of MiSessionLookupImage @ 0x1400172D0
 * Callers:
 *     MmIsSessionExecutionValid @ 0x140017320 (MmIsSessionExecutionValid.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14017A560 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x140181B9C (MiSessionReferenceImage.c)
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140708598 (MmIsDriverLoadedCurrentSession.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiSessionUnloadAllImages @ 0x140727E30 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x140745680 (MiUnloadApproved.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 88);
  while ( v1 )
  {
    if ( a1 > v1[6] )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( a1 >= (v1[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return v1;
      v1 = (_QWORD *)*v1;
    }
  }
  return 0LL;
}

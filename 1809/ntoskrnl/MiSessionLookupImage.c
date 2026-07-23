/*
 * XREFs of MiSessionLookupImage @ 0x14009DB08
 * Callers:
 *     MmIsSessionExecutionValid @ 0x14009DA50 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x1401734A8 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1401783DC (MiSessionReferenceImage.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiSessionUnloadAllImages @ 0x1406E1C64 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x14070F214 (MiUnloadApproved.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14071F460 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
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

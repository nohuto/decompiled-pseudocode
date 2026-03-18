/*
 * XREFs of MiSessionLookupImage @ 0x14009DBC8
 * Callers:
 *     MmIsSessionExecutionValid @ 0x14009DB10 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x14010978C (MiSharedVaToPartition.c)
 *     MiSessionRemoveImage @ 0x1401580E0 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x140173388 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1401782BC (MiSessionReferenceImage.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiSessionUnloadAllImages @ 0x1406E09E4 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x14070DF94 (MiUnloadApproved.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14071E1E0 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140726B8C (MmEnumerateSystemImages.c)
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

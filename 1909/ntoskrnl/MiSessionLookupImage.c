/*
 * XREFs of MiSessionLookupImage @ 0x1400176C0
 * Callers:
 *     MmIsSessionExecutionValid @ 0x140017710 (MmIsSessionExecutionValid.c)
 *     MiSharedVaToPartition @ 0x1400DDB3C (MiSharedVaToPartition.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x140168214 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14017AC50 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x14018228C (MiSessionReferenceImage.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14070A378 (MmIsDriverLoadedCurrentSession.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiSessionUnloadAllImages @ 0x1407291A0 (MiSessionUnloadAllImages.c)
 *     MiUnloadApproved @ 0x140747580 (MiUnloadApproved.c)
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

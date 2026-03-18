/*
 * XREFs of ??0_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1C001FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_Activations_@_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1C001B94C (--0_unnamed_type_Activations_@_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *__fastcall DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_(
        DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *this)
{
  DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_ *v2; // rdi
  __int64 v3; // rsi

  *(_QWORD *)this = 0LL;
  memset((char *)this + 8, 0, 0x21uLL);
  *((_DWORD *)this + 11) = 0;
  v2 = (DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_ *)((char *)this + 112);
  *((_QWORD *)this + 6) = 0LL;
  v3 = 64LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  *((_DWORD *)this + 26) = 0;
  do
  {
    DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_::_unnamed_type_Activations_(v2);
    v2 = (DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_Activations_ *)((char *)v2 + 72);
    --v3;
  }
  while ( v3 );
  return this;
}

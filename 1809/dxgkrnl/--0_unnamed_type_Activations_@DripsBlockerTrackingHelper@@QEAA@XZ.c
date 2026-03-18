/*
 * XREFs of ??0_unnamed_type_Activations_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x1C001AF80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

DripsBlockerTrackingHelper::_unnamed_type_Activations_ *__fastcall DripsBlockerTrackingHelper::_unnamed_type_Activations_::_unnamed_type_Activations_(
        DripsBlockerTrackingHelper::_unnamed_type_Activations_ *this)
{
  DripsBlockerTrackingHelper::_unnamed_type_Activations_ *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 0;
  memset((char *)this + 33, 0, 0x21uLL);
  result = this;
  *((_BYTE *)this + 66) = 0;
  return result;
}

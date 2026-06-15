/*
 * XREFs of ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x1800C97B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 30) + 80LL))(
           *((_QWORD *)this + 30),
           a2);
}

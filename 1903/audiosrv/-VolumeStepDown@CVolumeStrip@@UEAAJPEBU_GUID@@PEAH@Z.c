/*
 * XREFs of ?VolumeStepDown@CVolumeStrip@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800CA2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::VolumeStepDown(CVolumeStrip *this, const struct _GUID *a2, int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 30) + 176LL))(
           *((_QWORD *)this + 30),
           a2,
           a3);
}

/*
 * XREFs of ?VolumeStepUp@CVolumeStrip@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800CA310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::VolumeStepUp(CVolumeStrip *this, const struct _GUID *a2, int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 30) + 168LL))(
           *((_QWORD *)this + 30),
           a2,
           a3);
}

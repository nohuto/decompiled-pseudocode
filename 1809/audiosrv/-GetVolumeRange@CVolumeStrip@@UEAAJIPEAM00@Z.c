/*
 * XREFs of ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x1800BB130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::GetVolumeRange(CVolumeStrip *this, __int64 a2, float *a3, float *a4, float *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *, float *, float *))(**((_QWORD **)this + 30) + 152LL))(
           *((_QWORD *)this + 30),
           a2,
           a3,
           a4,
           a5);
}

/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C9D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::SetChannelVolumeLevelScalar(
        CVolumeStrip *this,
        __int64 a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, int *, const struct _GUID *, int *))(**((_QWORD **)this + 30)
                                                                                        + 128LL))(
           *((_QWORD *)this + 30),
           a2,
           a5,
           a4,
           a5);
}

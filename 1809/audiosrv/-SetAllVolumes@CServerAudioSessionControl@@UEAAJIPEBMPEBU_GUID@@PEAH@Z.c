/*
 * XREFs of ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C47D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetAllVolumes(
        CServerAudioSessionControl *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const float *, const struct _GUID *, int *))(**((_QWORD **)this + 9)
                                                                                               + 408LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4,
           a5);
}

/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x1800EE134
 * Callers:
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EDF90 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax
  _QWORD v6[8]; // [rsp+30h] [rbp-48h] BYREF

  v6[0] = off_18015C440;
  v6[7] = v6;
  (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(*(_QWORD *)this + 360LL))(this, v6);
  (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 11) + 160LL))(
    *((_QWORD *)this + 11),
    this);
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 144LL))(this);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v3 + 72))(v2, 0LL, v4, 0xFFFFFFFFLL);
}

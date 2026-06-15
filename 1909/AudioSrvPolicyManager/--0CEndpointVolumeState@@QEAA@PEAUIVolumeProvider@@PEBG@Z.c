/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x18002B5B4
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002B930 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D20C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x1800350A8 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CEndpointVolumeState *__fastcall CEndpointVolumeState::CEndpointVolumeState(
        CEndpointVolumeState *this,
        struct IVolumeProvider *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  float v10; // xmm1_4
  int v11; // eax
  int v12; // eax
  int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 1065353216;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v6 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  *((_QWORD *)this + 6) = this;
  v7 = *((_QWORD *)this + 3);
  *v6 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)a2 + 48LL))(
         a2,
         a3,
         v6);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, CEndpointVolumeState *))(*(_QWORD *)*v6 + 72LL))(*v6, this);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v9);
      *(_DWORD *)this = 0;
    }
    if ( *(_DWORD *)this == -8388608 )
      v10 = 0.0;
    else
      v10 = pow(10.0, *(float *)this / 20.0);
    *((float *)this + 1) = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 152LL))(*v6, &v16);
    if ( v11 >= 0 )
      *((_BYTE *)this + 8) = v16 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 232LL))(*v6, (char *)this + 40);
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v12);
    *((_BYTE *)this + 32) = v13 >= 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)(unsigned int)v8);
  }
  return this;
}

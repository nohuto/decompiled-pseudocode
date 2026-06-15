/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x18002E7EC
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EB00 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
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
  int v10; // eax
  int v11; // eax
  int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)this = 1065353216;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v6 = (_QWORD *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  *((_QWORD *)this + 5) = this;
  v7 = *((_QWORD *)this + 2);
  *v6 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)a2 + 48LL))(
         a2,
         a3,
         v6);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, CEndpointVolumeState *))(*(_QWORD *)*v6 + 80LL))(*v6, this);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v9);
      *(_DWORD *)this = 1065353216;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 152LL))(*v6, &v15);
    if ( v10 >= 0 )
      *((_BYTE *)this + 4) = v15 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 232LL))(*v6, (char *)this + 32);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v11);
    *((_BYTE *)this + 24) = v12 >= 0;
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

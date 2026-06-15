/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D20C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rcx
  int v9; // eax
  void *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *v15; // [rsp+50h] [rbp+10h] BYREF

  v4 = *a1;
  pv = 0LL;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, LPVOID *))(v4 + 32))(a1, a2, a3, &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( pv )
    {
      v12 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(pv, &v12) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 40LL))(v12, &v15);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF9,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v9);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v10 = v15;
    v8 = 0LL;
    v15 = 0LL;
    v7 = 0;
    *a4 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v6);
    v8 = v15;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( pv )
    CoTaskMemFree(pv);
  return v7;
}

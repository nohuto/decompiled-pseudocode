/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180031100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  LPVOID v8; // rax
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  LPVOID v11[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  LPVOID pv; // [rsp+60h] [rbp+10h] BYREF

  v11[1] = (LPVOID)-2LL;
  v11[0] = 0LL;
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)a1 + 32LL))(a1, a2, a3, v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v11[0] )
    {
      v10 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(v11[0], &v10) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &pv);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF9,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v7);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v8 = pv;
    pv = 0LL;
    *a4 = v8;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( v11[0] )
    CoTaskMemFree(v11[0]);
  return v6;
}

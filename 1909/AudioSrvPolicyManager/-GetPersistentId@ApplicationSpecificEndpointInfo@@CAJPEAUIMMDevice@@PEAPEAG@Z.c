/*
 * XREFs of ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18002F440
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002DB60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F604 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId(struct IMMDevice *a1, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 807LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_10;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v11 + 40LL))(
         v11,
         &PKEY_AudioEndpoint_PersistentId,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 812LL;
    goto LABEL_8;
  }
  if ( (_WORD)v7 == 31 )
  {
    v3 = CoAllocString(v8, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 816LL;
      goto LABEL_8;
    }
  }
  v4 = 0;
LABEL_10:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v4;
}

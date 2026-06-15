/*
 * XREFs of ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x180127548
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801274B0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x180127084 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::UpdateSpatialSessionState(
        __int64 a1,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // rcx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17[2]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  unsigned int *v19; // [rsp+78h] [rbp+17h]
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]
  __int64 *v22; // [rsp+88h] [rbp+27h]
  int v23; // [rsp+90h] [rbp+2Fh]
  int v24; // [rsp+94h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v17[1] = -2LL;
  v6 = *(_DWORD *)(a1 + 152);
  if ( (unsigned int)dword_1801B6350 > 5 )
  {
    v15 = a2;
    v19 = &v15;
    v20 = 4;
    v21 = 0;
    LODWORD(v16) = v6;
    v22 = &v16;
    v23 = 4;
    v24 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017AC7F, a3, a4, 4u, &pData);
    v6 = *(_DWORD *)(a1 + 152);
  }
  if ( a2 == v6 )
    return 0LL;
  *(_DWORD *)(a1 + 152) = a2;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         0LL,
         1LL,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 395LL;
      goto LABEL_8;
    }
    v10 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        v17[0] = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, v10, v17);
        v8 = v11;
        if ( v11 < 0 )
          break;
        v11 = CExclusiveModeListener::SetDeviceRendererSelectionMode(v12, v17[0], a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v14 = 401LL;
          goto LABEL_17;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
        if ( ++v10 >= v15 )
          goto LABEL_13;
      }
      v14 = 400LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
      goto LABEL_18;
    }
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
  v9 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return v8;
}

/*
 * XREFs of ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180165BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18015CC88 (-TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180165A28 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA-AUComputeScribbleSupportResult@@XZ.c)
 *     ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x1801ABFBC (-FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupportForCurrentFrame(
        CHwFullScreenRenderTarget *this,
        bool *a2)
{
  char v3; // al
  _BYTE *v5; // rax
  bool v6; // zf
  char v7; // cl
  bool v8; // al
  char v9; // dl
  __int64 v10; // r8
  int D3D12DeviceNoRef; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device *v15; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_BYTE *)this + 352);
  if ( !v3 )
  {
    v5 = CHwFullScreenRenderTarget::CheckComputeScribbleSupport((_QWORD *)this - 18, &v15);
    v6 = CCommonRegistryData::m_fEnableFrontBufferRenderChecks == 0;
    *(_WORD *)((char *)this + 353) = *(_WORD *)v5;
    v7 = *((_BYTE *)this + 354);
    if ( v6 )
      v8 = (v7 & 2) != 0;
    else
      v8 = (v7 & 0xA) == 10;
    v9 = *((_BYTE *)this + 353);
    if ( (v9 & 0x7F) != 0 || v9 < 0 || (v7 & 1) != 0 || v8 || (v3 = 1, (v7 & 4) != 0) )
      v3 = -1;
    *((_BYTE *)this + 352) = v3;
  }
  if ( v3 == -1 )
  {
    ComputeScribbleSupportResult::FireEtwEvent((CHwFullScreenRenderTarget *)((char *)this + 353));
    return 0LL;
  }
  if ( *((_QWORD *)this + 45) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      return 0LL;
    v10 = 1LL;
LABEL_32:
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v10);
    return 0LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 144LL))((char *)this - 144)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 264LL))(*((_QWORD *)this + 4)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      return 0LL;
    v10 = 4LL;
    goto LABEL_32;
  }
  D3D12DeviceNoRef = CD3DDeviceLevel1::TryGetD3D12DeviceNoRef(*((CD3DDeviceLevel1 **)this + 1), &v15);
  v12 = D3D12DeviceNoRef;
  if ( D3D12DeviceNoRef < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
      (const char *)(unsigned int)D3D12DeviceNoRef);
    return v12;
  }
  if ( !v15 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      return 0LL;
    v10 = 0LL;
    goto LABEL_32;
  }
  if ( !CCommonRegistryData::m_fEnableFrontBufferRenderChecks || *((_BYTE *)this + 356) || *((_BYTE *)this + 357) )
  {
    *a2 = 1;
    return 0LL;
  }
  *((_BYTE *)this + 358) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v10 = 5LL;
    goto LABEL_32;
  }
  return 0LL;
}

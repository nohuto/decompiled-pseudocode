/*
 * XREFs of ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180207CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FD3D0 (-TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180207B88 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA-AUComputeScribbleSupportResult@@XZ.c)
 *     ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x18022C5BC (-FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupportForCurrentFrame(
        CHwFullScreenRenderTarget *this,
        bool *a2)
{
  char v3; // al
  _BYTE *v5; // rax
  __int16 v6; // cx
  __int64 v7; // r8
  int D3D12DeviceNoRef; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_BYTE *)this + 352);
  if ( !v3 )
  {
    v5 = CHwFullScreenRenderTarget::CheckComputeScribbleSupport((_QWORD *)this - 26, &v12);
    v6 = *(_WORD *)v5;
    *(_WORD *)((char *)this + 353) = *(_WORD *)v5;
    if ( (v6 & 0x7F) != 0 || (v6 & 0x80u) != 0 || (v3 = 1, (v6 & 0x700) != 0) )
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
    v7 = 1LL;
LABEL_22:
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v7);
    return 0LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 26) + 144LL))((char *)this - 208)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 256LL))(*((_QWORD *)this + 4)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      return 0LL;
    v7 = 4LL;
    goto LABEL_22;
  }
  D3D12DeviceNoRef = CD3DDeviceLevel1::TryGetD3D12DeviceNoRef(*((CD3DDeviceLevel1 **)this + 1), &v12);
  v9 = D3D12DeviceNoRef;
  if ( D3D12DeviceNoRef < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
      (const char *)(unsigned int)D3D12DeviceNoRef);
    return v9;
  }
  if ( v12 )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v7 = 0LL;
    goto LABEL_22;
  }
  return 0LL;
}

/*
 * XREFs of ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FC61C
 * Callers:
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x1801FD1D8 (-ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801FBFA8 (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DDeviceLevel1@@@Z @ 0x1801FD8FC (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DD.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3D12DeviceNoRef(CD3DDeviceLevel1 *this, struct ID3D12Device **a2)
{
  int D3D12Resources; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device **v8; // [rsp+40h] [rbp+18h] BYREF

  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(this);
  if ( D3D12Resources < 0 )
  {
    v5 = 1265LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return (unsigned int)D3D12Resources;
  }
  D3D12Resources = CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::WaitForResult(*((_QWORD *)this + 88), &v8);
  if ( D3D12Resources < 0 )
  {
    v5 = 1268LL;
    goto LABEL_3;
  }
  result = 0LL;
  *a2 = *v8;
  return result;
}

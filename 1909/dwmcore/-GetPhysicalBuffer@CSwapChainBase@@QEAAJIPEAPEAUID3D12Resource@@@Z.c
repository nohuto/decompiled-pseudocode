/*
 * XREFs of ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180163BC8
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AC0A0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18015CA84 (-ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 */

__int64 __fastcall CSwapChainBase::GetPhysicalBuffer(CSwapChainBase *this, unsigned int a2, struct ID3D12Resource **a3)
{
  int *v3; // rsi
  __int64 v4; // r13
  int v8; // eax
  unsigned __int64 v9; // rbp
  int v10; // r15d
  __int64 v11; // rax
  bool v12; // cf
  SIZE_T v13; // rax
  char *v14; // rax
  char *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // r14
  CD3DDeviceLevel1 *v18; // rbp
  struct ID3D12Resource **v19; // r15
  struct ID3D12Resource *v20; // rcx
  int v21; // eax
  unsigned int v22; // ebp
  char *v23; // rcx
  __int64 *v24; // rbx
  struct ID3D12Resource *v25; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = (int *)((char *)this + 416);
  v4 = a2;
  if ( *((_QWORD *)this + 52) )
    goto LABEL_25;
  if ( (*((_DWORD *)this + 39) & 0x2000000) == 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
      (const char *)0x88982F81LL);
    return 2291675009LL;
  }
  v8 = (*(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 72LL))(this);
  v9 = *((unsigned int *)this + 40);
  v10 = v8;
  v27 = v8;
  v11 = 8 * v9;
  if ( !is_mul_ok(v9, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = (char *)operator new(v13);
  if ( v14 )
  {
    v15 = v14 + 8;
    *(_QWORD *)v14 = v9;
    `vector constructor iterator'(
      v14 + 8,
      8LL,
      (unsigned int)v9,
      (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *((_DWORD *)this + 40);
  v17 = 0LL;
  if ( !v16 )
  {
LABEL_16:
    if ( v3 == &v27 )
    {
      if ( v15 )
      {
        v24 = (__int64 *)(v15 - 8);
        v23 = v15;
        goto LABEL_24;
      }
    }
    else
    {
      v23 = *(char **)v3;
      *(_QWORD *)v3 = v15;
      if ( v23 )
      {
        v24 = (__int64 *)(v23 - 8);
LABEL_24:
        `vector destructor iterator'(
          v23,
          8LL,
          *v24,
          (void (__fastcall *)(char *))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
        operator delete[](v24);
      }
    }
LABEL_25:
    v25 = *(struct ID3D12Resource **)(*(_QWORD *)v3 + 8 * v4);
    *a3 = v25;
    ((void (__fastcall *)(struct ID3D12Resource *))v25->lpVtbl->AddRef)(v25);
    return 0LL;
  }
  while ( 1 )
  {
    v18 = *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL);
    v19 = (struct ID3D12Resource **)&v15[8 * (((int)v17 + v10) % v16)];
    v20 = *v19;
    *v19 = 0LL;
    if ( v20 )
      ((void (__fastcall *)(struct ID3D12Resource *))v20->lpVtbl->Release)(v20);
    v21 = CD3DDeviceLevel1::ShareToD3D12(
            v18,
            *(struct ID3D11Texture2D **)(*(_QWORD *)(*((_QWORD *)this + 48) + 8 * v17) + 128LL),
            v19);
    v22 = v21;
    if ( v21 < 0 )
      break;
    v16 = *((_DWORD *)this + 40);
    v17 = (unsigned int)(v17 + 1);
    v10 = v27;
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
    (const char *)(unsigned int)v21);
  if ( v15 )
  {
    `vector destructor iterator'(
      v15,
      8LL,
      *((_QWORD *)v15 - 1),
      (void (__fastcall *)(char *))wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>);
    operator delete[](v15 - 8);
  }
  return v22;
}

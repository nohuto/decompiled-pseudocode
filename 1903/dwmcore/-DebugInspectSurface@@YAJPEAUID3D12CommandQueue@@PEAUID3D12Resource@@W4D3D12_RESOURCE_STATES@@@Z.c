/*
 * XREFs of ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18021B9B8
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5B1C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x18021BE24 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     FlushAndWait @ 0x18021C204 (FlushAndWait.c)
 *     TransitionResourceBarrier @ 0x18021C674 (TransitionResourceBarrier.c)
 */

__int64 __fastcall DebugInspectSurface(
        struct ID3D12CommandQueue *a1,
        struct ID3D12Resource *a2,
        enum D3D12_RESOURCE_STATES a3)
{
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetDevice)(ID3D12CommandQueue *, const IID *const, void **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct ID3D12CommandQueueVtbl *v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, __int64 *); // r15
  int v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  void *v26; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v27[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-58h]
  struct ID3D12Resource *v30; // [rsp+B8h] [rbp-48h] BYREF
  int v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v34; // [rsp+ECh] [rbp-14h]
  int v35; // [rsp+F4h] [rbp-Ch]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+104h] [rbp+4h]
  __int64 v39; // [rsp+10Ch] [rbp+Ch]
  int v40; // [rsp+114h] [rbp+14h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  _QWORD v42[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v43[2]; // [rsp+130h] [rbp+30h] BYREF
  int v44; // [rsp+140h] [rbp+40h] BYREF
  __int128 v45; // [rsp+144h] [rbp+44h]
  __int128 v46; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v47[4]; // [rsp+168h] [rbp+68h]
  _BYTE v48[8]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v49; // [rsp+180h] [rbp+80h]
  unsigned int v50; // [rsp+188h] [rbp+88h]
  unsigned int v51; // [rsp+190h] [rbp+90h]
  enum DXGI_FORMAT v52; // [rsp+198h] [rbp+98h]
  _BYTE v53[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  lpVtbl = a1->lpVtbl;
  v21 = 0LL;
  GetDevice = lpVtbl->GetDevice;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v21);
  v7 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, __int64 *))GetDevice)(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 249LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v9);
    goto LABEL_24;
  }
  ((void (__fastcall *)(struct ID3D12Resource *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v48);
  v49 = 0LL;
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v21 + 304LL))(
    v21,
    v48,
    0LL,
    1LL,
    0LL,
    &v46,
    0LL,
    0LL,
    &v24);
  if ( (unsigned __int64)(v24 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = -2147024809;
    v10 = 262LL;
    v9 = 2147942487LL;
    goto LABEL_23;
  }
  v36 = v24;
  v45 = 0LL;
  v44 = 3;
  v34 = 0LL;
  v35 = 0;
  v39 = 1LL;
  v41 = 0LL;
  v33 = 1;
  v37 = 1;
  v38 = 65537LL;
  v40 = 1;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, int *, int, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 216LL))(
          v21,
          &v44,
          0LL,
          &v33,
          1024,
          0LL,
          &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
          &v22);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = a1->lpVtbl;
    v23 = 0LL;
    v20 = 0LL;
    v13 = (unsigned int *)((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _BYTE *))v12->GetDesc)(a1, v53);
    v14 = v21;
    v15 = *v13;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 72LL);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v17 = v16(v14, v15, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, &v23);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 96LL))(
              v21,
              0LL,
              v15,
              v23,
              0LL,
              &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
              &v20);
      v8 = v17;
      if ( v17 >= 0 )
      {
        memset_0(&v30, 0, 0x30uLL);
        v30 = a2;
        v31 = 0;
        v28 = v46;
        v32 = 0;
        v29 = *(_OWORD *)v47;
        v27[1] = 1LL;
        v27[0] = v22;
        TransitionResourceBarrier(v20, a2, 0LL, 2048LL);
        (*(void (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, _DWORD, struct ID3D12Resource **, _QWORD))(*(_QWORD *)v20 + 128LL))(
          v20,
          v27,
          0LL,
          0LL,
          0,
          &v30,
          0LL);
        TransitionResourceBarrier(v20, a2, 2048LL, 0LL);
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
        v8 = v17;
        if ( v17 >= 0 )
        {
          v25 = v20;
          ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a1->lpVtbl->ExecuteCommandLists)(
            a1,
            1LL,
            &v25);
          v17 = FlushAndWait(a1);
          v8 = v17;
          if ( v17 >= 0 )
          {
            v42[1] = v24;
            v42[0] = 0LL;
            v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, void **))(*(_QWORD *)v22 + 64LL))(
                    v22,
                    0LL,
                    v42,
                    &v26);
            v8 = v17;
            if ( v17 >= 0 )
            {
              DebugInspectSysMemSurface(v26, v50, v51, v52, v47[2]);
              v43[0] = 0LL;
              v43[1] = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v22 + 72LL))(v22, 0LL, v43);
              v8 = 0;
              goto LABEL_20;
            }
            v18 = 324LL;
          }
          else
          {
            v18 = 317LL;
          }
        }
        else
        {
          v18 = 312LL;
        }
      }
      else
      {
        v18 = 295LL;
      }
    }
    else
    {
      v18 = 293LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v17);
LABEL_20:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v23);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11C,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v11);
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
  return v8;
}

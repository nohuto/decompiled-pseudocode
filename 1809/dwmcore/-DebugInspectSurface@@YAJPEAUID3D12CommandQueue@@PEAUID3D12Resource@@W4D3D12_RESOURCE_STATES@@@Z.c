/*
 * XREFs of ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801E11F4
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801E1680 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     FlushAndWait @ 0x1801E185C (FlushAndWait.c)
 *     TransitionResourceBarrier @ 0x1801E1CB8 (TransitionResourceBarrier.c)
 */

__int64 __fastcall DebugInspectSurface(
        struct ID3D12CommandQueue *a1,
        struct ID3D12Resource *a2,
        enum D3D12_RESOURCE_STATES a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  unsigned int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  void *v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  int v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-58h]
  struct ID3D12Resource *v30; // [rsp+B8h] [rbp-48h] BYREF
  int v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  _QWORD v33[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v34; // [rsp+F8h] [rbp-8h]
  _QWORD v35[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v36[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v37[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  __int64 v40; // [rsp+13Ch] [rbp+3Ch]
  int v41; // [rsp+144h] [rbp+44h]
  int v42; // [rsp+14Ch] [rbp+4Ch]
  __int128 v43; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v44[4]; // [rsp+168h] [rbp+68h]
  _BYTE v45[8]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v46; // [rsp+180h] [rbp+80h]
  unsigned int v47; // [rsp+188h] [rbp+88h]
  unsigned int v48; // [rsp+190h] [rbp+90h]
  enum DXGI_FORMAT v49; // [rsp+198h] [rbp+98h]
  _BYTE v50[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v20 = 0LL;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v20);
  v5 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, __int64 *))a1->lpVtbl->GetDevice)(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 248LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v7);
    goto LABEL_24;
  }
  ((void (__fastcall *)(struct ID3D12Resource *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v45);
  v46 = 0LL;
  v23 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v20 + 304LL))(
    v20,
    v45,
    0LL,
    1LL,
    0LL,
    &v43,
    0LL,
    0LL,
    &v23);
  v9 = v23;
  if ( (unsigned __int64)(v23 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = -2147024809;
    v8 = 261LL;
    v7 = 2147942487LL;
    goto LABEL_23;
  }
  v33[0] = 3LL;
  v33[1] = 0LL;
  v34 = 0;
  memset_0(v37, 0, 0x38uLL);
  v37[0] = 1;
  v38 = v9;
  v39 = 1;
  v40 = 65537LL;
  v41 = 1;
  v42 = 1;
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _DWORD *, int, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 216LL))(
          v20,
          v33,
          0LL,
          v37,
          1024,
          0LL,
          &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
          &v22);
  v6 = v10;
  if ( v10 >= 0 )
  {
    lpVtbl = a1->lpVtbl;
    v21 = 0LL;
    v19 = 0LL;
    v12 = (unsigned int *)((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _BYTE *))lpVtbl->GetDesc)(a1, v50);
    v13 = v21;
    v14 = v20;
    v15 = *v12;
    v21 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 72LL))(
            v14,
            v15,
            &GUID_6102dee4_af59_4b09_b999_b44d73f09b24,
            &v21);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v19 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 96LL))(
              v20,
              0LL,
              v15,
              v21,
              0LL,
              &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
              &v19);
      v6 = v16;
      if ( v16 >= 0 )
      {
        memset_0(&v30, 0, 0x30uLL);
        v30 = a2;
        v31 = 0;
        v32 = 0;
        memset_0(&v26, 0, 0x30uLL);
        v26 = v22;
        v27 = 1;
        v28 = v43;
        v29 = *(_OWORD *)v44;
        TransitionResourceBarrier(v19, a2, 0LL, 2048LL);
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _DWORD, struct ID3D12Resource **, _QWORD))(*(_QWORD *)v19 + 128LL))(
          v19,
          &v26,
          0LL,
          0LL,
          0,
          &v30,
          0LL);
        TransitionResourceBarrier(v19, a2, 2048LL, 0LL);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 72LL))(v19);
        v6 = v16;
        if ( v16 >= 0 )
        {
          v24 = v19;
          ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a1->lpVtbl->ExecuteCommandLists)(
            a1,
            1LL,
            &v24);
          v16 = FlushAndWait(a1);
          v6 = v16;
          if ( v16 >= 0 )
          {
            v35[1] = v23;
            v35[0] = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, void **))(*(_QWORD *)v22 + 64LL))(
                    v22,
                    0LL,
                    v35,
                    &v25);
            v6 = v16;
            if ( v16 >= 0 )
            {
              DebugInspectSysMemSurface(v25, v47, v48, v49, v44[2]);
              v36[0] = 0LL;
              v36[1] = 0LL;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v22 + 72LL))(v22, 0LL, v36);
              v6 = 0;
              goto LABEL_20;
            }
            v17 = 323LL;
          }
          else
          {
            v17 = 316LL;
          }
        }
        else
        {
          v17 = 311LL;
        }
      }
      else
      {
        v17 = 294LL;
      }
    }
    else
    {
      v17 = 292LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v16);
LABEL_20:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v10);
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
  return v6;
}

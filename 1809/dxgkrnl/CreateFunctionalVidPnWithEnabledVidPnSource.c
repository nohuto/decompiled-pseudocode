/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0205D30
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00B835C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0204C20 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  struct D3DKMDT_HVIDPN__ *v8; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering; // edx
  int v19; // eax
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v21; // rax
  __int64 (__fastcall *v23)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v31; // r9
  __int64 v32; // rcx
  unsigned int *v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rdi
  unsigned int v48; // eax
  _QWORD *v49; // rax
  struct _DXGDMM_VIDPN_INTERFACE **v50; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v51; // [rsp+48h] [rbp-B8h]
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v54[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v55; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v56[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v57; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v58; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v59; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v60; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE **v61; // [rsp+A8h] [rbp-58h]
  char v62[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPN__ *v63; // [rsp+B8h] [rbp-48h]
  void (__fastcall *v64)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+D0h] [rbp-30h]
  unsigned int v67[16]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0LL;
  v11 = a3;
  v59 = (struct _DXGDMM_INTERFACE *)a1;
  v61 = a8;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v12 + 24) = 4195LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 4196LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v11 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 4197LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 4198LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 4199LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a8 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 4200LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  ScanLineOrdering = a6->ScanLineOrdering;
  v54[0] = 0;
  v19 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, v54);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v19 && (!v54[0] || (_DWORD)IntegerRefreshRate != v19 + 1) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v21[3] = a6->IntegerRefreshRate;
    v21[4] = a6->RefreshRate.Numerator;
    v21[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v23 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v55 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v62[0] = 0;
  *(_QWORD *)v56 = 0LL;
  v24 = v23(a2, v56, &v55);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 24) = a2;
LABEL_21:
    *(_QWORD *)(v27 + 32) = v26;
    v30 = (_QWORD *)v27;
LABEL_34:
    WdLogEvent5_WdError(v30);
    goto LABEL_36;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v62,
    *(__int64 *)v56,
    *((_QWORD *)v59 + 8),
    (__int64)a2);
  v8 = v63;
  v58 = 0LL;
  v57 = 0LL;
  v28 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v55)(
          v63,
          &v58,
          &v57);
  v26 = v28;
  if ( v28 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v27 + 24) = v8;
    goto LABEL_21;
  }
  v31 = v55;
  v54[0] = 0;
  v32 = 16LL;
  *(_QWORD *)v56 = 0LL;
  v33 = v67;
  while ( v32 )
  {
    *v33++ = -1;
    --v32;
  }
  v34 = PrepareUnpinnedPathsFromSource(
          v59,
          a2,
          v8,
          v31,
          v58,
          v57,
          v11,
          0,
          0,
          0,
          (unsigned __int64 *const)v56,
          (unsigned int (*)[16])v67,
          v54);
  v39 = v34;
  LODWORD(v26) = -1071774925;
  if ( v34 == -1071774925 || (LODWORD(v26) = -1071774886, v34 == -1071774886) )
  {
    v40 = WdLogNewEntry5_WdDmmEvent(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = v11;
    *(_QWORD *)(v40 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v40);
  }
  else if ( v34 >= 0 )
  {
    v42 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v59,
            (char *)a2,
            v8,
            v55,
            v58,
            v57,
            v11,
            *(unsigned __int64 *)v56,
            a6,
            v51,
            v52,
            v53,
            &v60);
    LODWORD(v26) = v42;
    if ( v42 >= 0 )
    {
      LODWORD(v26) = 0;
      v50 = v61;
      *a7 = v60;
      *v50 = v55;
      goto LABEL_36;
    }
    if ( v42 != -1071774970 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v49[3] = v11;
      v49[4] = a6->Width;
      v49[5] = a6->Height;
      v49[6] = a6->Format;
      v49[7] = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
      v30 = v49;
      goto LABEL_34;
    }
    v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
    v47[3] = a6->Width;
    v47[4] = a6->Height;
    v47[5] = a6->Format;
    v48 = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
    v47[7] = v11;
    v47[6] = v48;
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v36);
    v41[3] = v11;
    v41[4] = a2;
    v41[5] = v39;
    WdLogEvent5_WdError(v41);
    LODWORD(v26) = v39;
  }
LABEL_36:
  if ( v62[0] )
    v64(v65, v8);
  return (unsigned int)v26;
}

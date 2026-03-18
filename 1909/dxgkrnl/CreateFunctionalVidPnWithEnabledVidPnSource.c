/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0237D34
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB95C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01721C4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236C08 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
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
  __int64 ScanLineOrdering; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v23; // rax
  __int64 (__fastcall *v25)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v37; // r9
  __int64 v38; // rcx
  unsigned int *v39; // rdi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // rdi
  unsigned int v52; // eax
  _QWORD *v53; // rax
  struct _DXGDMM_VIDPN_INTERFACE **v54; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v55; // [rsp+48h] [rbp-B8h]
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v58[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v60[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v61; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v62; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v63; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v64; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE **v65; // [rsp+A8h] [rbp-58h]
  char v66[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPN__ *v67; // [rsp+B8h] [rbp-48h]
  void (__fastcall *v68)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+D0h] [rbp-30h]
  unsigned int v71[16]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0LL;
  v11 = a3;
  v63 = (struct _DXGDMM_INTERFACE *)a1;
  v65 = a8;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v12 + 24) = 4572LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 4573LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v11 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = 4574LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v15 + 24) = 4575LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 4576LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a8 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 4577LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  ScanLineOrdering = (unsigned int)a6->ScanLineOrdering;
  v58[0] = 0;
  v19 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, v58);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v19 && (!v58[0] || (_DWORD)IntegerRefreshRate != v19 + 1) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate, v20, v21);
    v23[3] = a6->IntegerRefreshRate;
    v23[4] = a6->RefreshRate.Numerator;
    v23[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  v25 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v59 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0;
  v66[0] = 0;
  *(_QWORD *)v60 = 0LL;
  v26 = v25(a2, v60, &v59);
  v30 = v26;
  if ( v26 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v28, v27, v29);
    *(_QWORD *)(v31 + 24) = a2;
LABEL_21:
    *(_QWORD *)(v31 + 32) = v30;
    v36 = (_QWORD *)v31;
LABEL_34:
    WdLogEvent5_WdError(v36);
    goto LABEL_36;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v66,
    *(__int64 *)v60,
    *((_QWORD *)v63 + 8),
    (__int64)a2);
  v8 = v67;
  v62 = 0LL;
  v61 = 0LL;
  v32 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v59)(
          v67,
          &v62,
          &v61);
  v30 = v32;
  if ( v32 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v34, v33, v35);
    *(_QWORD *)(v31 + 24) = v8;
    goto LABEL_21;
  }
  v37 = v59;
  v58[0] = 0;
  v38 = 16LL;
  *(_QWORD *)v60 = 0LL;
  v39 = v71;
  while ( v38 )
  {
    *v39++ = -1;
    --v38;
  }
  v40 = PrepareUnpinnedPathsFromSource(
          v63,
          a2,
          v8,
          v37,
          v62,
          v61,
          v11,
          0,
          0,
          0,
          (unsigned __int64 *const)v60,
          (unsigned int (*)[16])v71,
          v58);
  v44 = v40;
  LODWORD(v30) = -1071774925;
  if ( v40 == -1071774925 || (LODWORD(v30) = -1071774886, v40 == -1071774886) )
  {
    v45 = WdLogNewEntry5_WdDmmEvent(v42, v41);
    *(_QWORD *)(v45 + 24) = v11;
    *(_QWORD *)(v45 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v45);
  }
  else if ( v40 >= 0 )
  {
    v47 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v63,
            (char *)a2,
            v8,
            v59,
            v62,
            v61,
            v11,
            *(unsigned __int64 *)v60,
            a6,
            v55,
            v56,
            v57,
            &v64);
    LODWORD(v30) = v47;
    if ( v47 >= 0 )
    {
      LODWORD(v30) = 0;
      v54 = v65;
      *a7 = v64;
      *v54 = v59;
      goto LABEL_36;
    }
    if ( v47 != -1071774970 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48, v50);
      v53[3] = v11;
      v53[4] = a6->Width;
      v53[5] = a6->Height;
      v53[6] = a6->Format;
      v53[7] = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
      v36 = v53;
      goto LABEL_34;
    }
    v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
    v51[3] = a6->Width;
    v51[4] = a6->Height;
    v51[5] = a6->Format;
    v52 = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
    v51[7] = v11;
    v51[6] = v52;
  }
  else
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
    v46[3] = v11;
    v46[4] = a2;
    v46[5] = v44;
    WdLogEvent5_WdError(v46);
    LODWORD(v30) = v44;
  }
LABEL_36:
  if ( v66[0] )
    v68(v69, v8);
  return (unsigned int)v30;
}

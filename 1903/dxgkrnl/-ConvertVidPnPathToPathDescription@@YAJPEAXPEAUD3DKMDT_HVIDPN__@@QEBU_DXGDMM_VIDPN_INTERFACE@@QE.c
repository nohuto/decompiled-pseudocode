/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02361C8
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236598 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E6B40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C017F040 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        DXGADAPTER *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *const a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  __int64 v10; // rsi
  __int64 v11; // r14
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  char v21; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int128 v42; // xmm1
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // xmm1_8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // [rsp+50h] [rbp-49h] BYREF
  __int64 v61; // [rsp+58h] [rbp-41h] BYREF
  __int64 v62; // [rsp+60h] [rbp-39h] BYREF
  __int64 v63; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v64[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v65; // [rsp+78h] [rbp-21h]
  void (__fastcall *v66)(__int64, __int64); // [rsp+80h] [rbp-19h]
  __int64 v67; // [rsp+88h] [rbp-11h]
  int v68; // [rsp+90h] [rbp-9h]
  __int64 v70; // [rsp+F8h] [rbp+5Fh] BYREF

  v10 = a7;
  v11 = a6;
  v13 = a5;
  v15 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v62);
  v18 = v15;
  if ( v15 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v16, v17);
    *(_QWORD *)(v19 + 24) = v13;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v18;
  }
  if ( (int)DxgkQueryMonitorTypeLockHeld(a1, v10, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v60, (bool *)&v70) < 0 )
    v21 = 0;
  else
    v21 = ((_BYTE)v70 != 0 ? 2 : 0) | ((_BYTE)v60 != 0);
  v22 = a9;
  *((_BYTE *)a9 + 129) = v21;
  v23 = v62;
  v24 = *(_DWORD *)(v62 + 12);
  if ( v24 != 254 )
  {
    *((_DWORD *)v22 + 35) = v24;
    *((_DWORD *)v22 + 34) = *(_DWORD *)(v23 + 12);
    *(_QWORD *)v22 |= 0x40000010000uLL;
  }
  v25 = *(_DWORD *)(v23 + 20);
  if ( v25 != 254 )
  {
    *(_QWORD *)v22 |= 0x200uLL;
    *((_DWORD *)v22 + 33) = v25;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))a4 + 4))(v13);
  v26 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 1))(
          a2,
          (unsigned int)v11,
          &v70,
          &v61);
  v30 = v26;
  if ( v26 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
    v31[3] = v11;
LABEL_12:
    v31[4] = a2;
    v31[5] = v30;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v30;
  }
  v32 = *((_QWORD *)a3 + 2);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v64[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v64,
    v70,
    v32,
    (__int64)a2);
  v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v61 + 24))(v70, &v63);
  v30 = v33;
  if ( v33 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
    v38 = v65;
    v37[3] = v11;
    v37[4] = v38;
    v37[5] = v30;
    goto LABEL_16;
  }
  if ( v33 != 1075708679 )
  {
    v39 = v63;
    v40 = v70;
    *((_BYTE *)v22 + 128) = (unsigned int)(*(_DWORD *)(v63 + 4) - 3) <= 1;
    v41 = v61;
    *((_OWORD *)v22 + 6) = *(_OWORD *)(v39 + 8);
    v42 = *(_OWORD *)(v39 + 24);
    *(_QWORD *)v22 |= 0x100uLL;
    *((_OWORD *)v22 + 7) = v42;
    (*(void (__fastcall **)(__int64))(v41 + 32))(v40);
  }
  if ( v64[0] )
    v66(v67, v65);
  v43 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 3))(
          a2,
          (unsigned int)v10,
          &v70,
          &v61);
  v30 = v43;
  if ( v43 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46);
    v31[3] = v10;
    goto LABEL_12;
  }
  v47 = *((_QWORD *)a3 + 4);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v64[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v64,
    v70,
    v47,
    (__int64)a2);
  v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v61 + 24))(v70, &v63);
  v30 = v48;
  if ( v48 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49, v51);
    v38 = v65;
    v37[3] = v65;
    v37[4] = v30;
LABEL_16:
    WdLogEvent5_WdError(v37);
    if ( v64[0] )
      v66(v67, v38);
    return (unsigned int)v30;
  }
  if ( v48 != 1075708679 )
  {
    v52 = v63;
    v53 = v61;
    v54 = v70;
    *((_OWORD *)v22 + 2) = *(_OWORD *)(v63 + 8);
    *((_OWORD *)v22 + 3) = *(_OWORD *)(v52 + 24);
    *((_OWORD *)v22 + 4) = *(_OWORD *)(v52 + 40);
    v55 = *(_QWORD *)(v52 + 56);
    *(_QWORD *)v22 |= 0x87uLL;
    *((_QWORD *)v22 + 10) = v55;
    (*(void (__fastcall **)(__int64))(v53 + 32))(v54);
    if ( a8 )
    {
      if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                  a1,
                  (unsigned int)v11,
                  (unsigned int)v10,
                  (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v22 + 51,
                  (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v22 + 52) >= 0 )
      {
        *(_QWORD *)v22 |= 8uLL;
      }
      else
      {
        v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
        *(_QWORD *)(v59 + 24) = v11;
        *(_QWORD *)(v59 + 32) = v10;
        WdLogEvent5_WdWarning(v59);
      }
    }
  }
  if ( v64[0] )
    v66(v67, v65);
  return 0LL;
}

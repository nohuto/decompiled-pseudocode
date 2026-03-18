/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0204850
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0204C20 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E57AC (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0 (DxgkQueryMonitorTypeLockHeld.c)
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
  __int64 v16; // rbx
  __int64 v17; // rax
  char v19; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm1
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // xmm1_8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // [rsp+50h] [rbp-49h] BYREF
  __int64 v51; // [rsp+58h] [rbp-41h] BYREF
  __int64 v52; // [rsp+60h] [rbp-39h] BYREF
  __int64 v53; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v54[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v55; // [rsp+78h] [rbp-21h]
  void (__fastcall *v56)(__int64, __int64); // [rsp+80h] [rbp-19h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  int v58; // [rsp+90h] [rbp-9h]
  __int64 v60; // [rsp+F8h] [rbp+5Fh] BYREF

  v10 = a7;
  v11 = a6;
  v13 = a5;
  v15 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v52);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = v13;
    *(_QWORD *)(v17 + 32) = v16;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v16;
  }
  if ( (int)DxgkQueryMonitorTypeLockHeld(a1, v10, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v50, (bool *)&v60) < 0 )
    v19 = 0;
  else
    v19 = ((_BYTE)v60 != 0 ? 2 : 0) | ((_BYTE)v50 != 0);
  v20 = a9;
  *((_BYTE *)a9 + 129) = v19;
  v21 = v52;
  v22 = *(_DWORD *)(v52 + 12);
  if ( v22 != 254 )
  {
    *((_DWORD *)v20 + 35) = v22;
    *((_DWORD *)v20 + 34) = *(_DWORD *)(v21 + 12);
    *(_QWORD *)v20 |= 0x40000010000uLL;
  }
  v23 = *(_DWORD *)(v21 + 20);
  if ( v23 != 254 )
  {
    *(_QWORD *)v20 |= 0x200uLL;
    *((_DWORD *)v20 + 33) = v23;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))a4 + 4))(v13);
  v24 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 1))(
          a2,
          (unsigned int)v11,
          &v60,
          &v51);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = v11;
LABEL_12:
    v27[4] = a2;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v26;
  }
  v28 = *((_QWORD *)a3 + 2);
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v54[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v54,
    v60,
    v28,
    (__int64)a2);
  v29 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v51 + 24))(v60, &v53);
  v26 = v29;
  if ( v29 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v32 = v55;
    v31[3] = v11;
    v31[4] = v32;
    v31[5] = v26;
    goto LABEL_16;
  }
  if ( v29 != 1075708679 )
  {
    v33 = v53;
    v34 = v60;
    *((_BYTE *)v20 + 128) = (unsigned int)(*(_DWORD *)(v53 + 4) - 3) <= 1;
    v35 = v51;
    *((_OWORD *)v20 + 6) = *(_OWORD *)(v33 + 8);
    v36 = *(_OWORD *)(v33 + 24);
    *(_QWORD *)v20 |= 0x100uLL;
    *((_OWORD *)v20 + 7) = v36;
    (*(void (__fastcall **)(__int64))(v35 + 32))(v34);
  }
  if ( v54[0] )
    v56(v57, v55);
  v37 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 3))(
          a2,
          (unsigned int)v10,
          &v60,
          &v51);
  v26 = v37;
  if ( v37 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v27[3] = v10;
    goto LABEL_12;
  }
  v39 = *((_QWORD *)a3 + 4);
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v54[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v54,
    v60,
    v39,
    (__int64)a2);
  v40 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v51 + 24))(v60, &v53);
  v26 = v40;
  if ( v40 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v32 = v55;
    v31[3] = v55;
    v31[4] = v26;
LABEL_16:
    WdLogEvent5_WdError(v31);
    if ( v54[0] )
      v56(v57, v32);
    return (unsigned int)v26;
  }
  if ( v40 != 1075708679 )
  {
    v42 = v53;
    v43 = v51;
    v44 = v60;
    *((_OWORD *)v20 + 2) = *(_OWORD *)(v53 + 8);
    *((_OWORD *)v20 + 3) = *(_OWORD *)(v42 + 24);
    *((_OWORD *)v20 + 4) = *(_OWORD *)(v42 + 40);
    v45 = *(_QWORD *)(v42 + 56);
    *(_QWORD *)v20 |= 0x87uLL;
    *((_QWORD *)v20 + 10) = v45;
    (*(void (__fastcall **)(__int64))(v43 + 32))(v44);
    if ( a8 )
    {
      if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                  a1,
                  v11,
                  v10,
                  (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v20 + 51,
                  (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v20 + 52) >= 0 )
      {
        *(_QWORD *)v20 |= 8uLL;
      }
      else
      {
        v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v49 + 24) = v11;
        *(_QWORD *)(v49 + 32) = v10;
        WdLogEvent5_WdWarning(v49);
      }
    }
  }
  if ( v54[0] )
    v56(v57, v55);
  return 0LL;
}

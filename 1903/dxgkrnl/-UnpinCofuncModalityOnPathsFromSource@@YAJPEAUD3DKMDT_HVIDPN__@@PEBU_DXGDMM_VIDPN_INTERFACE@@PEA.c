/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C016E644
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C016E3D4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  const struct _DXGDMM_VIDPN_INTERFACE *v8; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 (__fastcall *v24)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r12
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // r9
  int v46; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _BYTE v60[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v61; // [rsp+38h] [rbp-41h]
  void (__fastcall *v62)(__int64, __int64); // [rsp+40h] [rbp-39h]
  __int64 v63; // [rsp+48h] [rbp-31h]
  int v64; // [rsp+50h] [rbp-29h]
  _BYTE v65[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v66; // [rsp+60h] [rbp-19h]
  void (__fastcall *v67)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  int v69; // [rsp+78h] [rbp-1h]
  __int64 v70; // [rsp+D0h] [rbp+57h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v71; // [rsp+D8h] [rbp+5Fh]
  __int64 v72; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v73; // [rsp+E8h] [rbp+6Fh] BYREF

  v71 = a2;
  v8 = a2;
  if ( !a1 )
  {
    v48 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v48 + 24) = 3464LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !v8 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v49 + 24) = 3465LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( !a3 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v50 + 24) = 3466LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !a4 )
  {
    v51 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v51 + 24) = 3467LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    v52 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v52 + 24) = 3468LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0;
  v65[0] = 0;
  v70 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v70, &v72);
  v16 = v12;
  if ( v12 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v53[3] = v10;
    v53[4] = a1;
    v53[5] = v16;
LABEL_46:
    WdLogEvent5_WdError(v53);
    goto LABEL_34;
  }
  if ( !v70 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v54 + 24) = 3493LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( !v72 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v55 + 24) = 3494LL;
    WdLogEvent5_WdAssertion(v55);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v65,
    v70,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v17) = 1;
  v18 = v66;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(v72 + 48))(v66, v17);
  v16 = v19;
  if ( v19 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v53[3] = v18;
    v53[4] = v16;
    goto LABEL_46;
  }
  v23 = 0LL;
  if ( !a6 )
  {
LABEL_33:
    LODWORD(v16) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v24 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v25 = v24(a3, (unsigned int)v10, v23, &a5);
    v16 = v25;
    if ( v25 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v53[3] = v23;
      v53[4] = v10;
      goto LABEL_45;
    }
    if ( a5 == -1 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v56 + 24) = 3548LL;
      WdLogEvent5_WdAssertion(v56);
    }
    v29 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 13))(a3, (unsigned int)v10);
    v16 = v29;
    if ( v29 < 0 )
    {
LABEL_40:
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
      v53[3] = v10;
      v53[4] = a5;
LABEL_45:
      v53[5] = a3;
      v53[6] = v16;
      goto LABEL_46;
    }
    v73 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0;
    v60[0] = 0;
    v70 = 0LL;
    v33 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v70,
            &v73);
    v16 = v33;
    if ( v33 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
      v53[3] = v16;
      goto LABEL_46;
    }
    if ( !v70 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v57 + 24) = 3593LL;
      WdLogEvent5_WdAssertion(v57);
    }
    if ( !v73 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v58 + 24) = 3594LL;
      WdLogEvent5_WdAssertion(v58);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v60,
      v70,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v37) = 1;
    v38 = v61;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64))(v73 + 56))(v61, v37);
    v16 = v39;
    if ( v39 < 0 )
      break;
    if ( v60[0] )
      v62(v63, v38);
    LOBYTE(v43) = 1;
    v44 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v10,
            a5,
            v43);
    v16 = v44;
    if ( v44 < 0 )
      goto LABEL_40;
    LOBYTE(v45) = 1;
    v46 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v10,
            a5,
            v45);
    v16 = v46;
    if ( v46 < 0 )
      goto LABEL_40;
    if ( ++v23 >= a6 )
      goto LABEL_33;
    v8 = v71;
  }
  v59 = WdLogNewEntry5_WdError(v41, v40, v42);
  *(_QWORD *)(v59 + 24) = v16;
  WdLogEvent5_WdError(v59);
  if ( v60[0] )
    v62(v63, v38);
LABEL_34:
  if ( v65[0] )
    v67(v68, v66);
  return (unsigned int)v16;
}

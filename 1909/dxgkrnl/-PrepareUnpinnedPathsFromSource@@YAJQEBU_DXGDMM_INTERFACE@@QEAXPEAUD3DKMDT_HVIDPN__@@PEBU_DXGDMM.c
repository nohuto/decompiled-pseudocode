/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01721C4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0237D34 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C0172434 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C02360B4 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        unsigned int (*a12)[16],
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rbx
  __int64 v17; // rcx
  unsigned int *v18; // rdi
  __int64 (__fastcall *v19)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v20; // r12
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  unsigned int *v38; // rdi
  __int64 i; // rcx
  unsigned __int64 v40; // rdi
  struct D3DKMDT_HVIDPN__ *v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  _BYTE v74[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v76; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v77; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v78; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v79; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v80; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v81; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v82; // [rsp+90h] [rbp-59h]
  unsigned int Src[16]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v77 = a6;
  v81 = a11;
  v82 = a13;
  v79 = a4;
  v80 = a3;
  v78 = a1;
  if ( !a1 )
  {
    v47 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v47 + 24) = 4305LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !a2 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v48 + 24) = 4306LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !a3 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v49 + 24) = 4307LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( !a4 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v50 + 24) = 4308LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !a5 )
  {
    v51 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v51 + 24) = 4309LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( !a6 )
  {
    v52 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v52 + 24) = 4310LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( a7 == -1 )
  {
    v53 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v53 + 24) = 4311LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !a11 )
  {
    v54 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v54 + 24) = 4312LL;
    WdLogEvent5_WdAssertion(v54);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    v17 = 16LL;
    v18 = (unsigned int *)a12;
    while ( v17 )
    {
      *v18++ = -1;
      --v17;
    }
  }
  v19 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v75 = 0LL;
  v20 = 0;
  v21 = v19(a5, a7, &v75);
  v25 = v21;
  if ( v21 == -1071774919 )
  {
    if ( v75 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v55 + 24) = 4343LL;
      WdLogEvent5_WdAssertion(v55);
    }
    v20 = 1;
    v35 = WdLogNewEntry5_WdDmmEvent(v23, v22);
    v36 = a7;
    *(_QWORD *)(v35 + 24) = a5;
    *(_QWORD *)(v35 + 32) = a7;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v56[3] = a7;
    goto LABEL_51;
  }
  v26 = 0LL;
  if ( !v75 )
  {
LABEL_30:
    v35 = WdLogNewEntry5_WdDmmEvent(v23, v22);
    v36 = a7;
    *(_QWORD *)(v35 + 24) = a7;
    *(_QWORD *)(v35 + 32) = a5;
LABEL_31:
    WdLogEvent5_WdDmmEvent(v35);
    v38 = Src;
    for ( i = 16LL; i; --i )
      *v38++ = -1;
    if ( !v20 )
    {
      v40 = v75;
LABEL_36:
      if ( !v40 )
      {
        v73 = WdLogNewEntry5_WdAssertion(i, v37);
        *(_QWORD *)(v73 + 24) = 4509LL;
        WdLogEvent5_WdAssertion(v73);
        v40 = v75;
      }
      if ( !a9 )
        goto LABEL_41;
      v41 = v80;
      v42 = UnpinCofuncModalityOnPathsFromSource(v80, v79, a5, v77, a7, v40);
      v25 = v42;
      if ( v42 >= 0 )
      {
        v40 = v75;
LABEL_41:
        *v81 = v40;
        if ( a12 )
          memmove(a12, Src, 0x40uLL);
        if ( v82 )
          *v82 = v20;
        return 0LL;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
      v56[3] = v75;
      v56[4] = v36;
      v56[5] = v41;
      v56[6] = a2;
      v56[7] = v25;
LABEL_53:
      WdLogEvent5_WdError(v56);
      return (unsigned int)v25;
    }
    if ( !a8 )
    {
      v60 = WdLogNewEntry5_WdDmmEvent(0LL, v37);
      *(_QWORD *)(v60 + 24) = v36;
      *(_QWORD *)(v60 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v60);
      return 3223192403LL;
    }
    if ( !v75
      || (v61 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v77 + 7))(a5, a7),
          v25 = v61,
          v61 >= 0) )
    {
      v76 = 0LL;
      v65 = AugmentVidPnTopology(v80, v79, a5, v77, a2, v78, a7, a10, &v76, (unsigned int (*)[16])Src);
      v25 = v65;
      if ( v65 == -1071774925 )
      {
        v69 = WdLogNewEntry5_WdDmmEvent(v67, v66);
        *(_QWORD *)(v69 + 24) = a5;
        *(_QWORD *)(v69 + 32) = v36;
        WdLogEvent5_WdDmmEvent(v69);
        return (unsigned int)v25;
      }
      if ( v65 == -1071774886 )
      {
        v70 = WdLogNewEntry5_WdDmmEvent(v67, v66);
        *(_QWORD *)(v70 + 24) = a5;
        *(_QWORD *)(v70 + 32) = v36;
        WdLogEvent5_WdDmmEvent(v70);
        return 3223192410LL;
      }
      if ( v65 < 0 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66, v68);
        v56[3] = v36;
        v56[4] = v25;
        goto LABEL_53;
      }
      v40 = v76;
      if ( !v76 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v67, v66);
        *(_QWORD *)(v71 + 24) = 4499LL;
        WdLogEvent5_WdAssertion(v71);
      }
      v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v67, v66);
      v72[3] = a2;
      v72[4] = v40;
      v72[5] = v36;
      v72[6] = v75;
      WdLogEvent5_WdDmmEvent(v72);
      v75 = v40;
      goto LABEL_36;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62, v64);
    v56[3] = v36;
LABEL_51:
    v56[4] = a5;
    v56[5] = v25;
    goto LABEL_53;
  }
  while ( 1 )
  {
    LODWORD(v76) = -1;
    v27 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))v13 + 1))(
            a5,
            a7,
            v26,
            &v76);
    v31 = v27;
    if ( v27 < 0 )
      break;
    v32 = (unsigned int)v76;
    if ( (_DWORD)v76 == -1 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v29, 0xFFFFFFFFLL);
      *(_QWORD *)(v57 + 24) = 4386LL;
      WdLogEvent5_WdAssertion(v57);
      v32 = (unsigned int)v76;
    }
    v74[0] = 0;
    v33 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v78 + 9))(a2, v32, v74);
    v31 = v33;
    if ( v33 < 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v34);
      v59[3] = a2;
      v59[4] = v31;
      goto LABEL_57;
    }
    if ( !v74[0] )
    {
      v20 = 1;
      v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23, v22);
      v58[3] = a5;
      v58[4] = a7;
      v58[5] = (unsigned int)v76;
      WdLogEvent5_WdDmmEvent(v58);
      goto LABEL_30;
    }
    v13 = v77;
    if ( ++v26 >= v75 )
      goto LABEL_30;
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
  v59[3] = v26;
  v59[4] = a7;
  v59[5] = v31;
LABEL_57:
  WdLogEvent5_WdError(v59);
  return (unsigned int)v31;
}

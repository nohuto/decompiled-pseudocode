/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00B835C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0205D30 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00B85CC (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C02040CC (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
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
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int *v33; // rdi
  __int64 i; // rcx
  unsigned __int64 v35; // rdi
  struct D3DKMDT_HVIDPN__ *v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  _BYTE v63[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v65; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v66; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v67; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v68; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v69; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v70; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v71; // [rsp+90h] [rbp-59h]
  unsigned int Src[16]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v66 = a6;
  v70 = a11;
  v71 = a13;
  v68 = a4;
  v69 = a3;
  v67 = a1;
  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v40 + 24) = 3928LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v41 + 24) = 3929LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a3 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v42 + 24) = 3930LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a4 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v43 + 24) = 3931LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a5 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v44 + 24) = 3932LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a6 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v45 + 24) = 3933LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( a7 == -1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v46 + 24) = 3934LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a11 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v47 + 24) = 3935LL;
    WdLogEvent5_WdAssertion(v47);
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
  v64 = 0LL;
  v20 = 0;
  v21 = v19(a5, a7, &v64);
  v23 = v21;
  if ( v21 == -1071774919 )
  {
    if ( v64 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v48 + 24) = 3966LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v20 = 1;
    v31 = WdLogNewEntry5_WdDmmEvent();
    v32 = a7;
    *(_QWORD *)(v31 + 24) = a5;
    *(_QWORD *)(v31 + 32) = a7;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v49[3] = a7;
    goto LABEL_51;
  }
  v24 = 0LL;
  if ( !v64 )
  {
LABEL_30:
    v31 = WdLogNewEntry5_WdDmmEvent();
    v32 = a7;
    *(_QWORD *)(v31 + 24) = a7;
    *(_QWORD *)(v31 + 32) = a5;
LABEL_31:
    WdLogEvent5_WdDmmEvent(v31);
    v33 = Src;
    for ( i = 16LL; i; --i )
      *v33++ = -1;
    if ( !v20 )
    {
      v35 = v64;
LABEL_36:
      if ( !v35 )
      {
        v62 = WdLogNewEntry5_WdAssertion(i);
        *(_QWORD *)(v62 + 24) = 4132LL;
        WdLogEvent5_WdAssertion(v62);
        v35 = v64;
      }
      if ( !a9 )
        goto LABEL_41;
      v36 = v69;
      v37 = UnpinCofuncModalityOnPathsFromSource(v69, v68, a5, v66, a7, v35);
      v23 = v37;
      if ( v37 >= 0 )
      {
        v35 = v64;
LABEL_41:
        *v70 = v35;
        if ( a12 )
          memmove(a12, Src, 0x40uLL);
        if ( v71 )
          *v71 = v20;
        return 0LL;
      }
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v49[3] = v64;
      v49[4] = v32;
      v49[5] = v36;
      v49[6] = a2;
      v49[7] = v23;
LABEL_53:
      WdLogEvent5_WdError(v49);
      return (unsigned int)v23;
    }
    if ( !a8 )
    {
      v53 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v53 + 24) = v32;
      *(_QWORD *)(v53 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v53);
      return 3223192403LL;
    }
    if ( !v64
      || (v54 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v66 + 7))(a5, a7),
          v23 = v54,
          v54 >= 0) )
    {
      v65 = 0LL;
      v56 = AugmentVidPnTopology(v69, v68, a5, v66, a2, v67, a7, a10, &v65, (unsigned int (*)[16])Src);
      v23 = v56;
      if ( v56 == -1071774925 )
      {
        v58 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v58 + 24) = a5;
        *(_QWORD *)(v58 + 32) = v32;
        WdLogEvent5_WdDmmEvent(v58);
        return (unsigned int)v23;
      }
      if ( v56 == -1071774886 )
      {
        v59 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v59 + 24) = a5;
        *(_QWORD *)(v59 + 32) = v32;
        WdLogEvent5_WdDmmEvent(v59);
        return 3223192410LL;
      }
      if ( v56 < 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v57);
        v49[3] = v32;
        v49[4] = v23;
        goto LABEL_53;
      }
      v35 = v65;
      if ( !v65 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v60 + 24) = 4122LL;
        WdLogEvent5_WdAssertion(v60);
      }
      v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v61[3] = a2;
      v61[4] = v35;
      v61[5] = v32;
      v61[6] = v64;
      WdLogEvent5_WdDmmEvent(v61);
      v64 = v35;
      goto LABEL_36;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v55);
    v49[3] = v32;
LABEL_51:
    v49[4] = a5;
    v49[5] = v23;
    goto LABEL_53;
  }
  while ( 1 )
  {
    LODWORD(v65) = -1;
    v25 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))v13 + 1))(
            a5,
            a7,
            v24,
            &v65);
    v27 = v25;
    if ( v25 < 0 )
      break;
    v28 = (unsigned int)v65;
    if ( (_DWORD)v65 == -1 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v50 + 24) = 4009LL;
      WdLogEvent5_WdAssertion(v50);
      v28 = (unsigned int)v65;
    }
    v63[0] = 0;
    v29 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v67 + 9))(a2, v28, v63);
    v27 = v29;
    if ( v29 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v52[3] = a2;
      v52[4] = v27;
      goto LABEL_57;
    }
    if ( !v63[0] )
    {
      v20 = 1;
      v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v51[3] = a5;
      v51[4] = a7;
      v51[5] = (unsigned int)v65;
      WdLogEvent5_WdDmmEvent(v51);
      goto LABEL_30;
    }
    v13 = v66;
    if ( ++v24 >= v64 )
      goto LABEL_30;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdError(v26);
  v52[3] = v24;
  v52[4] = a7;
  v52[5] = v27;
LABEL_57:
  WdLogEvent5_WdError(v52);
  return (unsigned int)v27;
}

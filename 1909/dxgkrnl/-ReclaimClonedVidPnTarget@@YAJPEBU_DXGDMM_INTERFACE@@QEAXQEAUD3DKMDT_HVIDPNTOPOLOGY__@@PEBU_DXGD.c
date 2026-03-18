/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C023735C
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02363E4 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001FCC8 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v16; // rax
  unsigned int *v17; // r12
  __int64 v18; // rax
  __int64 (__fastcall *v19)(void *const, __int64 *, __int64 *); // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int *v26; // rdi
  __int64 (__fastcall *v27)(__int64, unsigned int *const *); // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  unsigned int *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 (__fastcall *v38)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r8
  char v55[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v56; // [rsp+38h] [rbp-28h]
  void (__fastcall *v57)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v58; // [rsp+48h] [rbp-18h]
  int v59; // [rsp+50h] [rbp-10h]
  unsigned int v60; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v62; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v11 + 24) = 2930LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = 2931LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 2932LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = 2933LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 2934LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 2935LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v61 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v62 = 0LL;
  v20 = v19(a2, &v61, &v62);
  v24 = v20;
  if ( v20 >= 0 )
  {
    v26 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v27 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v62 + 8);
    v58 = 0LL;
    v59 = 0;
    v55[0] = 0;
    v28 = v27(v61, &a6);
    v24 = v28;
    if ( v28 >= 0 )
    {
      v33 = a6;
      if ( !a6 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30, 0LL);
        *(_QWORD *)(v34 + 24) = 2978LL;
        WdLogEvent5_WdAssertion(v34);
        v33 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v55,
        (__int64)v33,
        *(_QWORD *)(v62 + 24),
        v61);
      v60 = -1;
      v26 = v56;
      if ( v56 )
      {
        while ( 1 )
        {
          v37 = *v26;
          v38 = *a4;
          a6 = 0LL;
          v39 = v38(a3, v37, &a6);
          v24 = v39;
          if ( v39 == -1071774919 )
          {
            if ( a6 )
            {
              v43 = WdLogNewEntry5_WdAssertion(v41, v40);
              *(_QWORD *)(v43 + 24) = 3003LL;
              WdLogEvent5_WdAssertion(v43);
            }
          }
          else if ( v39 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v44 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v62 + 16))(v61, v26, &a7);
          v24 = v44;
          if ( v44 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v47);
            v32[3] = v26;
            v32[4] = v61;
LABEL_36:
            v32[5] = v24;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v55,
            (__int64)a7,
            *(_QWORD *)(v62 + 24),
            v61);
          v26 = v56;
          if ( !v56 )
            goto LABEL_27;
        }
        v48 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v37,
                1LL,
                &v60);
        v24 = v48;
        if ( v48 < 0 )
        {
LABEL_35:
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
          v32[3] = a3;
          v32[4] = v37;
          goto LABEL_36;
        }
        v50 = v60;
        if ( v60 == -1 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v41, v40);
          *(_QWORD *)(v51 + 24) = 3035LL;
          WdLogEvent5_WdAssertion(v51);
          v50 = v60;
        }
        LOBYTE(v49) = a5;
        v52 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v37,
                v50,
                v49);
        v24 = v52;
        if ( v52 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v53);
          v32[3] = v37;
          v32[4] = v60;
          v32[5] = a3;
          v32[6] = v24;
          goto LABEL_37;
        }
LABEL_27:
        if ( v60 == -1 )
          goto LABEL_38;
        *v15 = v60;
        LODWORD(v24) = 0;
        *v17 = v37;
      }
      else
      {
LABEL_38:
        LODWORD(v24) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v36, v35) + 24) = a3;
      }
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
      v32[3] = v61;
      v32[4] = v24;
LABEL_37:
      WdLogEvent5_WdError(v32);
    }
    if ( v55[0] )
      v57(v58, v26);
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = v24;
    WdLogEvent5_WdError(v25);
  }
  return (unsigned int)v24;
}

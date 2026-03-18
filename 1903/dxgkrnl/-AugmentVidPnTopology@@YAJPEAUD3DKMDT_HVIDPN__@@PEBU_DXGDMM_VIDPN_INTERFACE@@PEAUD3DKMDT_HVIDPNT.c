/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C0235A44
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C016E3D4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0235D74 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 */

__int64 __fastcall AugmentVidPnTopology(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        void *a5,
        const struct _DXGDMM_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int64 *const a9,
        unsigned int (*a10)[16])
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int *v22; // rdi
  unsigned int *v23; // rdi
  __int64 i; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // [rsp+28h] [rbp-B0h]
  unsigned __int16 v40; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-88h] BYREF
  struct D3DKMDT_HVIDPN__ *v42; // [rsp+58h] [rbp-80h]
  unsigned int Src[16]; // [rsp+60h] [rbp-78h] BYREF

  v42 = a1;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v13 + 24) = 3336LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = 3337LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v15 + 24) = 3338LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 3339LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 3340LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 3341LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a7 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v19 + 24) = 3342LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v20 + 24) = 3343LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    v21 = 16LL;
    v22 = (unsigned int *)a10;
    while ( v21 )
    {
      *v22++ = -1;
      --v21;
    }
  }
  v23 = Src;
  v41 = 0LL;
  for ( i = 16LL; i; --i )
    *v23++ = -1;
  v25 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v39, v40, a8, &v41, Src);
  v28 = v25;
  if ( v25 >= 0 )
  {
    if ( !v41 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v31 + 24) = 3406LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v32 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v41);
    v36 = v32;
    if ( v32 >= 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v38 + 24) = a7;
      *(_QWORD *)(v38 + 32) = v36;
      WdLogEvent5_WdWarning(v38);
    }
    else if ( !v41 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v37 + 24) = 3421LL;
      WdLogEvent5_WdAssertion(v37);
    }
    *a9 = v41;
    if ( a10 )
      memmove(a10, Src, 0x40uLL);
    return 0LL;
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v26);
    v29[3] = v42;
    v29[4] = a7;
    v29[5] = a5;
    v29[6] = v28;
    WdLogEvent5_WdDmmEvent(v29);
    return (unsigned int)v28;
  }
}

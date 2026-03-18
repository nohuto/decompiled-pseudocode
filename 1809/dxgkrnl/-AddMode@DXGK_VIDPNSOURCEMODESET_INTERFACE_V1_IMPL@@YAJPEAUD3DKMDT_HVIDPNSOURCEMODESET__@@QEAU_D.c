/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DB500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C00DB47C (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DC6FC (-ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C0286434 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // r15
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // rsi
  __int64 v18; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v19; // rbx
  int v20; // eax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  unsigned int v45; // edi
  __int64 v46; // rax
  DMMVIDPN *Container; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  int v64; // [rsp+20h] [rbp-38h] BYREF
  __int64 v65; // [rsp+28h] [rbp-30h]
  char v66; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v67; // [rsp+60h] [rbp+8h] BYREF

  v64 = -1;
  v65 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v66 = 1;
    v64 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7006);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 7006);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v32 + 24) = 0LL;
    *(_QWORD *)(v32 + 32) = this;
    goto LABEL_49;
  }
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v11 = this;
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v33 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v33 + 24) = this;
    WdLogEvent5_WdError(v33);
    LODWORD(v21) = -1071774968;
    goto LABEL_31;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v34 = *((_QWORD *)v11 + 14);
    v35 = *(_QWORD *)(v34 + 40);
    if ( !v35 )
    {
      v36 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v36);
      v35 = *(_QWORD *)(v34 + 40);
    }
    v38 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v35 + 64) + 48);
    v39 = *(_QWORD *)(v38 + 8);
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v40);
      v39 = *(_QWORD *)(v38 + 8);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v39 + 16)) < 1200 && *(_BYTE *)(v41 + 2428) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v41);
      WdLogEvent5_WdAssertion(v42);
LABEL_50:
      LODWORD(v21) = -1071774960;
      goto LABEL_31;
    }
    v43 = *((_QWORD *)v11 + 14);
    v44 = *(_QWORD *)(v43 + 40);
    v45 = *(_DWORD *)(v43 + 24);
    if ( !v44 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v46);
      v44 = *(_QWORD *)(v43 + 40);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v44 + 64);
    if ( !DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v45) )
      goto LABEL_9;
    v32 = WdLogNewEntry5_WdError(v48);
LABEL_49:
    WdLogEvent5_WdError(v32);
    goto LABEL_50;
  }
LABEL_9:
  v12 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  v17 = v12;
  if ( v12 )
  {
    v18 = *(_DWORD *)a2;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *(_QWORD *)v12 = &SetElement::`vftable';
    *((_DWORD *)v12 + 6) = v18;
    if ( (_DWORD)v18 == -1 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v49 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v49);
    }
    *((_QWORD *)v17 + 5) = 0LL;
    *((_DWORD *)v17 + 14) = 1833173006;
    *((_DWORD *)v17 + 18) = 0;
    *(_QWORD *)v17 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_QWORD *)v17 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *((_QWORD *)v17 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *((_QWORD *)v17 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset(v17 + 19, 0, 0x20uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = v17;
  if ( !v17 )
  {
    v50 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v50 + 24) = this;
    WdLogEvent5_WdLowResource(v50);
    LODWORD(v21) = -1073741801;
    goto LABEL_29;
  }
  v20 = *((_DWORD *)a2 + 1);
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      *((_DWORD *)v17 + 18) = 2;
      v17[19] = a2[2];
      goto LABEL_27;
    }
    if ( v20 <= 2 || v20 > 4 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v51[3] = v17;
      v51[4] = this;
      v51[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v51);
      LODWORD(v21) = -1071774960;
      goto LABEL_29;
    }
  }
  v21 = a2 + 2;
  if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v60[3] = *(_DWORD *)v21;
    v60[4] = *((unsigned int *)a2 + 3);
    v60[5] = v21;
    WdLogEvent5_WdError(v60);
    LODWORD(v21) = -1071774918;
  }
  else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v59[3] = *((unsigned int *)a2 + 4);
    v59[4] = *((unsigned int *)a2 + 5);
    v59[5] = v21;
    WdLogEvent5_WdError(v59);
    LODWORD(v21) = -1071774917;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      v22 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v22 && (int)v22 <= 5 )
      {
        v23 = *((unsigned int *)a2 + 9);
        if ( (_DWORD)v23 && (int)v23 <= 3 )
        {
          *((_DWORD *)v17 + 18) = v20;
          *(_OWORD *)(v17 + 19) = *(_OWORD *)v21;
          LODWORD(v21) = 0;
          *(_OWORD *)(v17 + 23) = *(_OWORD *)(a2 + 6);
          goto LABEL_26;
        }
        v57 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v57 + 24) = *((int *)a2 + 9);
        *(_QWORD *)(v57 + 32) = v21;
        WdLogEvent5_WdError(v57);
        LODWORD(v21) = -1071774913;
      }
      else
      {
        v58 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v58 + 24) = *((int *)a2 + 8);
        *(_QWORD *)(v58 + 32) = v21;
        WdLogEvent5_WdError(v58);
        LODWORD(v21) = -1071774914;
      }
    }
    else
    {
      v56 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v56 + 24) = *((int *)a2 + 7);
      *(_QWORD *)(v56 + 32) = v21;
      WdLogEvent5_WdError(v56);
      LODWORD(v21) = -1071774915;
    }
  }
  else
  {
    v52 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v52 + 24) = *((unsigned int *)a2 + 6);
    *(_QWORD *)(v52 + 32) = v21;
    WdLogEvent5_WdError(v52);
    LODWORD(v21) = -1071774916;
  }
  v61 = WdLogNewEntry5_WdWarning(v54, v53, v55);
  WdLogEvent5_WdWarning(v61);
LABEL_26:
  if ( (int)v21 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v13, v15, v16);
    v62[3] = v17;
    v62[4] = this;
    v62[5] = (int)v21;
    goto LABEL_29;
  }
LABEL_27:
  v67 = v17;
  v19 = 0LL;
  v24 = DMMVIDPNSOURCEMODESET::AddMode((__int64)v11, (__int64 *)&v67);
  v21 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v24;
  if ( v24 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
    v63[3] = a2;
    v63[4] = this;
    v63[5] = v21;
  }
  else
  {
    LODWORD(v21) = DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(v11, (const struct _D3DKMDT_VIDPN_SOURCE_MODE *)a2);
  }
LABEL_29:
  if ( v19 )
    (**(void (__fastcall ***)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *, __int64))v19)(v19, 1LL);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v64);
  return (unsigned int)v21;
}

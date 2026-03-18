/*
 * XREFs of ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180189B28
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180025230 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028C9C (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180066164 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRenderingEffect@@@Z @ 0x180187A94 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBaseDrawListEntry@@PEBVCRe.c)
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180187BB0 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::RenderLoop<0>(__int64 a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  int v4; // r12d
  struct CRenderingEffect *v6; // rbx
  __int64 v7; // r8
  struct CBaseDrawListEntry **v8; // rdi
  struct CBaseDrawListEntry **v9; // r13
  struct CBaseDrawListEntry *v10; // r15
  void (__fastcall ***v11)(_QWORD); // rax
  __int64 (__fastcall *v12)(struct CBaseDrawListEntry *); // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  struct CRenderingEffect *v15; // rax
  struct CRenderingEffect *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  const struct CRenderingEffect *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  struct CBaseDrawListEntry **v23; // [rsp+30h] [rbp-10h] BYREF
  char v24; // [rsp+80h] [rbp+40h] BYREF
  struct CRenderingEffect *v25; // [rsp+90h] [rbp+50h] BYREF
  struct CRenderingEffect *v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = 0;
  v6 = 0LL;
  v25 = 0LL;
  v7 = *(_QWORD *)(v2 + 8);
  v8 = (struct CBaseDrawListEntry **)(v7 + 8LL * *(unsigned int *)(a1 + 48));
  v9 = (struct CBaseDrawListEntry **)(v7 + 8LL * *(unsigned int *)(a1 + 52));
  while ( 1 )
  {
    v23 = v8;
    if ( v8 == v9 )
      break;
    v10 = *v8;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CBaseDrawListEntry *, int *))(*(_QWORD *)*v8 + 32LL))(*v8, a2) )
      goto LABEL_20;
    if ( !v6 )
    {
      CD3DBatchExecutionContext::Flush((__int64)a2, 0x80000000);
      v11 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct CBaseDrawListEntry *))(*(_QWORD *)v10 + 40LL))(v10);
LABEL_7:
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)&v25, v11);
      v6 = v25;
      goto LABEL_12;
    }
    v12 = *(__int64 (__fastcall **)(struct CBaseDrawListEntry *))(*(_QWORD *)v10 + 40LL);
    if ( a2[10] < 0 )
    {
      v11 = (void (__fastcall ***)(_QWORD))v12(v10);
      goto LABEL_7;
    }
    v13 = *(_QWORD *)v6;
    v14 = v12(v10);
    (*(void (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **, __int64, char *))(v13 + 80))(
      v6,
      &v26,
      v14,
      &v24);
    if ( v26 != v6 )
    {
      CD3DBatchExecutionContext::Flush((__int64)a2, 0x80000000);
      v15 = v26;
      v16 = v6;
      v26 = 0LL;
      v6 = v15;
      v25 = v15;
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>((__int64 *)&v26);
LABEL_12:
    if ( a2[10] < 0 )
    {
      v17 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)a2, v6);
      v4 = v17;
      if ( v17 >= 0 )
        goto LABEL_16;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x15Fu);
    }
    if ( v4 < 0 )
    {
      v19 = 0LL;
      goto LABEL_18;
    }
LABEL_16:
    v19 = v6;
LABEL_18:
    v20 = CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
            (CD3DBatchExecutionContext *)a2,
            (const struct CBaseDrawListEntry *const **)&v23,
            v19);
    v3 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x166u);
      break;
    }
    a2[10] = 0;
    v8 = v23;
LABEL_20:
    ++v8;
  }
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>((__int64 *)&v25);
  return v3;
}

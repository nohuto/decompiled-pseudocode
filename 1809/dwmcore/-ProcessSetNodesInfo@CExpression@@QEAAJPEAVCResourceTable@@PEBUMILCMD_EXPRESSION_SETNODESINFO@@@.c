/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800BCBCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800669E4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800BD6C0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  bool v3; // zf
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  CMILCOMBase *Resource; // r14
  __int64 v9; // rax
  CMILCOMBase *v10; // rsi
  CGdiSpriteBitmap *v11; // rcx
  CGdiSpriteBitmap *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx
  CSharedSection *v16; // rcx
  CExpression *v17; // rax
  int v18; // r9d
  unsigned int v19; // eax
  size_t v20; // r8
  CExpression *v21; // rax
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v24; // [rsp+30h] [rbp-29h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *p_TracingCookie; // [rsp+60h] [rbp+7h]
  int v28; // [rsp+68h] [rbp+Fh]
  int v29; // [rsp+6Ch] [rbp+13h]
  unsigned int *v30; // [rsp+70h] [rbp+17h]
  int v31; // [rsp+78h] [rbp+1Fh]
  int v32; // [rsp+7Ch] [rbp+23h]

  v3 = *(_QWORD *)(this + 288) == 0LL;
  v24 = -2147467259;
  v6 = this;
  if ( !v3 || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    cData = 215;
    goto LABEL_38;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource(a2, v7, 136LL);
  if ( !Resource )
  {
    cData = 222;
LABEL_38:
    v18 = -2003303421;
    goto LABEL_39;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 5), 136LL);
  this = *((unsigned int *)a3 + 9);
  v10 = (CMILCOMBase *)v9;
  if ( v9 )
  {
    if ( (_DWORD)this )
      goto LABEL_7;
LABEL_23:
    cData = 234;
    goto LABEL_38;
  }
  if ( (_DWORD)this )
    goto LABEL_23;
LABEL_7:
  if ( *((_DWORD *)a3 + 3) < 4u || (this *= 8LL, *((unsigned int *)a3 + 6) < this) )
  {
    cData = 243;
    goto LABEL_38;
  }
  v11 = *(CGdiSpriteBitmap **)(v6 + 288);
  if ( v11 )
    CGdiSpriteBitmap::Release(v11);
  *(_QWORD *)(v6 + 288) = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  v12 = *(CGdiSpriteBitmap **)(v6 + 304);
  if ( v12 )
    CGdiSpriteBitmap::Release(v12);
  *(_QWORD *)(v6 + 304) = v10;
  if ( v10 )
    CMILCOMBase::InternalAddRef(v10);
  *(_DWORD *)(v6 + 296) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v6 + 300) = *((_DWORD *)a3 + 4);
  if ( !(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2862660923_57931444_FeatureDescriptorDetails) )
    *(_DWORD *)(v6 + 320) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v6 + 324) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v6 + 328) = *((_DWORD *)a3 + 10);
  v13 = CBaseExpression::SetChannelHandle((CBaseExpression *)v6, *((_DWORD *)a2 + 12));
  v24 = v13;
  if ( v13 < 0 )
  {
    cData = 261;
    goto LABEL_34;
  }
  if ( *((_DWORD *)a3 + 9) )
  {
    v14 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2862660923_57931444_FeatureDescriptorDetails);
    v15 = *((unsigned int *)a3 + 7);
    v16 = *(CSharedSection **)(v6 + 304);
    if ( v14 )
    {
      v17 = (CExpression *)CSharedSection::ResolveAllocation(v16, v15, *((unsigned int *)a3 + 6));
      *(_QWORD *)(v6 + 312) = v17;
      this = (unsigned __int64)v17;
      if ( !v17 )
      {
        v18 = -2147024882;
        cData = 273;
LABEL_39:
        v24 = v18;
        goto LABEL_40;
      }
      v19 = *((_DWORD *)a3 + 6);
      *(_DWORD *)(v6 + 320) = v19;
      if ( *((_DWORD *)a3 + 8) )
      {
        v20 = v19;
LABEL_30:
        memset_0((void *)this, 0, v20);
      }
    }
    else
    {
      v21 = (CExpression *)CSharedSection::ResolveAllocation(v16, v15, *(unsigned int *)(v6 + 320));
      *(_QWORD *)(v6 + 312) = v21;
      if ( !v21 )
      {
        v18 = -2147024882;
        cData = 286;
        goto LABEL_39;
      }
      if ( *((_DWORD *)a3 + 8) )
      {
        this = (unsigned __int64)v21;
        goto LABEL_30;
      }
    }
  }
  v13 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v6);
  v24 = v13;
  if ( v13 < 0 )
  {
    cData = 295;
LABEL_34:
    v18 = v13;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v18, cData);
    goto LABEL_41;
  }
  v24 = 0;
LABEL_41:
  if ( *(int *)(*(_QWORD *)(v6 + 280) + 4LL) < 0
    && dword_180305E40 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 1uLL) )
  {
    v29 = 0;
    v32 = 0;
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)v6);
    p_TracingCookie = &TracingCookie;
    v30 = &v24;
    v28 = 4;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B4BEB, 0LL, 0LL, 4u, &pData);
  }
  return v24;
}

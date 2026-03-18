/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180082F54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180082B24 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180082BA4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x180085AE8 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C7190 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  char *v3; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 Resource; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // eax
  void *v12; // rax
  size_t v13; // r8
  int v15; // r9d
  UINT32 cData; // [rsp+20h] [rbp-49h]
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int TracingCookie; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  unsigned int *p_TracingCookie; // [rsp+60h] [rbp-9h]
  __int64 v21; // [rsp+68h] [rbp-1h]
  unsigned int *v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]

  v3 = (char *)(this + 312);
  v6 = this;
  if ( *(_QWORD *)(this + 312) || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    cData = 211;
    goto LABEL_26;
  }
  Resource = CResourceTable::GetResource(a2, v7, 167LL);
  if ( !Resource )
  {
    cData = 218;
LABEL_26:
    v15 = -2003303421;
    goto LABEL_27;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 5), 167LL);
  this = *((unsigned int *)a3 + 9);
  v10 = v9;
  if ( !v9 )
  {
    if ( !(_DWORD)this )
      goto LABEL_6;
    goto LABEL_19;
  }
  if ( !(_DWORD)this )
  {
LABEL_19:
    cData = 230;
    goto LABEL_26;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || (this *= 8LL, *((unsigned int *)a3 + 6) < this) )
  {
    cData = 239;
    goto LABEL_26;
  }
  ReplaceInterface<CSharedSection,CSharedSection>(v3, Resource);
  ReplaceInterface<CSharedSection,CSharedSection>(v6 + 328, v10);
  *(_DWORD *)(v6 + 320) = *((_DWORD *)a3 + 3);
  *(_DWORD *)(v6 + 324) = *((_DWORD *)a3 + 4);
  *(_DWORD *)(v6 + 344) = *((_DWORD *)a3 + 6);
  *(_DWORD *)(v6 + 348) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v6 + 352) = *((_DWORD *)a3 + 10);
  v11 = CBaseExpression::SetChannelHandle((CBaseExpression *)v6, *((_DWORD *)a2 + 12));
  v17 = v11;
  if ( v11 < 0 )
  {
    cData = 254;
    goto LABEL_23;
  }
  if ( *((_DWORD *)a3 + 9) )
  {
    v12 = CSharedSection::ResolveAllocation(
            *(CSharedSection **)(v6 + 328),
            *((unsigned int *)a3 + 7),
            *(unsigned int *)(v6 + 344));
    *(_QWORD *)(v6 + 336) = v12;
    if ( v12 )
    {
      if ( *((_DWORD *)a3 + 8) )
        memset_0(v12, 0, v13);
      goto LABEL_13;
    }
    v15 = -2147024882;
    cData = 264;
LABEL_27:
    v17 = v15;
    goto LABEL_28;
  }
LABEL_13:
  v11 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)v6);
  v17 = v11;
  if ( v11 < 0 )
  {
    cData = 272;
LABEL_23:
    v15 = v11;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v15, cData, 0LL);
    goto LABEL_15;
  }
  v17 = 0;
LABEL_15:
  if ( *(int *)(*(_QWORD *)(v6 + 304) + 4LL) < 0
    && dword_18033A240 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL) )
  {
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)v6);
    p_TracingCookie = &TracingCookie;
    v22 = &v17;
    v21 = 4LL;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DC2E7, 0LL, 0LL, 4u, &pData);
  }
  return v17;
}

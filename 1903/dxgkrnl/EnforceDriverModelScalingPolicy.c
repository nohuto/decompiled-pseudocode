/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C012BD54
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D0DC4 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C012A6A8 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C012BE30 (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGADAPTER *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v24[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v25[72]; // [rsp+78h] [rbp-60h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v22);
  v9 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v18 + 24) = 7726LL;
      WdLogEvent5_WdAssertion(v18);
      EnforceDriverModelScalingPolicy(v9, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v9, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((__int64)v23, 0xFFFFFFFFLL, v12);
      if ( v13 < 0 )
      {
        v19 = v13;
        if ( v13 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
          v20[3] = v19;
          v20[4] = v9;
          v20[5] = *((int *)v9 + 70);
          v20[6] = *((unsigned int *)v9 + 69);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
          v21[3] = v19;
          v21[4] = v9;
          v21[5] = *((int *)v9 + 70);
          v21[6] = *((unsigned int *)v9 + 69);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v9, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v23);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v17);
  }
}

/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C00B5980
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B5744 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC7FC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00B5A34 (_EnforceDriverModelScalingPolicy.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGADAPTER *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v9 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v16 + 24) = 7540LL;
      WdLogEvent5_WdAssertion(v16);
      EnforceDriverModelScalingPolicy(v9, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v9, 0LL);
      v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
      if ( v11 < 0 )
      {
        v17 = v11;
        if ( v11 == -1073741130 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v18[3] = v17;
          v18[4] = v9;
          v18[5] = *((int *)v9 + 70);
          v18[6] = *((unsigned int *)v9 + 69);
          WdLogEvent5_WdWarning(v18);
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v19[3] = v17;
          v19[4] = v9;
          v19[5] = *((int *)v9 + 70);
          v19[6] = *((unsigned int *)v9 + 69);
          WdLogEvent5_WdError(v19);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v9, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v20);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v21);
    }
    DXGADAPTER::ReleaseReference(v9);
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v15);
  }
}

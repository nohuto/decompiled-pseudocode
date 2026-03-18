/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C00D0000
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00D01C0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C00D00E4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

bool __fastcall DxgkIsTargetNonStandard(const struct _LUID *a1, __int64 a2)
{
  unsigned int v2; // r14d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool IsTargetNonStandard; // di
  DXGADAPTER *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbp
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 LowPart; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v22[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v23[72]; // [rsp+78h] [rbp-70h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v20);
  IsTargetNonStandard = 0;
  v10 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v5, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
    v11 = COREADAPTERACCESS::AcquireShared((__int64)v21, 0xFFFFFFFFLL, 0LL);
    v15 = v11;
    if ( v11 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v18[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v18[5] = v15;
    }
    else
    {
      if ( *((_QWORD *)v10 + 319) )
      {
        IsTargetNonStandard = DmmIsTargetNonStandard(v10, v2);
LABEL_5:
        COREACCESS::~COREACCESS((COREACCESS *)v23);
        COREACCESS::~COREACCESS((COREACCESS *)v22);
        return IsTargetNonStandard;
      }
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v18[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v18[5] = -1073741811LL;
    }
    v18[4] = LowPart;
    WdLogEvent5_WdError(v18);
    goto LABEL_5;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
  v17[3] = a1->HighPart;
  v17[4] = a1->LowPart;
  v17[5] = -1073741811LL;
  WdLogEvent5_WdError(v17);
  return 0;
}

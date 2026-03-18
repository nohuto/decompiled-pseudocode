/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C00CE304
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00CDF30 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C00CE3BC (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

bool __fastcall DxgkIsTargetNonStandard(const struct _LUID *a1, unsigned int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rcx
  bool IsTargetNonStandard; // di
  DXGADAPTER *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 LowPart; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v18[40]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+A0h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  IsTargetNonStandard = 0;
  v8 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5, 0LL);
    DXGADAPTER::ReleaseReference(v8);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
    v11 = v9;
    if ( v9 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v14[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v14[5] = v11;
    }
    else
    {
      if ( *((_QWORD *)v8 + 315) )
      {
        IsTargetNonStandard = DmmIsTargetNonStandard(v8, a2);
LABEL_5:
        COREACCESS::~COREACCESS((COREACCESS *)v18);
        COREACCESS::~COREACCESS((COREACCESS *)v17);
        return IsTargetNonStandard;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v14[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v14[5] = -1073741811LL;
    }
    v14[4] = LowPart;
    WdLogEvent5_WdError(v14);
    goto LABEL_5;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v13[3] = a1->HighPart;
  v13[4] = a1->LowPart;
  v13[5] = -1073741811LL;
  WdLogEvent5_WdError(v13);
  return 0;
}

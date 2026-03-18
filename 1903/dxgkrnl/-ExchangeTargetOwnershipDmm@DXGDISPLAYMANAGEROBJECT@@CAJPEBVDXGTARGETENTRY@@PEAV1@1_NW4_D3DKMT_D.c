/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CA74
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C014847C (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028C6B0 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028CF38 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C028D258 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00037B4 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00D0100 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C028C574 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C02B0810 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int LowPart; // edx
  unsigned int TargetUsage; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE v38[8]; // [rsp+20h] [rbp-B1h] BYREF
  struct _LUID v39; // [rsp+28h] [rbp-A9h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+40h] [rbp-91h] BYREF
  struct DXGADAPTER *v42[3]; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v43[8]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v44[64]; // [rsp+68h] [rbp-69h] BYREF
  _BYTE v45[72]; // [rsp+A8h] [rbp-29h] BYREF

  v5 = a1[3];
  v42[0] = 0LL;
  v39 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v42, &v39);
  v13 = v42[0];
  if ( v42[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v42[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v43, 0xFFFFFFFFLL, v16) < 0 || !*((_QWORD *)v13 + 319) )
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v39.HighPart;
      *(_QWORD *)(v20 + 32) = v5.LowPart;
      WdLogEvent5_WdWarning(v20);
      LODWORD(v15) = -1073741275;
LABEL_16:
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      goto LABEL_17;
    }
    if ( !a4 || !*(_QWORD *)&a2 )
      goto LABEL_12;
    LowPart = a1[4].LowPart;
    v38[0] = 0;
    TargetUsage = DmmGetTargetUsage(v13, LowPart, v38);
    if ( TargetUsage != a5 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[3] = v39.HighPart;
      v26[4] = v5.LowPart;
      v26[5] = a1[4].LowPart;
      v26[6] = a5;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v15) = -1073741267;
      goto LABEL_16;
    }
    LOBYTE(v23) = v38[0];
    v27 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v23);
    v15 = v27;
    if ( v27 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v39.HighPart;
      v31[4] = v5.LowPart;
      v31[5] = a1[4].LowPart;
      v31[6] = v15;
    }
    else
    {
LABEL_12:
      v32 = a1[4].LowPart;
      v40[0] = &v39;
      v41 = a3;
      v40[1] = &v41;
      v39 = a2;
      v33 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v13, v32, v40);
      v15 = v33;
      if ( v33 >= 0 )
      {
        LODWORD(v15) = 0;
        goto LABEL_16;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      v31[3] = v15;
    }
    WdLogEvent5_WdWarning(v31);
    goto LABEL_16;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = v39.HighPart;
  *(_QWORD *)(v14 + 32) = v5.LowPart;
  WdLogEvent5_WdWarning(v14);
  LODWORD(v15) = -1073741275;
LABEL_17:
  DXGADAPTER_REFERENCE::Assign(v42, 0LL);
  return (unsigned int)v15;
}

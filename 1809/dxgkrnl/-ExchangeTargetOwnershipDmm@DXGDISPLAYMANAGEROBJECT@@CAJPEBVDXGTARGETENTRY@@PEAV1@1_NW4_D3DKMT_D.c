/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01412CC (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0256428 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C0256C88 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C0256FA8 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00E4368 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02562F8 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C02783F0 (DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        __int64 a2,
        struct _LUID a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int LowPart; // edx
  int TargetUsage; // eax
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
  struct _LUID v38; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v39[2]; // [rsp+38h] [rbp-41h] BYREF
  DXGADAPTER *v40; // [rsp+48h] [rbp-31h] BYREF
  char v41[8]; // [rsp+58h] [rbp-21h] BYREF
  char v42[32]; // [rsp+60h] [rbp-19h] BYREF
  char v43[40]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = a1[3];
  v40 = 0LL;
  v38 = v5;
  v10 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)&v40, v5);
  v14 = v10;
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v5.HighPart;
    *(_QWORD *)(v15 + 32) = v5.LowPart;
    WdLogEvent5_WdWarning(v15);
    LODWORD(v16) = -1073741275;
    goto LABEL_17;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v10, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41) >= 0 && *((_QWORD *)v14 + 315) )
  {
    if ( !a4 || !a2 )
      goto LABEL_12;
    LowPart = a1[4].LowPart;
    LOBYTE(v44) = 0;
    TargetUsage = DmmGetTargetUsage(v14, LowPart, &v44);
    if ( TargetUsage != a5 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[3] = v38.HighPart;
      v26[4] = v5.LowPart;
      v26[5] = a1[4].LowPart;
      v26[6] = a5;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v16) = -1073741267;
      goto LABEL_16;
    }
    v27 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v44);
    v16 = v27;
    if ( v27 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v38.HighPart;
      v31[4] = v5.LowPart;
      v31[5] = a1[4].LowPart;
      v31[6] = v16;
    }
    else
    {
LABEL_12:
      v32 = a1[4].LowPart;
      v39[0] = &v44;
      v38 = a3;
      v39[1] = &v38;
      v44 = a2;
      v33 = DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad_(v14, v32, v39);
      v16 = v33;
      if ( v33 >= 0 )
      {
        LODWORD(v16) = 0;
        goto LABEL_16;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      v31[3] = v16;
    }
    WdLogEvent5_WdWarning(v31);
    goto LABEL_16;
  }
  v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  *(_QWORD *)(v20 + 24) = v5.HighPart;
  *(_QWORD *)(v20 + 32) = v5.LowPart;
  WdLogEvent5_WdWarning(v20);
  LODWORD(v16) = -1073741275;
LABEL_16:
  COREACCESS::~COREACCESS((COREACCESS *)v43);
  COREACCESS::~COREACCESS((COREACCESS *)v42);
LABEL_17:
  if ( v40 )
    DXGADAPTER::ReleaseReference(v40);
  return (unsigned int)v16;
}

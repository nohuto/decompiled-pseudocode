/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0228700
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetCsCumulativeRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C003DCC4 (-SetCsCumulativeRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C003DD24 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 *     ?StartStopCoreDripsBlockerAccounting@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0212308 (-StartStopCoreDripsBlockerAccounting@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C0228B38 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct DXGADAPTER *a1, int *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  struct _DEVICE_OBJECT *v16; // rdi
  struct DXGGLOBAL *v17; // rax
  struct _EPROCESS *v18; // rbx
  __int64 v19; // rdi
  DXGGLOBAL *Global; // rax
  bool v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGADAPTER *v26; // [rsp+38h] [rbp-30h]
  char v27; // [rsp+40h] [rbp-28h]
  unsigned __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v26 = a1;
  v27 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  if ( *((_DWORD *)a1 + 44) != 1 )
    goto LABEL_17;
  v5 = *((unsigned int *)a1 + 52);
  if ( (unsigned int)v5 >= 6 )
    goto LABEL_17;
  v6 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, *((struct ADAPTER_RENDER **)a1 + 316), &v28);
  v10 = v6;
  if ( v6 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = v4;
    v11[4] = v2;
    v11[5] = a1;
    v11[6] = v10;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_17;
  }
  if ( (_DWORD)v4 == 1 )
  {
    DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, v28);
    v18 = *(struct _EPROCESS **)(v2 + 56);
    *(_DWORD *)(v2 + 96) = 1;
    v19 = *((_QWORD *)a1 + 25);
    Global = DXGGLOBAL::GetGlobal(v23);
    v21 = 1;
    goto LABEL_16;
  }
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v22 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v22 + 24) = v4;
    WdLogEvent5_WdError(v22);
    goto LABEL_17;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 8 * v5);
  if ( v28 > v12 && *(_DWORD *)(v2 + 96) )
    DXGPROCESS::SetCsCumulativeRunningTime((DXGPROCESS *)v2, v5, v28 - v12);
  DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, 0LL);
  *(_DWORD *)(v2 + 96) = 0;
  if ( (_DWORD)v4 != 3 )
  {
    v18 = *(struct _EPROCESS **)(v2 + 56);
    v19 = *((_QWORD *)a1 + 25);
    Global = DXGGLOBAL::GetGlobal(v13);
    v21 = 0;
LABEL_16:
    DXGGLOBAL::StartStopCoreDripsBlockerAccounting(Global, v19, v18, v21);
    goto LABEL_17;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v5);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v2 + 56);
    v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 24);
    v17 = DXGGLOBAL::GetGlobal(v13);
    DXGGLOBAL::ReportDripsBlocker((__int64)v17, 1LL, v16, v15, v14);
    DXGPROCESS::SetCsCumulativeRunningTime((DXGPROCESS *)v2, v5, 0LL);
  }
LABEL_17:
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  return 0LL;
}

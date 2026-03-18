/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C025D260
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C004467C (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C024100C (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@.c)
 *     ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242E98 (-EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C025D578 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct ADAPTER_RENDER **a1, int *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rdi
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rdi
  struct _EPROCESS *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGGLOBAL *Global; // rax
  bool v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE v28[8]; // [rsp+30h] [rbp-38h] BYREF
  struct ADAPTER_RENDER **v29; // [rsp+38h] [rbp-30h]
  char v30; // [rsp+40h] [rbp-28h]
  unsigned __int64 v31; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v29 = a1;
  v30 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v5 = *((unsigned int *)a1 + 52);
    if ( (unsigned int)v5 < 6 )
    {
      v6 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, a1[320], &v31);
      v10 = v6;
      if ( v6 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v11[3] = v4;
        v11[4] = v2;
        v11[5] = a1;
        v11[6] = v10;
        WdLogEvent5_WdWarning(v11);
        goto LABEL_14;
      }
      v12 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == 1 )
      {
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, (unsigned int)v5, v31);
        v20 = *(struct _EPROCESS **)(v2 + 56);
        *(_DWORD *)(v2 + 88) = 1;
        v19 = (__int64)a1[25];
        Global = DXGGLOBAL::GetGlobal(v26, v25);
        v24 = 1;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          v13 = WdLogNewEntry5_WdError(v12, v7, v9);
          *(_QWORD *)(v13 + 24) = v4;
          WdLogEvent5_WdError(v13);
          goto LABEL_14;
        }
        v14 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v5);
        if ( v31 > v14 && *(_DWORD *)(v2 + 88) )
        {
          v15 = *(_QWORD *)(v2 + 56);
          v16 = v31 - v14;
          v17 = (__int64)a1[25];
          v18 = DXGGLOBAL::GetGlobal(v12, v14);
          DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking((__int64)v18, v17, v15, v16);
        }
        DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, (unsigned int)v5, 0LL);
        *(_DWORD *)(v2 + 88) = 0;
        v19 = (__int64)a1[25];
        v20 = *(struct _EPROCESS **)(v2 + 56);
        Global = DXGGLOBAL::GetGlobal(v22, v21);
        v24 = 0;
      }
      DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(Global, v19, v20, v24);
    }
  }
LABEL_14:
  if ( v30 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return 0LL;
}

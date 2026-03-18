/*
 * XREFs of ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02B2970
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023DF70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  size_t v22; // [rsp+50h] [rbp+18h] BYREF

  v22 = a3;
  v3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  memset(a2, 0, 0x2000uLL);
  v11 = *((_QWORD *)a1 + 4);
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 2552);
    if ( !v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v14);
      v13 = *(_QWORD *)(v11 + 2552);
    }
    v15 = *(_QWORD *)(v13 + 88);
    if ( v15 )
    {
      v22 = 0LL;
      v17 = VIDPN_MGR::AcquireDiagInfo(v15, a2, 0x2000uLL, 1, 0LL, &v22);
      if ( v17 == -2147483643 )
      {
        v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = 0x2000LL;
        *(_QWORD *)(v21 + 32) = v22;
        WdLogEvent5_WdWarning(v21);
        return 2147483653LL;
      }
      else
      {
        if ( v17 < 0 )
          return (unsigned int)v17;
        return v3;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(0LL, v8, v10);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdError(v16);
      return 3223192373LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    return 3223191554LL;
  }
}

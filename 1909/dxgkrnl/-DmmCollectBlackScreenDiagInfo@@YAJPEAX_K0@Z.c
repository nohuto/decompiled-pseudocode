/*
 * XREFs of ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02B2834
 * Callers:
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294DEC (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0EE8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectBlackScreenDiagInfo(DXGADAPTER *a1, size_t a2, void *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  size_t v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a1 + 319) )
    return 0LL;
  memset(a3, 0, 0x2000uLL);
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v10, v11);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
  v18 = 0LL;
  result = VIDPN_MGR::AcquireDiagInfo(v12, a3, 0x2000uLL, 1, 0LL, &v18);
  if ( (_DWORD)result == -2147483643 )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 32) = v18;
    *(_QWORD *)(v17 + 24) = 0x2000LL;
    WdLogEvent5_WdWarning(v17);
    return 2147483653LL;
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

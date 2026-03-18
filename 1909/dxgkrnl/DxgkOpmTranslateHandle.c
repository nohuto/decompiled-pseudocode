/*
 * XREFs of DxgkOpmTranslateHandle @ 0x1C0155B0C
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0155BB8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateHandle(struct _KTHREAD ***this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KTHREAD **v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v12 + 24) = 970LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 971LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v14 + 24) = 972LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = this[319];
  if ( v9 )
  {
    if ( v9[40] != KeGetCurrentThread() )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9, v6);
      *(_QWORD *)(v11 + 24) = 976LL;
      WdLogEvent5_WdAssertion(v11);
      v9 = this[319];
    }
    return ADAPTER_DISPLAY::OpmTranslateHandle((ADAPTER_DISPLAY *)v9, a2, a3);
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v15);
    return 3221225659LL;
  }
}

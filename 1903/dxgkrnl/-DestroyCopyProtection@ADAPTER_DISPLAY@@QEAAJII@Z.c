/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01F0D1C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0035C80 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0036000 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEFC4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C01F1C48 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGCOPYPROTECTION *v20; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  DXGCOPYPROTECTION *v23; // rcx
  DXGCOPYPROTECTION **v24; // rax
  _BYTE v26[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 5364LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 5367LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *((_QWORD *)Current + 36);
  if ( *(struct _KTHREAD **)(v14 + 16) != CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, CurrentThread);
    *(_QWORD *)(v15 + 24) = 5368LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, Current);
  v20 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(Current, (__int64)CopyProtection);
    v23 = *(DXGCOPYPROTECTION **)v20;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v20 + 8LL) != v20
      || (v24 = (DXGCOPYPROTECTION **)*((_QWORD *)v20 + 1), *v24 != v20) )
    {
      __fastfail(3u);
    }
    *v24 = v23;
    *((_QWORD *)v23 + 1) = v24;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v20);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    v22 = 0;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v22 = -1073741811;
    v21[3] = v4;
    v21[4] = Current;
    v21[5] = v5;
    v21[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return v22;
}

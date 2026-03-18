/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01C54C8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF240 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C01C2A30 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGCOPYPROTECTION *v19; // rdi
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  int v22; // ebx
  int v23; // eax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 5070LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 5073LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)Current + 39);
  if ( *(struct _KTHREAD **)(v13 + 8) != KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 5074LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v19 = CopyProtection;
  if ( CopyProtection )
  {
    v22 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v23 = ADAPTER_DISPLAY::SetCopyProtection(this, v16);
    if ( v23 < 0 )
      *((_DWORD *)v19 + 14) = v22;
    v21 = v23;
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v20[4] = Current;
    v21 = -1073741811;
    v20[6] = -1073741811LL;
    v20[3] = v5;
    v20[5] = v7;
    WdLogEvent5_WdWarning(v20);
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return v21;
}

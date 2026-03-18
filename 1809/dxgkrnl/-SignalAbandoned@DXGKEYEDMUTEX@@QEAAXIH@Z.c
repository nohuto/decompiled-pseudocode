/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235D28
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C003E00C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235DA8 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  struct DXGKEYEDMUTEX *v7; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = this;
  v2 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v8, v2, Current, &v7);
  if ( v7 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v7, v2, 0);
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, v4, v5);
    *(_QWORD *)(v6 + 24) = v2;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
  }
  if ( v8 )
    DXGKEYEDMUTEX::ReleaseReference(v8);
}

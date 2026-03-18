/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003DBC4
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C025E0D0 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C025A558 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this)
{
  __int64 v2; // rax
  struct DXGVMBUSCHANNEL *v3; // rcx

  if ( this[6] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 348LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[13];
  if ( v3 )
    DisableVmBusChannel(v3);
}

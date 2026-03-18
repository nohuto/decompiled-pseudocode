/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C00446DC
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C0294660 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0290C48 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  struct DXGVMBUSCHANNEL *v4; // rcx

  if ( this[7] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 356LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[13];
  if ( v4 )
    DisableVmBusChannel(v4);
}

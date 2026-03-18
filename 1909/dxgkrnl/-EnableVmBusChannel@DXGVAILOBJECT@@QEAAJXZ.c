/*
 * XREFs of ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004982C
 * Callers:
 *     NtDxgkVailConnect @ 0x1C0294250 (NtDxgkVailConnect.c)
 * Callees:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C0290E8C (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::EnableVmBusChannel(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  struct DXGVMBUSCHANNEL *v4; // rcx
  __int64 result; // rax

  if ( this[7] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 342LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this[13];
  result = 3221225473LL;
  if ( v4 )
    return EnableVmBusChannel(v4, 0);
  return result;
}

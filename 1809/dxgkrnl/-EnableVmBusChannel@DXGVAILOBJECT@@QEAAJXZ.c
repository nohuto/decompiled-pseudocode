/*
 * XREFs of ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004278C
 * Callers:
 *     NtDxgkVailConnect @ 0x1C025DCC0 (NtDxgkVailConnect.c)
 * Callees:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C025A798 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::EnableVmBusChannel(struct _KTHREAD **this)
{
  __int64 v2; // rax
  struct DXGVMBUSCHANNEL *v3; // rcx
  __int64 result; // rax

  if ( this[6] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[13];
  result = 3221225473LL;
  if ( v3 )
    return EnableVmBusChannel(v3, 0);
  return result;
}

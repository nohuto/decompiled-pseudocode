/*
 * XREFs of ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1C0042730
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C025BA9C (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x1C025A798 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::EnableVmBusChannel(struct _KTHREAD **this)
{
  __int64 v2; // rax
  struct DXGVMBUSCHANNEL *v3; // rcx
  __int64 result; // rax

  if ( this[3] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 466LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = this[8];
  result = 3221225473LL;
  if ( v3 )
    return EnableVmBusChannel(v3, 1);
  return result;
}

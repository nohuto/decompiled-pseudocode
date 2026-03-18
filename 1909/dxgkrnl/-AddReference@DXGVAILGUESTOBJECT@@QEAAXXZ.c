/*
 * XREFs of ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C028FBEC
 * Callers:
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0292998 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0293810 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVAILGUESTOBJECT::AddReference(DXGVAILGUESTOBJECT *this)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18736LL) != CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, CurrentThread);
    *(_QWORD *)(v3 + 24) = 1967LL;
    WdLogEvent5_WdAssertion(v3);
  }
  ++*((_DWORD *)this + 2);
}

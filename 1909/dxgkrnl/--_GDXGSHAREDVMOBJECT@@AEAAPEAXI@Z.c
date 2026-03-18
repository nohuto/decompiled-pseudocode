/*
 * XREFs of ??_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z @ 0x1C003CC98
 * Callers:
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0219E3C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGSHAREDVMOBJECT::`scalar deleting destructor'(_QWORD *P, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( P[1] )
  {
    v3 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v3 + 24) = 169LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)P + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v4 + 24) = 170LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)P + 6) )
  {
    v5 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v5 + 24) = 171LL;
    WdLogEvent5_WdAssertion(v5);
  }
  ExFreePoolWithTag(P, 0);
  return P;
}

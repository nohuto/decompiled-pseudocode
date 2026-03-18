/*
 * XREFs of ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C0001EE8
 * Callers:
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0001EAC (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1C00CAEC0 (-DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(DXGADAPTER *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 2850LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !*((_QWORD *)this + 20) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v4[3] = 275LL;
    v4[4] = 17LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v2 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = v2;
}

/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C00C6A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C00C5668 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

char OPMDestroyAllProtectedOutputs()
{
  PVOID v0; // rdi
  char result; // al
  struct _KMUTANT *v2; // rcx

  v0 = P;
  CMutex::Lock((void **)P + 4);
  result = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
             (__int64)v0,
             0LL,
             (__int64)v0 + 24);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 4);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}

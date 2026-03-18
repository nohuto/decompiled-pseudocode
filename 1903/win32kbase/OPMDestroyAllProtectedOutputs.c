/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C0088F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0088FC4 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00890E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

LONG OPMDestroyAllProtectedOutputs()
{
  char *v0; // rdi
  LONG result; // eax
  struct _KMUTANT *v2; // rcx

  v0 = (char *)P;
  OPM::CMutex::Lock((OPM::CMutex *)((char *)P + 56));
  result = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v0 + 24, 0LL, v0 + 48);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 7);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}

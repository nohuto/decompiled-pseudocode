/*
 * XREFs of ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0123B50
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00AF858 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0123990 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00852B0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00B0070 (CallMonitor.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x1C0120730 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

__int64 __fastcall COPMProtectedOutput::Destroy(COPMProtectedOutput *this)
{
  void **v1; // rbx
  int v3; // esi
  int v4; // eax
  int v5; // eax

  v1 = (void **)*((_QWORD *)this + 1);
  v3 = 0;
  OPM::CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
  {
    v4 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x2324A3u, (char *)this + 72, 8u, 0LL, 0);
    *((_BYTE *)this + 80) = 0;
    if ( v4 < 0 )
      v3 = v4;
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  v5 = OPM::CMonitorPDO::Destroy(this);
  if ( v5 < 0 && v3 >= 0 )
    return (unsigned int)v5;
  return (unsigned int)v3;
}

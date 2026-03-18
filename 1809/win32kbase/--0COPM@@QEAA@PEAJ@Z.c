/*
 * XREFs of ??0COPM@@QEAA@PEAJ@Z @ 0x1C008F0F4
 * Callers:
 *     OPMInitialize @ 0x1C008F084 (OPMInitialize.c)
 * Callees:
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C008F160 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 *     ??0?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@PEAJ@Z @ 0x1C008F1CC (--0-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@PEAJ@Z.c)
 *     ??0?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@PEAJ@Z @ 0x1C008F268 (--0-$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@PEAJ@Z.c)
 */

COPM *__fastcall COPM::COPM(COPM *this, int *a2)
{
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>();
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(
    (char *)this + 8,
    a2);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(
    (char *)this + 16,
    a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = -1071774452;
  OPM::CMutex::CMutex((COPM *)((char *)this + 48), a2);
  OPM::CMutex::CMutex((COPM *)((char *)this + 56), a2);
  return this;
}

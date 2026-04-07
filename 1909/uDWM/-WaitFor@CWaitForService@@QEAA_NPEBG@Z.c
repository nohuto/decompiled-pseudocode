/*
 * XREFs of ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800800C4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18007EECC (-Cleanup@CWaitForService@@QEAAXXZ.c)
 */

bool __fastcall CWaitForService::WaitFor(CWaitForService *this, const unsigned __int16 *a2)
{
  bool v3; // di
  SC_HANDLE v4; // rax
  SC_HANDLE v5; // rsi
  SC_HANDLE v6; // rax

  v3 = 0;
  v4 = OpenSCManagerW(0LL, 0LL, 4u);
  v5 = v4;
  if ( !v4 )
    goto LABEL_5;
  v6 = OpenServiceW(v4, L"RPCSS", 4u);
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    *((_QWORD *)this + 3) = this;
    *((_QWORD *)this + 2) = CWaitForService::s_ServiceStarted;
    *((_DWORD *)this + 2) = 2;
    v3 = NotifyServiceStatusChangeW(v6, 8u, (PSERVICE_NOTIFYW)((char *)this + 8)) == 0;
  }
  CloseServiceHandle(v5);
  if ( !v3 )
LABEL_5:
    CWaitForService::Cleanup((SC_HANDLE *)this);
  return v3;
}

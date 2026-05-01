/*
 * XREFs of CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___ @ 0x180292EF8
 * Callers:
 *     _lambda_858eee636f27872cdf74bbc97c00a8bc_::operator() @ 0x180292FB0 (_lambda_858eee636f27872cdf74bbc97c00a8bc_--operator().c)
 *     _lambda_795e02c192f463c18ca265aec6362396_::operator() @ 0x1802A3964 (_lambda_795e02c192f463c18ca265aec6362396_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___(
        PVOID pv,
        HWND hWnd,
        _QWORD *a3)
{
  struct CCrashDetector::CHandler *v6; // rax
  struct CCrashDetector::CHandler *v7; // r8

  v6 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = off_18042E7B8;
    *((_QWORD *)v6 + 1) = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  return CCrashDetector::_StartMonitoringThreadOfWindow(pv, hWnd, v7);
}

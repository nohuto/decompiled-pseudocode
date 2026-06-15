/*
 * XREFs of ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x18014020C
 * Callers:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800500B0 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18013E130 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall AtmosCheck::SetExpiryTimer(char *pv, struct _FILETIME a2)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  signed int v8; // [rsp+30h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  signed int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  pftDueTime = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x7530u);
    *((struct _FILETIME *)pv + 30) = a2;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = LastError;
    if ( (unsigned int)dword_1801B64F0 > 5 )
    {
      v13 = 0;
      v11 = &v8;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D351, v6, v7, 3u, &pData);
    }
  }
  if ( pv != (char *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(pv + 56));
}

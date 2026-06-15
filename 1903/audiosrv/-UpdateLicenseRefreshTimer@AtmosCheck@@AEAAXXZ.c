/*
 * XREFs of ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800500B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18004FB90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 *     _lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator() @ 0x18006A6E4 (_lambda_fb23503d9b3566a26ea1a9c0ca33164d_--operator().c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180140618 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18013E130 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x18013F1A8 (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x18014020C (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 */

void __fastcall AtmosCheck::UpdateLicenseRefreshTimer(AtmosCheck *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v4; // rcx
  signed int LastError; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  signed int v8; // [rsp+30h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  signed int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  if ( *((_BYTE *)pv + 216) )
  {
    NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate(pv);
    if ( NearestLicenseExpiryDate )
    {
      v4 = *((_QWORD *)pv + 30);
      if ( !v4 || NearestLicenseExpiryDate < v4 )
        AtmosCheck::SetExpiryTimer(pv, NearestLicenseExpiryDate);
    }
    else if ( *((_QWORD *)pv + 25) )
    {
      AtmosCheck::CancelLicenseRefreshTimer(pv);
    }
  }
  else if ( !*((_QWORD *)pv + 25) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback, pv, 0LL);
    *((_QWORD *)pv + 25) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime.dwHighDateTime = -1;
      pftDueTime.dwLowDateTime = 1294967296;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0x5265C00u, 0x7530u);
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
  }
}

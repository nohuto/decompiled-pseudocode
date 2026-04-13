/*
 * XREFs of ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800ACEC8
 * Callers:
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800AC01C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
        const WCHAR **a1,
        const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const WCHAR *v6; // r8
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+5Ch] [rbp-2Ch]
  const unsigned __int16 *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &Src;
      LODWORD(v7) = 0;
      if ( *a1 )
      {
        v6 = *a1;
        v7 = -1LL;
        do
          ++v7;
        while ( (*a1)[v7] );
      }
      v10 = v6;
      v11 = 2 * v7 + 2;
      LODWORD(v7) = 0;
      v12 = 0;
      if ( a2 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)a2 + v7) );
      }
      v15 = 0;
      if ( !a2 )
        a2 = &word_1800FD1E0;
      v14 = v7 + 1;
      v13 = a2;
      LODWORD(v4) = TlgWrite(v5, &unk_18016F402, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}

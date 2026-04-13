/*
 * XREFs of ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800ACAB8
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_54f09f28fe32d0f01534b02300ec8cff___ @ 0x1800ACBEC (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_54f09f28fe32d0f01534b02300ec8c.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        const WCHAR **a1,
        const WCHAR *a2,
        const unsigned __int16 *a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]
  int v21; // [rsp+6Ch] [rbp-2Ch]
  const unsigned __int16 *v22; // [rsp+70h] [rbp-28h]
  int v23; // [rsp+78h] [rbp-20h]
  int v24; // [rsp+7Ch] [rbp-1Ch]

  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = &Src;
    LODWORD(v9) = 0;
    if ( *a1 )
    {
      v8 = *a1;
      v9 = -1LL;
      do
        ++v9;
      while ( (*a1)[v9] );
    }
    v16 = v8;
    v17 = 2 * v9 + 2;
    LODWORD(v10) = 0;
    v18 = 0;
    v11 = a2 == 0LL;
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
      v11 = a2 == 0LL;
    }
    v12 = 2 * v10 + 2;
    v21 = 0;
    if ( v11 )
      a2 = &Src;
    v20 = v12;
    v19 = a2;
    LODWORD(v13) = 0;
    if ( a3 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)a3 + v13) );
    }
    v24 = 0;
    if ( !a3 )
      a3 = &word_1800FD7D0;
    v23 = v13 + 1;
    v22 = a3;
    LODWORD(v6) = TlgWrite(v7, &unk_18016F91E, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}

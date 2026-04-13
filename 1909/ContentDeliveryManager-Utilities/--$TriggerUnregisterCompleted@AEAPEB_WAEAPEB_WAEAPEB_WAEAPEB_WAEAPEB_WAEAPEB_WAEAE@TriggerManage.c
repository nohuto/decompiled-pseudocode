/*
 * XREFs of ??$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000AEAEPEBD@Z @ 0x1800693E4
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x180069628 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::TriggerUnregisterCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,unsigned char &>(
        const WCHAR **a1,
        const WCHAR **a2,
        const WCHAR **a3,
        const WCHAR **a4,
        const WCHAR **a5,
        const WCHAR **a6,
        _BYTE *a7,
        const unsigned __int16 *a8)
{
  const struct _TlgProvider_t *v12; // rax
  const struct _TlgProvider_t *v13; // r10
  const WCHAR *v14; // r8
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rdx
  const WCHAR *v19; // rcx
  const WCHAR *v20; // rdx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // rdx
  const WCHAR *v23; // rdx
  const unsigned __int16 *v24; // rcx
  bool v25; // zf
  bool v27; // [rsp+38h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-79h] BYREF
  const WCHAR *v29; // [rsp+68h] [rbp-59h]
  int v30; // [rsp+70h] [rbp-51h]
  int v31; // [rsp+74h] [rbp-4Dh]
  const WCHAR *v32; // [rsp+78h] [rbp-49h]
  int v33; // [rsp+80h] [rbp-41h]
  int v34; // [rsp+84h] [rbp-3Dh]
  const WCHAR *v35; // [rsp+88h] [rbp-39h]
  int v36; // [rsp+90h] [rbp-31h]
  int v37; // [rsp+94h] [rbp-2Dh]
  const WCHAR *v38; // [rsp+98h] [rbp-29h]
  int v39; // [rsp+A0h] [rbp-21h]
  int v40; // [rsp+A4h] [rbp-1Dh]
  const WCHAR *v41; // [rsp+A8h] [rbp-19h]
  int v42; // [rsp+B0h] [rbp-11h]
  int v43; // [rsp+B4h] [rbp-Dh]
  const WCHAR *v44; // [rsp+B8h] [rbp-9h]
  int v45; // [rsp+C0h] [rbp-1h]
  int v46; // [rsp+C4h] [rbp+3h]
  bool *v47; // [rsp+C8h] [rbp+7h]
  __int64 v48; // [rsp+D0h] [rbp+Fh]
  const unsigned __int16 *v49; // [rsp+D8h] [rbp+17h]
  int v50; // [rsp+E0h] [rbp+1Fh]
  int v51; // [rsp+E4h] [rbp+23h]

  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v13 = v12;
  if ( *(_DWORD *)v12 > 5u )
  {
    LODWORD(v12) = 0;
    if ( (*((_QWORD *)v13 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v13 + 3) & 0x200000000000LL) == *((_QWORD *)v13 + 3) )
    {
      v14 = &Src;
      v15 = &Src;
      LODWORD(v16) = 0;
      if ( *a1 )
      {
        v15 = *a1;
        v16 = -1LL;
        do
          ++v16;
        while ( (*a1)[v16] );
      }
      v17 = *a2;
      v30 = 2 * v16 + 2;
      LODWORD(v16) = 0;
      v29 = v15;
      v18 = &Src;
      v31 = 0;
      if ( v17 )
      {
        v18 = v17;
        v16 = -1LL;
        do
          ++v16;
        while ( v17[v16] );
      }
      v19 = *a3;
      v33 = 2 * v16 + 2;
      LODWORD(v16) = 0;
      v32 = v18;
      v20 = &Src;
      v34 = 0;
      if ( v19 )
      {
        v20 = v19;
        v16 = -1LL;
        do
          ++v16;
        while ( v19[v16] );
      }
      v21 = *a4;
      v36 = 2 * v16 + 2;
      LODWORD(v16) = 0;
      v35 = v20;
      v22 = &Src;
      v37 = 0;
      if ( v21 )
      {
        v22 = v21;
        v16 = -1LL;
        do
          ++v16;
        while ( v21[v16] );
      }
      v38 = v22;
      v39 = 2 * v16 + 2;
      v23 = &Src;
      v40 = 0;
      LODWORD(v16) = 0;
      if ( *a5 )
      {
        v23 = *a5;
        v16 = -1LL;
        do
          ++v16;
        while ( (*a5)[v16] );
      }
      v41 = v23;
      v42 = 2 * v16 + 2;
      v43 = 0;
      LODWORD(v16) = 0;
      if ( *a6 )
      {
        v14 = *a6;
        v16 = -1LL;
        do
          ++v16;
        while ( (*a6)[v16] );
      }
      v24 = a8;
      v45 = 2 * v16 + 2;
      v44 = v14;
      v46 = 0;
      v48 = 1LL;
      v25 = *a7 == 0;
      v47 = &v27;
      LODWORD(v16) = 0;
      v27 = !v25;
      if ( a8 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)a8 + v16) );
      }
      v51 = 0;
      if ( !a8 )
        v24 = &word_1800FD7D0;
      v50 = v16 + 1;
      v49 = v24;
      LODWORD(v12) = TlgWrite(v13, &unk_18016DE31, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (int)v12;
}

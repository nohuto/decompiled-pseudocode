/*
 * XREFs of ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180034E00
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180026FB0 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const unsigned __int16 *a7)
{
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r10
  const WCHAR *v12; // rdx
  const WCHAR *v13; // r8
  __int64 v14; // rax
  const WCHAR *v15; // r8
  const WCHAR *v16; // rcx
  const unsigned __int16 *v17; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  const WCHAR *v20; // [rsp+58h] [rbp-41h]
  int v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+64h] [rbp-35h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h]
  void *v27; // [rsp+88h] [rbp-11h]
  __int64 v28; // [rsp+90h] [rbp-9h]
  const WCHAR *v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A4h] [rbp+Bh]
  const WCHAR *v32; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+B0h] [rbp+17h]
  int v34; // [rsp+B4h] [rbp+1Bh]
  const unsigned __int16 *v35; // [rsp+B8h] [rbp+1Fh]
  int v36; // [rsp+C0h] [rbp+27h]
  int v37; // [rsp+C4h] [rbp+2Bh]

  v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v11 = v10;
  if ( *(_DWORD *)v10 > 5u )
  {
    LODWORD(v10) = 0;
    if ( (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
    {
      v12 = &Src;
      v13 = &Src;
      LODWORD(v14) = 0;
      if ( *a1 )
      {
        v13 = *a1;
        v14 = -1LL;
        do
          ++v14;
        while ( (*a1)[v14] );
      }
      v20 = v13;
      v21 = 2 * v14 + 2;
      v15 = &Src;
      v22 = 0;
      v27 = &unk_1800FEA8B;
      v23 = a2;
      v24 = 2LL;
      v25 = a3;
      v16 = *a5;
      LODWORD(v14) = 0;
      v26 = 8LL;
      v28 = 1LL;
      if ( v16 )
      {
        v15 = v16;
        v14 = -1LL;
        do
          ++v14;
        while ( v16[v14] );
      }
      v29 = v15;
      v30 = 2 * v14 + 2;
      v31 = 0;
      LODWORD(v14) = 0;
      if ( *a6 )
      {
        v12 = *a6;
        v14 = -1LL;
        do
          ++v14;
        while ( (*a6)[v14] );
      }
      v17 = a7;
      v33 = 2 * v14 + 2;
      LODWORD(v14) = 0;
      v32 = v12;
      v34 = 0;
      if ( a7 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)a7 + v14) );
      }
      v37 = 0;
      if ( !a7 )
        v17 = &word_1800F8406;
      v36 = v14 + 1;
      v35 = v17;
      LODWORD(v10) = TlgWrite(v11, &unk_180161F39, 0LL, 0LL, 9u, &pData);
    }
  }
  return (int)v10;
}

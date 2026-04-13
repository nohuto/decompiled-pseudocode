/*
 * XREFs of ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180034AAC
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180026FB0 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const unsigned __int16 *a7)
{
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r14
  const WCHAR *v12; // r10
  const WCHAR *v13; // r11
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  __int64 v17; // rax
  const unsigned __int16 *v18; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  const WCHAR *v21; // [rsp+58h] [rbp-41h]
  int v22; // [rsp+60h] [rbp-39h]
  int v23; // [rsp+64h] [rbp-35h]
  __int64 v24; // [rsp+68h] [rbp-31h]
  __int64 v25; // [rsp+70h] [rbp-29h]
  __int64 v26; // [rsp+78h] [rbp-21h]
  __int64 v27; // [rsp+80h] [rbp-19h]
  void *v28; // [rsp+88h] [rbp-11h]
  __int64 v29; // [rsp+90h] [rbp-9h]
  const WCHAR *v30; // [rsp+98h] [rbp-1h]
  int v31; // [rsp+A0h] [rbp+7h]
  int v32; // [rsp+A4h] [rbp+Bh]
  const WCHAR *v33; // [rsp+A8h] [rbp+Fh]
  int v34; // [rsp+B0h] [rbp+17h]
  int v35; // [rsp+B4h] [rbp+1Bh]
  const unsigned __int16 *v36; // [rsp+B8h] [rbp+1Fh]
  int v37; // [rsp+C0h] [rbp+27h]
  int v38; // [rsp+C4h] [rbp+2Bh]

  v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v11 = v10;
  if ( *(_DWORD *)v10 > 5u )
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
    v21 = v13;
    v22 = 2 * v14 + 2;
    v15 = &Src;
    v23 = 0;
    v28 = &unk_1800FEA8B;
    v24 = a2;
    v25 = 2LL;
    v26 = a3;
    v16 = *a5;
    LODWORD(v17) = 0;
    v27 = 8LL;
    v29 = 1LL;
    if ( v16 )
    {
      v15 = v16;
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
    }
    v30 = v15;
    v31 = 2 * v17 + 2;
    v32 = 0;
    LODWORD(v17) = 0;
    if ( *a6 )
    {
      v12 = *a6;
      v17 = -1LL;
      do
        ++v17;
      while ( (*a6)[v17] );
    }
    v18 = a7;
    v34 = 2 * v17 + 2;
    LODWORD(v17) = 0;
    v33 = v12;
    v35 = 0;
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *((_BYTE *)a7 + v17) );
    }
    v38 = 0;
    if ( !a7 )
      v18 = &word_1800F8406;
    v37 = v17 + 1;
    v36 = v18;
    LODWORD(v10) = TlgWrite(v11, &unk_18016237D, 0LL, 0LL, 9u, &pData);
  }
  return (int)v10;
}

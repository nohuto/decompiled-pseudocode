/*
 * XREFs of LookUpTableFlushComplete @ 0x1800E4018
 * Callers:
 *     FlushTimerCallbackUserMode @ 0x1800E3CF0 (FlushTimerCallbackUserMode.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800E42C0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800E4320 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     TlgUnregisterAggregateProvider @ 0x1800E44E8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     TraceLoggingProviderId @ 0x1800E3650 (TraceLoggingProviderId.c)
 *     FlushLookUpTableBucket @ 0x1800E3C5C (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1800E439C (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  GUID v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h]
  GUID v17; // [rsp+80h] [rbp-88h] BYREF
  GUID v18; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  GUID *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  __int64 v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  __int64 *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  __int64 v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  int *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  int *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  int *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]
  int *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  __int64 *v36; // [rsp+148h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+48h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    v5 = v4 + 272;
    if ( *(_QWORD *)(v4 + 272) )
    {
      if ( dword_18050C800 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18050C800, 0x400000000000uLL) )
      {
        v6 = *TraceLoggingProviderId(&v17, *(TraceLoggingHProvider *)(a1 + 328));
        v21 = 16LL;
        v20 = &v18;
        v22 = a1 + 280;
        v14 = *(unsigned int *)(a1 + 288);
        v24 = &v14;
        v9 = *(_DWORD *)(a1 + 292);
        v28 = &v9;
        v10 = *(_DWORD *)(a1 + 296);
        v30 = &v10;
        v11 = *(_DWORD *)(a1 + 300);
        v32 = &v11;
        v12 = *(_DWORD *)(a1 + 304);
        v34 = &v12;
        LODWORD(v13) = *(_DWORD *)(a1 + 308);
        v36 = &v13;
        v18 = v6;
        v23 = 8LL;
        v25 = 8LL;
        v26 = v5;
        v27 = 8LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18050C800, &unk_180446D6D, 0LL, 0LL, 0xBu, &pData);
      }
      memset_0(v15, 0, 0x28uLL);
      v7 = v15[1];
      *(_OWORD *)v5 = v15[0];
      v8 = v16;
      *(_OWORD *)(v5 + 16) = v7;
      *(_QWORD *)(v5 + 32) = v8;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}

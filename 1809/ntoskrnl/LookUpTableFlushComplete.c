/*
 * XREFs of LookUpTableFlushComplete @ 0x1406B0238
 * Callers:
 *     TlgAggregateFlush @ 0x14032BBF4 (TlgAggregateFlush.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406B01C0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406B0430 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406D1F50 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     FlushLookUpTableBucket @ 0x140127C48 (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     UpdateInternalStatsOnFlush @ 0x1406B05AC (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v14[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  __int64 v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  _QWORD *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  int *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  int *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  int *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  int *v31; // [rsp+128h] [rbp+20h]
  __int64 v32; // [rsp+130h] [rbp+28h]
  __int64 *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    v5 = v4 + 288;
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( stru_1404013B8.LevelPlus1 > 5 && TlgKeywordOn(&stru_1404013B8, 0x400000000000uLL) )
      {
        v6 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL) - 16LL);
        v17 = &v15;
        v19 = a1 + 296;
        v14[0] = *(unsigned int *)(a1 + 304);
        v21 = v14;
        v9 = *(_DWORD *)(a1 + 308);
        v25 = &v9;
        v10 = *(_DWORD *)(a1 + 312);
        v27 = &v10;
        v11 = *(_DWORD *)(a1 + 316);
        v29 = &v11;
        v12 = *(_DWORD *)(a1 + 320);
        v31 = &v12;
        LODWORD(v13) = *(_DWORD *)(a1 + 324);
        v33 = &v13;
        v15 = v6;
        v18 = 16LL;
        v20 = 8LL;
        v22 = 8LL;
        v23 = v5;
        v24 = 8LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        TlgWrite(&stru_1404013B8, &unk_140374F37, 0LL, 0LL, 0xBu, &pData);
      }
      memset(&v14[1], 0, 0x28uLL);
      v7 = *(_OWORD *)&v14[3];
      *(_OWORD *)v5 = *(_OWORD *)&v14[1];
      v8 = v14[5];
      *(_OWORD *)(v5 + 16) = v7;
      *(_QWORD *)(v5 + 32) = v8;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}

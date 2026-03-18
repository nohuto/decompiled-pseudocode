/*
 * XREFs of LookUpTableFlushComplete @ 0x1C0090ACC
 * Callers:
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C005A080 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0081850 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C00CE660 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00CE734 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 *     FlushLookUpTableBucket @ 0x1C003B368 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1C00CE6EC (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(_DWORD *a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  const GUID *v5; // r9
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  _DWORD *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  _QWORD *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  int *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  int *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  int *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  int *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]
  __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( a1[64] )
  {
    UpdateInternalStatsOnFlush();
    v6 = v4 + 288;
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( (unsigned int)dword_1C004E080 > 5
        && (qword_1C004E090 & 0x400000000000LL) != 0
        && (qword_1C004E098 & 0x400000000000LL) == qword_1C004E098 )
      {
        v7 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 344) + 8LL) - 16LL);
        v18 = &v16;
        v20 = a1 + 74;
        v15[0] = (unsigned int)a1[76];
        v22 = v15;
        v10 = a1[77];
        v26 = &v10;
        v11 = a1[78];
        v28 = &v11;
        v12 = a1[79];
        v30 = &v12;
        v13 = a1[80];
        v32 = &v13;
        LODWORD(v14) = a1[81];
        v34 = &v14;
        v16 = v7;
        v19 = 16LL;
        v21 = 8LL;
        v23 = 8LL;
        v24 = v4 + 288;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C004E080, &unk_1C004117F, 0LL, v5, 0xBu, &pData);
      }
      memset(&v15[1], 0, 0x28uLL);
      v8 = *(_OWORD *)&v15[3];
      *(_OWORD *)v6 = *(_OWORD *)&v15[1];
      v9 = v15[5];
      *(_OWORD *)(v6 + 16) = v8;
      *(_QWORD *)(v6 + 32) = v9;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket((__int64)a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}

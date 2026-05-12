/*
 * XREFs of StorpLogPerAdapterStatistics @ 0x1C00028A4
 * Callers:
 *     StorpLogStatistics @ 0x1C0002A08 (StorpLogStatistics.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C00029D8 (StorpInitializeHierarchicalResetBuckets.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpLogPerAdapterStatistics(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  _BYTE v15[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  char *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  char *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]

  v2 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 5284);
  if ( ((_DWORD)v2
     || *(_DWORD *)(a1 + 5296)
     || *(_DWORD *)(a1 + 5308)
     || *(_DWORD *)(a1 + 5320)
     || *(_DWORD *)(a1 + 5332))
    && (unsigned int)dword_1C0061058 > 5
    && TlgKeywordOn(v2, 0x400000000000uLL) )
  {
    v16 = *(_DWORD *)(a1 + 56);
    v18 = *(_DWORD *)(a1 + 5288);
    v11 = *(_BYTE *)(a1 + 5292);
    v19 = *(_DWORD *)(a1 + 5296);
    v20 = *(_DWORD *)(a1 + 5300);
    v12 = *(_BYTE *)(a1 + 5304);
    v21 = *(_DWORD *)(a1 + 5308);
    v22 = *(_DWORD *)(a1 + 5312);
    v13 = *(_BYTE *)(a1 + 5316);
    v23 = *(_DWORD *)(a1 + 5320);
    v24 = *(_DWORD *)(a1 + 5324);
    v14 = *(_BYTE *)(a1 + 5328);
    v25 = *(_DWORD *)(a1 + 5332);
    v26[0] = *(_DWORD *)(a1 + 5336);
    v15[0] = *(_BYTE *)(a1 + 5340);
    v28 = a1 + 5256;
    v30 = &v16;
    v32 = &v17;
    v34 = &v18;
    v36 = &v11;
    v38 = &v19;
    v40 = &v20;
    v42 = &v12;
    v44 = &v21;
    v46 = &v22;
    v48 = &v13;
    v50 = &v23;
    v52 = &v24;
    v54 = &v14;
    v56 = &v25;
    v58 = v26;
    v60 = v15;
    v17 = (int)v5;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    TlgWrite(v5, &unk_1C0059589, v6, v7, 0x13u, &pData);
  }
  v3 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 5344);
  if ( ((_DWORD)v3
     || *(_DWORD *)(a1 + 5356)
     || *(_DWORD *)(a1 + 5368)
     || *(_DWORD *)(a1 + 5380)
     || *(_DWORD *)(a1 + 5392))
    && (unsigned int)dword_1C0061058 > 5
    && TlgKeywordOn(v3, 0x400000000000uLL) )
  {
    v26[0] = *(_DWORD *)(a1 + 56);
    v24 = *(_DWORD *)(a1 + 5348);
    v15[0] = *(_BYTE *)(a1 + 5352);
    v23 = *(_DWORD *)(a1 + 5356);
    v22 = *(_DWORD *)(a1 + 5360);
    v14 = *(_BYTE *)(a1 + 5364);
    v21 = *(_DWORD *)(a1 + 5368);
    v20 = *(_DWORD *)(a1 + 5372);
    v13 = *(_BYTE *)(a1 + 5376);
    v19 = *(_DWORD *)(a1 + 5380);
    v18 = *(_DWORD *)(a1 + 5384);
    v12 = *(_BYTE *)(a1 + 5388);
    v17 = *(_DWORD *)(a1 + 5392);
    v16 = *(_DWORD *)(a1 + 5396);
    v11 = *(_BYTE *)(a1 + 5400);
    v28 = a1 + 5256;
    v30 = v26;
    v32 = &v25;
    v34 = &v24;
    v36 = v15;
    v38 = &v23;
    v40 = &v22;
    v42 = &v14;
    v44 = &v21;
    v46 = &v20;
    v48 = &v13;
    v50 = &v19;
    v52 = &v18;
    v54 = &v12;
    v56 = &v17;
    v58 = &v16;
    v60 = &v11;
    v25 = (int)v8;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    TlgWrite(v8, &unk_1C0059F50, v9, v10, 0x13u, &pData);
  }
  StorpInitializeHierarchicalResetBuckets(a1);
  if ( !*(_BYTE *)(a1 + 5508) && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( WorkItem )
      IoQueueWorkItem(WorkItem, StorpAdapterTopologyWorkItemRoutine, NormalWorkQueue, WorkItem);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 272));
  }
}

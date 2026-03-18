/*
 * XREFs of VidSchReportAdapter @ 0x1C00C8AC0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqq @ 0x1C00267A4 (McTemplateK0pqq.c)
 *     McTemplateK0ppp @ 0x1C0026C5C (McTemplateK0ppp.c)
 *     McTemplateK0ppqpttq @ 0x1C002BBF0 (McTemplateK0ppqpttq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002FDB4 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pppp @ 0x1C0031968 (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0031A08 (McTemplateK0pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int i; // esi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // r12d
  unsigned int v17; // edx
  char v18; // dl
  unsigned int v19; // r9d
  char v20; // r11
  __int64 v21; // r9
  unsigned int j; // esi
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // edx
  char v26; // dl
  char v27; // r9
  char v28; // r10
  __int64 v29; // r9
  unsigned int v30; // esi
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // edx
  char v35; // dl
  char v36; // r9
  char v37; // r10
  unsigned int k; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // [rsp+28h] [rbp-49h]
  __int64 v43; // [rsp+30h] [rbp-41h]
  __int64 v44; // [rsp+40h] [rbp-31h]
  unsigned int v45; // [rsp+40h] [rbp-31h]
  __int64 v46; // [rsp+48h] [rbp-29h]
  _DWORD v47[8]; // [rsp+88h] [rbp+17h] BYREF

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 224);
  if ( v6 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v45 = (*(_DWORD *)(v6 + 48) >> 1) & 1;
    McTemplateK0ppqpttq(
      v45,
      &EventReportDevice,
      a3,
      0LL,
      *(_QWORD *)(a1 + 16),
      -1,
      v6,
      v45,
      (*(_DWORD *)(v6 + 48) >> 2) & 1);
  }
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v46) = (*(_DWORD *)(v7 + 48) >> 2) & 1;
    LODWORD(v44) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
    LODWORD(v43) = -1;
    McTemplateK0ppqpttq((unsigned int)v44, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v43, v7, v44, v46);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 68); ++i )
  {
    v9 = *(_QWORD *)(a1 + 616);
    v10 = *(_DWORD *)(a1 + 688);
    v11 = 8LL * i;
    a3 = i;
    v12 = (_QWORD *)(v11 + v9);
    if ( i >= v10 )
      v12 = *(_QWORD **)(a1 + 616);
    if ( *v12 )
    {
      v13 = v9 + v11;
      if ( i >= v10 )
        v13 = *(_QWORD *)(a1 + 616);
      v14 = *(_QWORD *)(*(_QWORD *)v13 + 32LL);
      if ( v14 )
      {
        memset(v47, 0, sizeof(v47));
        if ( bTracingEnabled )
        {
          v16 = 1 << VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v14 + 88));
          v18 = VidSchiSchedulerNodeToDriverNode(a1, v17);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp(
              v15,
              &EventReportContext,
              (const GUID *)a3,
              v6,
              v18,
              v16,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              (2 * (v20 & 1 | (v19 >> 5) & 2)) | 1,
              v14);
        }
        v21 = *(_QWORD *)(v14 + 56);
        if ( !v21 || (*(_DWORD *)(v14 + 112) & 0x40) != 0 )
          v21 = v14;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v43) = *(_DWORD *)(v14 + 404);
          LODWORD(v42) = *(_DWORD *)(v14 + 400);
          McTemplateK0pqq(v15, &EventChangePriority, (const GUID *)a3, v21, v42, v43);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 64); ++j )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * j);
      if ( v23 )
      {
        memset(v47, 0, sizeof(v47));
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v23 + 88));
          v26 = VidSchiSchedulerNodeToDriverNode(a1, v25);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp(
              v47[4],
              &EventReportContext,
              (const GUID *)a3,
              v7,
              v26,
              v28,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              (2 * (v27 & 1)) | 1,
              v23);
        }
        v29 = *(_QWORD *)(v23 + 56);
        if ( !v29 || (*(_DWORD *)(v23 + 112) & 0x40) != 0 )
          v29 = v23;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v43) = *(_DWORD *)(v23 + 404);
          LODWORD(v42) = *(_DWORD *)(v23 + 400);
          McTemplateK0pqq(v24, &EventChangePriority, (const GUID *)a3, v29, v42, v43);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v30 = 0;
    if ( *(_DWORD *)(a1 + 64) )
    {
      while ( 1 )
      {
        v31 = *(_QWORD **)(*(_QWORD *)(a1 + 256) + 8LL * v30);
        if ( v31 )
        {
          memset(v47, 0, sizeof(v47));
          if ( !bTracingEnabled )
            goto LABEL_45;
          VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v31[2] + 4LL));
          v35 = VidSchiSchedulerNodeToDriverNode(a1, v34);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            break;
        }
LABEL_47:
        if ( ++v30 >= *(_DWORD *)(a1 + 64) )
          goto LABEL_48;
      }
      McTemplateK0pqqqqqqqqppp(
        v47[4],
        &EventReportContext,
        (const GUID *)a3,
        v7,
        v35,
        v37,
        v47[0],
        v47[1],
        v47[2],
        v47[3],
        v47[4],
        (2 * (v36 & 1)) | 1,
        v31);
LABEL_45:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp(v33, v32, (const GUID *)a3, v31, v31, v31[6], v31[4]);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( *(_QWORD *)(a1 + 264) )
  {
    for ( k = 0; k < *(_DWORD *)(a1 + 64); ++k )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * k);
      if ( v39 && bTracingEnabled )
      {
        v40 = *(_QWORD *)(v39 + 40);
        v41 = *(_QWORD *)(v40 + 24);
        if ( !v41 || (*(_DWORD *)(v40 + 56) & 0x40) != 0 )
          v41 = *(_QWORD *)(v39 + 40);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(v40, &EventReportHwQueue, (const GUID *)a3, v41, 0LL, v39);
      }
    }
  }
  return 0LL;
}

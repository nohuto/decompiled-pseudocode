/*
 * XREFs of VidSchReportAdapter @ 0x1C00CBA10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqq @ 0x1C0026244 (McTemplateK0pqq.c)
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 *     McTemplateK0ppqpttq @ 0x1C002C2CC (McTemplateK0ppqpttq.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0030854 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pppp @ 0x1C00321B8 (McTemplateK0pppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
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
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r9d
  char v19; // r11
  __int64 v20; // r9
  unsigned int j; // esi
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // edx
  char v25; // al
  char v26; // r9
  __int64 v27; // r9
  unsigned int v28; // esi
  _QWORD *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  char v33; // al
  char v34; // r9
  unsigned int k; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // [rsp+28h] [rbp-49h]
  __int64 v40; // [rsp+30h] [rbp-41h]
  __int64 v41; // [rsp+40h] [rbp-31h]
  __int64 v42; // [rsp+48h] [rbp-29h]
  _DWORD v43[8]; // [rsp+88h] [rbp+17h] BYREF

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 224);
  if ( v6 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_QWORD *)(a1 + 16);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppqpttq(
          (*(_DWORD *)(v6 + 48) >> 1) & 1,
          &EventReportDevice,
          a3,
          0LL,
          a3,
          -1,
          v6,
          (*(_DWORD *)(v6 + 48) >> 1) & 1,
          (*(_DWORD *)(v6 + 48) >> 2) & 1);
    }
  }
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 )
  {
    if ( bTracingEnabled )
    {
      a3 = *(_DWORD *)(v7 + 48) >> 2;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v42) = (*(_DWORD *)(v7 + 48) & 4) != 0;
        LODWORD(v41) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
        LODWORD(v40) = -1;
        McTemplateK0ppqpttq(
          (unsigned int)v41,
          &EventReportDevice,
          (*(_DWORD *)(v7 + 48) & 4) != 0,
          0LL,
          *(_QWORD *)(a1 + 16),
          v40,
          v7,
          v41,
          v42);
      }
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 68); ++i )
  {
    v9 = *(_QWORD *)(a1 + 616);
    v10 = *(_DWORD *)(a1 + 688);
    v11 = 8LL * i;
    a3 = i;
    v12 = (_QWORD *)(v9 + v11);
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
        memset(v43, 0, sizeof(v43));
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v14 + 88));
          v17 = VidSchiSchedulerNodeToDriverNode(a1, v16);
          v15 = *(_QWORD *)(v14 + 104);
          a3 = v17;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp(
              v15,
              &EventReportContext,
              (const GUID *)v17,
              v6,
              v17,
              v19,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              (2 * (((v18 >> 1) & 0x20 | *(_DWORD *)(v15 + 48) & 0x10) >> 4)) | 1,
              v14);
        }
        v20 = *(_QWORD *)(v14 + 56);
        if ( !v20 || (*(_DWORD *)(v14 + 112) & 0x40) != 0 )
          v20 = v14;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v40) = *(_DWORD *)(v14 + 404);
          LODWORD(v39) = *(_DWORD *)(v14 + 400);
          McTemplateK0pqq(v15, &EventChangePriority, (const GUID *)a3, v20, v39, v40);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 64); ++j )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * j);
      if ( v22 )
      {
        memset(v43, 0, sizeof(v43));
        if ( bTracingEnabled )
        {
          VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v22 + 88));
          v25 = VidSchiSchedulerNodeToDriverNode(a1, v24);
          v23 = *(_QWORD *)(v22 + 104);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqqqqqqqppp(
              v23,
              &EventReportContext,
              (const GUID *)a3,
              v7,
              v25,
              v26,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              (2 * ((*(_DWORD *)(v23 + 48) & 0x10) != 0)) | 1,
              v22);
        }
        v27 = *(_QWORD *)(v22 + 56);
        if ( !v27 || (*(_DWORD *)(v22 + 112) & 0x40) != 0 )
          v27 = v22;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v40) = *(_DWORD *)(v22 + 404);
          LODWORD(v39) = *(_DWORD *)(v22 + 400);
          McTemplateK0pqq(v23, &EventChangePriority, (const GUID *)a3, v27, v39, v40);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v28 = 0;
    if ( *(_DWORD *)(a1 + 64) )
    {
      while ( 1 )
      {
        v29 = *(_QWORD **)(*(_QWORD *)(a1 + 256) + 8LL * v28);
        if ( v29 )
        {
          memset(v43, 0, sizeof(v43));
          if ( !bTracingEnabled )
            goto LABEL_45;
          VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v29[2] + 4LL));
          v33 = VidSchiSchedulerNodeToDriverNode(a1, v32);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            break;
        }
LABEL_47:
        if ( ++v28 >= *(_DWORD *)(a1 + 64) )
          goto LABEL_48;
      }
      McTemplateK0pqqqqqqqqppp(
        v29[1],
        &EventReportContext,
        (const GUID *)a3,
        v7,
        v33,
        v34,
        v43[0],
        v43[1],
        v43[2],
        v43[3],
        v43[4],
        (2 * ((*(_DWORD *)(v29[1] + 48LL) & 0x10) != 0)) | 1,
        v29);
LABEL_45:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp(v31, v30, (const GUID *)a3, v29, v29, v29[6], v29[4]);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( *(_QWORD *)(a1 + 264) )
  {
    for ( k = 0; k < *(_DWORD *)(a1 + 64); ++k )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * k);
      if ( v36 && bTracingEnabled )
      {
        v37 = *(_QWORD *)(v36 + 40);
        v38 = *(_QWORD *)(v37 + 24);
        if ( !v38 || (*(_DWORD *)(v37 + 56) & 0x40) != 0 )
          v38 = *(_QWORD *)(v36 + 40);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(v37, &EventReportHwQueue, (const GUID *)a3, v38, 0LL, v36);
      }
    }
  }
  return 0LL;
}

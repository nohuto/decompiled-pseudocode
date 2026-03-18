/*
 * XREFs of ExpCopyProcessInfo @ 0x1406136F0
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     PsQueryStatisticsProcess @ 0x140613A50 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int *v8; // rbx
  signed __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  signed __int64 v12; // r10
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int v19; // [rsp+24h] [rbp-74h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-40h]

  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768)) )
    goto LABEL_19;
  v8 = *(unsigned int **)(a2 + 1048);
  if ( !v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
LABEL_19:
    v15 = 0;
    goto LABEL_15;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = (unsigned __int64)(v8 + 16);
  v12 = 0LL;
  while ( v11 < (unsigned __int64)&v8[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16] )
  {
    v13 = *(int *)(v11 + 24);
    v14 = *(_DWORD *)(v11 + 28);
    if ( (int)v13 > v14 )
      v14 = *(_DWORD *)(v11 + 24);
    v9 += v13;
    v12 = v9;
    v10 += (unsigned int)v14;
    v11 += 64LL;
  }
  if ( v12 < 0 )
    v12 = 0LL;
  if ( v12 > 0xFFFFFFFFLL )
    v12 = 0xFFFFFFFFLL;
  if ( v12 > (__int64)((255 * ((unsigned __int64)*v8 >> 2)) >> 8) )
    v12 = (255 * ((unsigned __int64)*v8 >> 2)) >> 8;
  v19 = v12;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 768));
  v15 = v19;
LABEL_15:
  *(_DWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 784);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 448);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 744);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 1000);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 1752);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 824);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 832);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1284);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1448);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1440) << 12;
  v16 = *(_QWORD *)(a2 + 1400) << 12;
  v17 = *(_QWORD *)(a2 + 1408) << 12;
  *(_QWORD *)(a1 + 144) = v16;
  if ( v17 >= v16 )
    v17 = v16;
  *(_QWORD *)(a1 + 8) = v17;
  v20 = *(_QWORD *)(a2 + 816);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 800);
  *(_QWORD *)(a1 + 152) = v20;
  v21 = *(_QWORD *)(a2 + 808);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 792);
  *(_QWORD *)(a1 + 168) = v21;
  v22 = *(_QWORD *)(a2 + 1264) << 12;
  *(_QWORD *)(a1 + 184) = v22;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 1272) << 12;
  *(_QWORD *)(a1 + 200) = v22;
  PsQueryStatisticsProcess(a2, a4);
  *(_QWORD *)(a1 + 24) = a4[3];
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 48) = *a4;
  *(_QWORD *)(a1 + 208) = a4[5];
  *(_QWORD *)(a1 + 216) = a4[6];
  *(_QWORD *)(a1 + 224) = a4[7];
  *(_QWORD *)(a1 + 232) = a4[8];
  *(_QWORD *)(a1 + 240) = a4[9];
  *(_QWORD *)(a1 + 248) = a4[10];
  if ( a3 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 744);
  return 0LL;
}

/*
 * XREFs of ExpCopyProcessInfo @ 0x1405FF390
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  signed __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v20; // [rsp+24h] [rbp-74h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-40h]

  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760)) )
    goto LABEL_19;
  v8 = *(unsigned int **)(a2 + 1048);
  if ( !v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
LABEL_19:
    v16 = 0;
    goto LABEL_15;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = (unsigned __int64)(v8 + 16);
  v12 = 0LL;
  v13 = 0LL;
  while ( v11 < (unsigned __int64)&v8[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16] )
  {
    v14 = *(int *)(v11 + 24);
    v15 = *(_DWORD *)(v11 + 28);
    if ( (int)v14 > v15 )
      v15 = *(_DWORD *)(v11 + 24);
    v9 += v14;
    v12 = v9;
    v10 += (unsigned int)v15;
    v11 += 64LL;
    v13 = v9;
  }
  if ( v12 < 0 )
    v13 = 0LL;
  if ( v13 > 0xFFFFFFFFLL )
    v13 = 0xFFFFFFFFLL;
  if ( v13 > (__int64)((255 * ((unsigned __int64)*v8 >> 2)) >> 8) )
    v13 = (255 * ((unsigned __int64)*v8 >> 2)) >> 8;
  v20 = v13;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
  v16 = v20;
LABEL_15:
  *(_DWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 776);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 444);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 736);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 992);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 1704);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 816);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 824);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1284);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1448);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1440) << 12;
  v17 = *(_QWORD *)(a2 + 1400) << 12;
  v18 = *(_QWORD *)(a2 + 1408) << 12;
  *(_QWORD *)(a1 + 144) = v17;
  if ( v18 >= v17 )
    v18 = v17;
  *(_QWORD *)(a1 + 8) = v18;
  v21 = *(_QWORD *)(a2 + 808);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 792);
  *(_QWORD *)(a1 + 152) = v21;
  v22 = *(_QWORD *)(a2 + 800);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 784);
  *(_QWORD *)(a1 + 168) = v22;
  v23 = *(_QWORD *)(a2 + 1264) << 12;
  *(_QWORD *)(a1 + 184) = v23;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 1272) << 12;
  *(_QWORD *)(a1 + 200) = v23;
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
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 736);
  return 0LL;
}

/*
 * XREFs of IoQueuesInitialize @ 0x1C000C854
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000D254 (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000F960 (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r9
  __int64 v5; // r8
  void ***v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // r9
  __int64 v10; // rdx
  void **v11; // rcx
  unsigned int v12; // edi
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // r14d
  unsigned int i; // edi
  __int64 v18; // r8
  unsigned int j; // edi
  __int64 v20; // r8
  __int64 v21; // r8
  char *v23; // [rsp+40h] [rbp-28h]
  int v24; // [rsp+48h] [rbp-20h]
  unsigned int v25; // [rsp+B0h] [rbp+48h]
  unsigned int v26; // [rsp+B0h] [rbp+48h]
  unsigned int v27; // [rsp+B8h] [rbp+50h]
  char *v28; // [rsp+C0h] [rbp+58h]
  char *v29; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v23 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v3 = *(_WORD *)(a1 + 266);
  if ( !v3 )
    return 0;
  v4 = *(_WORD *)(a1 + 264);
  if ( !v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 262);
  v6 = (void ***)(a1 + 760);
  v7 = *(unsigned __int16 *)(a1 + 262) << 6;
  v8 = 16 * v5;
  v27 = v7;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 344 * (unsigned int)v3, 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 264), 1701672526LL);
    if ( *v6 && *(_QWORD *)(a1 + 752) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 262) * (unsigned int)*(unsigned __int16 *)(a1 + 264),
        1701672526LL);
LABEL_15:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 752) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 264); ++i )
        {
          v9 = 136LL * i;
          v18 = *(_QWORD *)(v9 + *(_QWORD *)(a1 + 752));
          if ( v18 )
            NVMeFreeDmaBuffer(a1, v7, v18);
        }
      }
      if ( *v6 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 266); ++j )
        {
          v9 = 344LL * j;
          v20 = (__int64)(*v6)[(unsigned __int64)v9 / 8];
          if ( v20 )
            NVMeFreeDmaBuffer(a1, v8, v20);
        }
      }
      if ( v28 )
        StorPortExtendedFunction(1LL, a1, v28, v9);
      if ( v29 )
        StorPortExtendedFunction(1LL, a1, v29, v9);
      if ( v23 )
        StorPortExtendedFunction(1LL, a1, v23, v9);
      if ( *v6 )
        StorPortExtendedFunction(1LL, a1, *v6, v9);
      v21 = *(_QWORD *)(a1 + 752);
      if ( v21 )
        StorPortExtendedFunction(1LL, a1, v21, v9);
    }
    *(_DWORD *)(a1 + 264) = 0;
    return 0;
  }
  v23 = (char *)**v6 + v8;
  v10 = 16 * v4 * v5;
  v29 = &v23[v10];
  v28 = &v23[v10 + v10];
  NVMeZeroMemory(v23, 16 * v4 * (unsigned __int16)v5);
  NVMeZeroMemory(v29, 16 * *(unsigned __int16 *)(a1 + 262) * *(unsigned __int16 *)(a1 + 264));
  NVMeZeroMemory(v28, 8 * *(unsigned __int16 *)(a1 + 266));
  v25 = 0;
  if ( *(_WORD *)(a1 + 264) )
  {
    while ( 1 )
    {
      v11 = *(void ***)(a1 + 752);
      v12 = (_DWORD)v11 + 136 * v1;
      if ( !*(_BYTE *)(a1 + 16) )
        break;
      v13 = *v11;
      v24 = (int)v13;
      NVMeZeroMemory(v13, v7);
      v14 = v1 * (unsigned __int64)*(unsigned __int16 *)(a1 + 262);
      NVMeSubmissionQueueInit(a1, v12, v25 + 1, v24, 0LL, (__int64)&v23[16 * v14], (__int64)&v29[16 * v14]);
      v1 = v25 + 1;
      v25 = v1;
      if ( v1 >= *(unsigned __int16 *)(a1 + 264) )
        goto LABEL_11;
    }
    NVMeAllocateDmaBuffer(a1, v7);
    goto LABEL_15;
  }
LABEL_11:
  v15 = 0;
  if ( *(_WORD *)(a1 + 266) )
  {
    while ( v15 < *(unsigned __int16 *)(a1 + 264) )
    {
      v16 = (unsigned int)*v6 + 344 * v15;
      if ( !*(_BYTE *)(a1 + 16) )
      {
        NVMeAllocateDmaBuffer(a1, v8);
        v7 = v27;
        goto LABEL_15;
      }
      v26 = (unsigned int)**v6;
      NVMeZeroMemory(**v6, v8);
      NVMeCompletionQueueInit(a1, v16, v15 + 1, v26, 0LL, (__int64)&v28[8 * v15]);
      if ( ++v15 >= *(unsigned __int16 *)(a1 + 266) )
        return 1;
    }
  }
  return 1;
}

/*
 * XREFs of IoQueuesInitialize @ 0x1C0009DBC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000A814 (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000DB8C (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r9
  __int64 v5; // r8
  void ***v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // rdx
  void **v10; // rcx
  unsigned int v11; // edi
  void *v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // r14d
  unsigned int i; // edi
  __int64 v17; // r8
  unsigned int j; // edi
  __int64 v19; // r8
  __int64 v20; // r8
  char *v22; // [rsp+40h] [rbp-28h]
  int v23; // [rsp+48h] [rbp-20h]
  unsigned int v24; // [rsp+B0h] [rbp+48h]
  unsigned int v25; // [rsp+B0h] [rbp+48h]
  char *v26; // [rsp+C0h] [rbp+58h]
  char *v27; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v22 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v3 = *(_WORD *)(a1 + 274);
  if ( !v3 )
    return 0;
  v4 = *(_WORD *)(a1 + 272);
  if ( !v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 270);
  v6 = (void ***)(a1 + 768);
  v7 = *(unsigned __int16 *)(a1 + 270) << 6;
  v8 = 16 * v5;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 344 * (unsigned int)v3);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 272));
    if ( *v6 && *(_QWORD *)(a1 + 760) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 270) * (unsigned int)*(unsigned __int16 *)(a1 + 272));
LABEL_15:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 760) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 272); ++i )
        {
          v17 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 760));
          if ( v17 )
            NVMeFreeDmaBuffer(a1, v7, v17);
        }
      }
      if ( *v6 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 274); ++j )
        {
          v19 = (__int64)(*v6)[43 * j];
          if ( v19 )
            NVMeFreeDmaBuffer(a1, v8, v19);
        }
      }
      if ( v26 )
        StorPortExtendedFunction(1LL, a1, v26);
      if ( v27 )
        StorPortExtendedFunction(1LL, a1, v27);
      if ( v22 )
        StorPortExtendedFunction(1LL, a1, v22);
      if ( *v6 )
        StorPortExtendedFunction(1LL, a1, *v6);
      v20 = *(_QWORD *)(a1 + 760);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20);
    }
    *(_DWORD *)(a1 + 272) = 0;
    return 0;
  }
  v22 = (char *)**v6 + v8;
  v9 = 16 * v4 * v5;
  v27 = &v22[v9];
  v26 = &v22[v9 + v9];
  NVMeZeroMemory(v22, 16 * v4 * (unsigned __int16)v5);
  NVMeZeroMemory(v27, 16 * *(unsigned __int16 *)(a1 + 270) * *(unsigned __int16 *)(a1 + 272));
  NVMeZeroMemory(v26, 8 * *(unsigned __int16 *)(a1 + 274));
  v24 = 0;
  if ( *(_WORD *)(a1 + 272) )
  {
    while ( 1 )
    {
      v10 = *(void ***)(a1 + 760);
      v11 = (_DWORD)v10 + 136 * v1;
      if ( !*(_BYTE *)(a1 + 16) )
        break;
      v12 = *v10;
      v23 = (int)v12;
      NVMeZeroMemory(v12, v7);
      v13 = v1 * (unsigned __int64)*(unsigned __int16 *)(a1 + 270);
      NVMeSubmissionQueueInit(a1, v11, v24 + 1, v23, 0LL, (__int64)&v22[16 * v13], (__int64)&v27[16 * v13]);
      v1 = v24 + 1;
      v24 = v1;
      if ( v1 >= *(unsigned __int16 *)(a1 + 272) )
        goto LABEL_11;
    }
    NVMeAllocateDmaBuffer(a1, v7);
    goto LABEL_15;
  }
LABEL_11:
  v14 = 0;
  if ( *(_WORD *)(a1 + 274) )
  {
    while ( v14 < *(unsigned __int16 *)(a1 + 272) )
    {
      v15 = (unsigned int)*v6 + 344 * v14;
      if ( !*(_BYTE *)(a1 + 16) )
      {
        NVMeAllocateDmaBuffer(a1, v8);
        goto LABEL_15;
      }
      v25 = (unsigned int)**v6;
      NVMeZeroMemory(**v6, v8);
      NVMeCompletionQueueInit(a1, v15, v14 + 1, v25, 0LL, (__int64)&v26[8 * v14]);
      if ( ++v14 >= *(unsigned __int16 *)(a1 + 274) )
        return 1;
    }
  }
  return 1;
}

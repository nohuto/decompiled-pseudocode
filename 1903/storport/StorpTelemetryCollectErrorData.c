/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C000BB18
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000BD7C (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BDB0 (StorpTelemetryConstructErrorEntry.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // xmm4_8
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  unsigned __int8 v17; // di
  char v18; // dl
  unsigned __int8 v19; // cl
  int v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  bool v31; // cc
  bool v32; // zf
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v35[40]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v36; // [rsp+B8h] [rbp+67h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v35, 0, sizeof(v35));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v35);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2024), &LockHandle);
  v10 = *(_DWORD *)(a1 + 2032);
  v36 = *(_QWORD *)(a1 + 2080);
  v11 = v36;
  v12 = *(_OWORD *)(a1 + 2048);
  v13 = *(_OWORD *)(a1 + 2064);
  v14 = *(_OWORD *)&v35[16];
  *(_OWORD *)(a1 + 2048) = *(_OWORD *)v35;
  v15 = *(_QWORD *)&v35[32];
  *(_OWORD *)(a1 + 2064) = v14;
  *(_QWORD *)(a1 + 2080) = v15;
  if ( v10 != -1 )
    *(_DWORD *)(a1 + 2032) = v10 + 1;
  LOBYTE(v16) = *(_BYTE *)(a4 + 2);
  if ( (_BYTE)v16 == 40 )
    v16 = *(_DWORD *)(a4 + 20);
  else
    v16 = (unsigned __int8)v16;
  v17 = 0;
  if ( !v16 && ((v35[5] - 8) & 0x5D) == 0 )
  {
    v29 = *(_DWORD *)(a1 + 2036);
    if ( v29 != -1 )
      *(_DWORD *)(a1 + 2036) = v29 + 1;
  }
  v18 = v35[3];
  LOBYTE(v9) = 50;
  v19 = v35[4];
  if ( v35[3] == 93 && v35[4] >= 0x10u && (v35[4] <= 0x1Cu || v35[4] == 50 || (unsigned __int8)(v35[4] - 66) <= 1u) )
  {
    v30 = *(_DWORD *)(a1 + 2040);
    if ( v30 != -1 )
      *(_DWORD *)(a1 + 2040) = v30 + 1;
  }
  LOBYTE(v8) = 3;
  if ( v35[2] == 3 )
  {
    if ( v18 != 50 )
      goto LABEL_10;
LABEL_35:
    v31 = v19 <= 1u;
    goto LABEL_37;
  }
  if ( v35[2] != 4 )
    goto LABEL_10;
  switch ( v18 )
  {
    case 3:
LABEL_50:
      v32 = v19 == 0;
LABEL_51:
      if ( v32 )
        goto LABEL_52;
      goto LABEL_10;
    case 9:
      goto LABEL_35;
    case 21:
      v32 = v19 == 1;
      goto LABEL_51;
  }
  if ( v18 != 25 )
  {
    if ( v18 != 50 )
    {
      if ( v18 != 62 )
      {
        if ( (unsigned __int8)(v18 - 65) <= 1u )
          goto LABEL_52;
        if ( v18 != 68 )
        {
          if ( v18 == 76 )
            goto LABEL_52;
          if ( v18 != 85 )
            goto LABEL_10;
        }
        goto LABEL_50;
      }
      v19 -= 3;
    }
    goto LABEL_35;
  }
  v31 = v19 <= 3u;
LABEL_37:
  if ( v31 )
  {
LABEL_52:
    v33 = *(_DWORD *)(a1 + 2044);
    if ( v33 != -1 )
      *(_DWORD *)(a1 + 2044) = v33 + 1;
  }
LABEL_10:
  v20 = *(_DWORD *)(a1 + 2032);
  if ( ((v20 + 1) & 0xFFFFFFFD) != 0 )
  {
    v21 = v20 - 1;
    if ( v21 <= 0xA )
    {
      v22 = v21 - 1;
    }
    else
    {
      LODWORD(v22) = rand() % v21;
      v11 = v36;
      v22 = (unsigned int)v22;
    }
    if ( (unsigned int)v22 < 0xA )
    {
      v27 = 5 * v22;
      *(_OWORD *)(a1 + 8 * v27 + 2088) = v12;
      *(_OWORD *)(a1 + 8 * v27 + 2104) = v13;
      *(_QWORD *)(a1 + 8 * v27 + 2120) = v11;
    }
  }
  while ( 1 )
  {
    v23 = a1 + 40LL * v17;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2048, v23 + 2488, v8, v9) == 1 )
    {
      ++*(_DWORD *)(a1 + 40LL * v17 + 2520);
      goto LABEL_17;
    }
    memset(v35, 0, sizeof(v35));
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v23 + 2488, v35, v25, v26) == 1 )
      break;
    if ( ++v17 >= 5u )
      goto LABEL_17;
  }
  v28 = 5LL * v17;
  *(_OWORD *)(a1 + 8 * v28 + 2488) = *(_OWORD *)(a1 + 2048);
  *(_OWORD *)(a1 + 8 * v28 + 2504) = *(_OWORD *)(a1 + 2064);
  *(_QWORD *)(a1 + 8 * v28 + 2520) = *(_QWORD *)(a1 + 2080);
  *(_DWORD *)(a1 + 40LL * v17 + 2520) = 1;
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}

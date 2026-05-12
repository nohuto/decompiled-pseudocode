/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C000BB68
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000BDD0 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BE04 (StorpTelemetryConstructErrorEntry.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // xmm4_8
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  int v15; // eax
  unsigned __int8 v16; // di
  char v17; // dl
  unsigned __int8 v18; // cl
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r8
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2280), &LockHandle);
  v9 = *(_DWORD *)(a1 + 2288);
  v36 = *(_QWORD *)(a1 + 2336);
  v10 = v36;
  v11 = *(_OWORD *)(a1 + 2304);
  v12 = *(_OWORD *)(a1 + 2320);
  v13 = *(_OWORD *)&v35[16];
  *(_OWORD *)(a1 + 2304) = *(_OWORD *)v35;
  v14 = *(_QWORD *)&v35[32];
  *(_OWORD *)(a1 + 2320) = v13;
  *(_QWORD *)(a1 + 2336) = v14;
  if ( v9 != -1 )
    *(_DWORD *)(a1 + 2288) = v9 + 1;
  LOBYTE(v15) = *(_BYTE *)(a4 + 2);
  if ( (_BYTE)v15 == 40 )
    v15 = *(_DWORD *)(a4 + 20);
  else
    v15 = (unsigned __int8)v15;
  v16 = 0;
  if ( !v15 && ((v35[5] - 8) & 0x5D) == 0 )
  {
    v29 = *(_DWORD *)(a1 + 2292);
    if ( v29 != -1 )
      *(_DWORD *)(a1 + 2292) = v29 + 1;
  }
  v17 = v35[3];
  LOBYTE(v8) = 50;
  v18 = v35[4];
  if ( v35[3] == 93 && v35[4] >= 0x10u && (v35[4] <= 0x1Cu || v35[4] == 50 || (unsigned __int8)(v35[4] - 66) <= 1u) )
  {
    v30 = *(_DWORD *)(a1 + 2296);
    if ( v30 != -1 )
      *(_DWORD *)(a1 + 2296) = v30 + 1;
  }
  if ( v35[2] == 3 )
  {
    if ( v17 != 50 )
      goto LABEL_10;
LABEL_35:
    v31 = v18 <= 1u;
    goto LABEL_37;
  }
  if ( v35[2] != 4 )
    goto LABEL_10;
  switch ( v17 )
  {
    case 3:
LABEL_50:
      v32 = v18 == 0;
LABEL_51:
      if ( v32 )
        goto LABEL_52;
      goto LABEL_10;
    case 9:
      goto LABEL_35;
    case 21:
      v32 = v18 == 1;
      goto LABEL_51;
  }
  if ( v17 != 25 )
  {
    if ( v17 != 50 )
    {
      if ( v17 != 62 )
      {
        if ( (unsigned __int8)(v17 - 65) <= 1u )
          goto LABEL_52;
        if ( v17 != 68 )
        {
          if ( v17 == 76 )
            goto LABEL_52;
          if ( v17 != 85 )
            goto LABEL_10;
        }
        goto LABEL_50;
      }
      v18 -= 3;
    }
    goto LABEL_35;
  }
  v31 = v18 <= 3u;
LABEL_37:
  if ( v31 )
  {
LABEL_52:
    v33 = *(_DWORD *)(a1 + 2300);
    if ( v33 != -1 )
      *(_DWORD *)(a1 + 2300) = v33 + 1;
  }
LABEL_10:
  v19 = *(_DWORD *)(a1 + 2288);
  if ( ((v19 + 1) & 0xFFFFFFFD) != 0 )
  {
    v20 = v19 - 1;
    if ( v20 <= 0xA )
    {
      v21 = v20 - 1;
    }
    else
    {
      LODWORD(v21) = rand() % v20;
      v10 = v36;
      v21 = (unsigned int)v21;
    }
    if ( (unsigned int)v21 < 0xA )
    {
      v27 = 5 * v21;
      *(_OWORD *)(a1 + 8 * v27 + 2344) = v11;
      *(_OWORD *)(a1 + 8 * v27 + 2360) = v12;
      *(_QWORD *)(a1 + 8 * v27 + 2376) = v10;
    }
  }
  while ( 1 )
  {
    v22 = a1 + 40LL * v16;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2304, v22 + 2744, 5LL * v16, v8) == 1 )
    {
      *(_DWORD *)(a1 + 40LL * v16 + 2776) = *(_DWORD *)(a1 + 8 * v23 + 2776) + 1;
      goto LABEL_17;
    }
    memset(v35, 0, sizeof(v35));
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v22 + 2744, v35, v25, v26) == 1 )
      break;
    if ( ++v16 >= 5u )
      goto LABEL_17;
  }
  v28 = 5LL * v16;
  *(_OWORD *)(a1 + 8 * v28 + 2744) = *(_OWORD *)(a1 + 2304);
  *(_OWORD *)(a1 + 8 * v28 + 2760) = *(_OWORD *)(a1 + 2320);
  *(_QWORD *)(a1 + 8 * v28 + 2776) = *(_QWORD *)(a1 + 2336);
  *(_DWORD *)(a1 + 8 * v28 + 2776) = 1;
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}

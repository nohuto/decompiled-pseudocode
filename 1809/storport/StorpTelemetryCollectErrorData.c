/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C00088F8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpTelemetryConstructErrorEntry @ 0x1C0008544 (StorpTelemetryConstructErrorEntry.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C0008BE8 (StorpAreTelemetryErrorsEqual.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C002B440 (StorpTelemetrySendUnitUniqueErrorData.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, __int64 a2, union _LARGE_INTEGER a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm1
  int v11; // eax
  __int64 v12; // xmm4_8
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v15; // xmm0_8
  int v16; // eax
  unsigned __int8 v17; // di
  int v18; // eax
  char v19; // dl
  unsigned __int8 v20; // cl
  int v21; // eax
  bool v22; // cc
  bool v23; // zf
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v34; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h]
  __int128 v37; // [rsp+60h] [rbp-9h]
  _BYTE v38[40]; // [rsp+70h] [rbp+7h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v38, 0, sizeof(v38));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v38);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2296), &LockHandle);
  v10 = *(_OWORD *)&v38[16];
  v11 = *(_DWORD *)(a1 + 2304);
  v34 = *(_QWORD *)(a1 + 2352);
  v12 = v34;
  v13 = *(_OWORD *)(a1 + 2320);
  v14 = *(_OWORD *)(a1 + 2336);
  v36 = v13;
  *(_OWORD *)(a1 + 2320) = *(_OWORD *)v38;
  v15 = *(_QWORD *)&v38[32];
  *(_OWORD *)(a1 + 2336) = v10;
  *(_QWORD *)(a1 + 2352) = v15;
  v37 = v14;
  if ( v11 != -1 )
    *(_DWORD *)(a1 + 2304) = v11 + 1;
  LOBYTE(v16) = *(_BYTE *)(a4 + 2);
  if ( (_BYTE)v16 == 40 )
    v16 = *(_DWORD *)(a4 + 20);
  else
    v16 = (unsigned __int8)v16;
  v17 = 0;
  if ( !v16 && ((v38[5] - 8) & 0x5D) == 0 )
  {
    v18 = *(_DWORD *)(a1 + 2308);
    if ( v18 != -1 )
      *(_DWORD *)(a1 + 2308) = v18 + 1;
  }
  v19 = v38[3];
  LOBYTE(v9) = 50;
  v20 = v38[4];
  if ( v38[3] == 93 && v38[4] >= 0x10u && (v38[4] <= 0x1Cu || v38[4] == 50 || (unsigned __int8)(v38[4] - 66) <= 1u) )
  {
    v21 = *(_DWORD *)(a1 + 2312);
    if ( v21 != -1 )
      *(_DWORD *)(a1 + 2312) = v21 + 1;
  }
  LOBYTE(v8) = 3;
  if ( v38[2] == 3 )
  {
    if ( v19 != 50 )
      goto LABEL_40;
    goto LABEL_19;
  }
  if ( v38[2] != 4 )
    goto LABEL_40;
  switch ( v19 )
  {
    case 3:
      goto LABEL_36;
    case 9:
LABEL_19:
      v22 = v20 <= 1u;
      goto LABEL_20;
    case 21:
      v23 = v20 == 1;
      goto LABEL_37;
  }
  if ( v19 != 25 )
  {
    if ( v19 != 50 )
    {
      if ( v19 == 62 )
      {
        v20 -= 3;
        goto LABEL_19;
      }
      if ( (unsigned __int8)(v19 - 65) <= 1u )
        goto LABEL_38;
      if ( v19 != 68 )
      {
        if ( v19 == 76 )
          goto LABEL_38;
        if ( v19 != 85 )
          goto LABEL_40;
      }
LABEL_36:
      v23 = v20 == 0;
LABEL_37:
      if ( v23 )
        goto LABEL_38;
      goto LABEL_40;
    }
    goto LABEL_19;
  }
  v22 = v20 <= 3u;
LABEL_20:
  if ( v22 )
  {
LABEL_38:
    v24 = *(_DWORD *)(a1 + 2316);
    if ( v24 != -1 )
      *(_DWORD *)(a1 + 2316) = v24 + 1;
  }
LABEL_40:
  v25 = *(_DWORD *)(a1 + 2304);
  if ( ((v25 + 1) & 0xFFFFFFFD) != 0 )
  {
    v26 = v25 - 1;
    if ( v26 > 0xA )
    {
      v28 = rand();
      v13 = v36;
      v14 = v37;
      v12 = v34;
      v27 = v28 % v26;
    }
    else
    {
      v27 = v26 - 1;
    }
    if ( v27 < 0xA )
    {
      v29 = 5 * (v27 + 59LL);
      *(_OWORD *)(a1 + 8 * v29) = v13;
      *(_OWORD *)(a1 + 8 * v29 + 16) = v14;
      *(_QWORD *)(a1 + 8 * v29 + 32) = v12;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2320, a1 + 40 * (v17 + 69LL), v8, v9) == 1 )
    {
      ++*(_DWORD *)(a1 + 40LL * v17 + 2792);
      goto LABEL_54;
    }
    memset(v38, 0, sizeof(v38));
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 40 * (v17 + 69LL), v38, v30, v31) == 1 )
      break;
    if ( ++v17 >= 0xAu )
      goto LABEL_54;
  }
  v32 = a1 + 40 * (v17 + 69LL);
  *(_OWORD *)v32 = *(_OWORD *)(a1 + 2320);
  *(_OWORD *)(v32 + 16) = *(_OWORD *)(a1 + 2336);
  *(_QWORD *)(v32 + 32) = *(_QWORD *)(a1 + 2352);
  *(_DWORD *)(a1 + 40LL * v17 + 2792) = 1;
  if ( *(_DWORD *)(a1 + 3272) != 15 || ((*(_BYTE *)v32 - 6) & 0xFD) != 0 )
    StorpTelemetrySendUnitUniqueErrorData(a1);
LABEL_54:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}

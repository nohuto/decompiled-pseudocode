/*
 * XREFs of PopThermalWorker @ 0x140752150
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018C0C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x1402DC45C (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2280 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E23B0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1406DE0B4 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopPrepareIoctl @ 0x140752670 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x14075277C (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407528D0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14075293C (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTracePassiveCooling @ 0x14087466C (PopDiagTracePassiveCooling.c)
 */

void __fastcall PopThermalWorker(__int64 a1)
{
  int v1; // esi
  ULONG_PTR v2; // r12
  __int64 v4; // rbx
  IRP *v5; // r15
  struct _DEVICE_OBJECT *BugCheckParameter4; // r13
  __int64 v7; // r8
  int Status; // eax
  char v9; // bp
  int v10; // r14d
  char v11; // al
  char v12; // dl
  int v13; // r9d
  char v14; // cl
  char v15; // al
  char v16; // cl
  __int64 v17; // rcx
  _QWORD *v18; // r9
  int v19; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v21; // al
  unsigned int v22; // r15d
  char v23; // cl
  unsigned int v24; // r12d
  char v25; // al
  char v26; // al
  char v27; // al
  bool v28; // r15
  char v29; // al
  __int64 v30; // r8
  unsigned int v31; // ecx
  char v32; // al
  int v33; // eax
  int v34; // ecx
  int v35; // r12d
  int v36; // r8d
  char v37; // al
  char v38; // al
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+30h] [rbp-58h]
  bool v45; // [rsp+31h] [rbp-57h] BYREF
  char v46; // [rsp+32h] [rbp-56h]
  int v47; // [rsp+34h] [rbp-54h] BYREF
  __int64 v48; // [rsp+38h] [rbp-50h]
  IRP *v49; // [rsp+40h] [rbp-48h]
  _QWORD v50[2]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  v2 = a1 + 432;
  v44 = 0;
  v46 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v49 = v5;
  v48 = MEMORY[0xFFFFF78000000008];
  v45 = 0;
  v47 = 0;
  PopAcquireRwLockExclusive(a1 + 432);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_69;
  }
  Status = v5->IoStatus.Status;
  v9 = 1;
  v10 = 4;
  if ( Status < 0 )
  {
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_7;
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_7;
    }
    *(_BYTE *)(a1 + 64) = 5;
LABEL_69:
    KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v21 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v4;
    if ( (v21 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v21 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 856),
        (__int64)BugCheckParameter4);
    }
    PopCheckThermalPolicy(a1, v4, &v45, &v47);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
LABEL_7:
        v11 = 0;
        goto LABEL_8;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        goto LABEL_7;
      case 6:
        *(_BYTE *)(a1 + 64) = 10;
        goto LABEL_7;
      case 7:
        *(_BYTE *)(a1 + 228) = 1;
        *(_BYTE *)(a1 + 64) = 8;
        break;
      case 8:
        break;
      case 0xA:
        *(_BYTE *)(a1 + 64) = 7;
        goto LABEL_7;
      default:
        PopInternalAddToDumpFile((__int64)v5, 0xD0u, (__int64)BugCheckParameter4);
        KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v5, (ULONG_PTR)BugCheckParameter4);
    }
    v31 = *(_DWORD *)(a1 + 216);
    v45 = v31 < 0x64;
    v32 = *(_BYTE *)(a1 + 65);
    v47 = 10 * (*(_DWORD *)(a1 + 80) - v31);
    if ( (v32 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v32 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 856),
        (__int64)BugCheckParameter4);
    }
LABEL_33:
    v22 = *(_DWORD *)(a1 + 220);
    v23 = v22;
    v24 = *(unsigned __int8 *)(a1 + 144);
    if ( v22 != *(unsigned __int8 *)(a1 + 69) )
      goto LABEL_34;
    v23 = *(_DWORD *)(a1 + 220);
    if ( v22 >= v24 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
        goto LABEL_34;
      if ( v22 >= v24 )
        goto LABEL_40;
    }
    if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
      goto LABEL_40;
LABEL_34:
    v25 = *(_BYTE *)(a1 + 65);
    *(_BYTE *)(a1 + 70) = v23;
    v44 = 1;
    if ( v22 >= v24 )
      goto LABEL_35;
    if ( (v25 & 4) != 0 )
    {
      if ( v22 >= v24 )
      {
LABEL_35:
        if ( (v25 & 4) != 0 )
        {
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 0LL);
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 1LL);
        }
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v7, 0LL);
      LOBYTE(v30) = 1;
      PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v30, 1LL);
      *(_QWORD *)(a1 + 248) = v4;
    }
    v26 = *(_BYTE *)(a1 + 65);
    if ( v22 < v24 )
      v27 = v26 | 4;
    else
      v27 = v26 & 0xFB;
    *(_BYTE *)(a1 + 65) = v27;
LABEL_40:
    if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
    {
      v28 = v45;
      v29 = *(_BYTE *)(a1 + 65) & 1;
      if ( v45 )
      {
        if ( v29 )
          goto LABEL_43;
      }
      else if ( !v29 )
      {
LABEL_43:
        PopCheckAndHandleThermalConditions(a1);
        v11 = v44;
        v2 = a1 + 432;
        v4 = v48;
        v5 = v49;
        goto LABEL_8;
      }
    }
    else
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_DWORD *)(a1 + 80));
      v33 = *(_DWORD *)(a1 + 216);
      v34 = *(_DWORD *)(a1 + 128);
      v46 = 1;
      *(_DWORD *)(a1 + 84) = v33;
      PopDiagTraceThermalZoneThrottlePerfTrack(v34, 100 - v33, (__int64)BugCheckParameter4);
      v28 = v45;
    }
    v35 = v47;
    LOBYTE(v7) = v28;
    PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, v7, v47, 0);
    v37 = *(_BYTE *)(a1 + 65);
    if ( v28 )
    {
      if ( (v37 & 1) == 0 )
      {
        LOBYTE(v36) = 1;
        PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, v36, v35, 1);
        *(_QWORD *)(a1 + 256) = v48;
      }
    }
    else if ( (v37 & 1) != 0 )
    {
      PopDiagTracePassiveCooling(a1 + 112, (_DWORD)BugCheckParameter4, 0, v35, 1);
      PopDiagTraceThermalZoneThrottleDurationPerfTrack(
        (v48 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
        (__int64)BugCheckParameter4);
    }
    v38 = *(_BYTE *)(a1 + 65);
    if ( v28 )
      v39 = v38 | 1;
    else
      v39 = v38 & 0xFE;
    *(_BYTE *)(a1 + 65) = v39;
    goto LABEL_43;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v11 = 1;
LABEL_8:
  v12 = v46;
  v13 = a1 + 70;
  v14 = v11;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v14 = 1;
  v15 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v12 = 1;
  switch ( v15 )
  {
    case 6:
      goto LABEL_23;
    case 10:
      v10 = 16;
      v13 = a1 + 856;
      v9 = 0;
      v19 = 2703512;
      v1 = 16;
      goto LABEL_25;
    case 7:
LABEL_62:
      v13 = a1 + 204;
      v19 = 2703508;
      *(_DWORD *)(a1 + 204) = 1;
      v9 = 0;
      v1 = 24;
      goto LABEL_24;
  }
  if ( v14 )
  {
    *(_BYTE *)(a1 + 64) = 3;
    v19 = 2719880;
    goto LABEL_25;
  }
  if ( v12 )
  {
    *(_BYTE *)(a1 + 64) = 4;
    v13 = a1 + 84;
    v19 = 2719884;
    goto LABEL_25;
  }
  v16 = PopCoolingMode;
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    v13 = a1 + 68;
    *(_BYTE *)(a1 + 64) = 2;
    *(_BYTE *)(a1 + 68) = v16;
    v19 = 2719876;
    v10 = 1;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_62;
  }
  v17 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v40 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 96) + v40;
      if ( v41 <= v4 )
        *(_DWORD *)(a1 + 112) = 0;
      else
        v17 = v41;
    }
  }
  v18 = 0LL;
  if ( PopThermalPollingMode )
  {
    v42 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v42 )
    {
      v43 = *(_QWORD *)(a1 + 240) + v42;
      if ( v43 <= v4 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v17 = 0LL;
      }
      else if ( !v17 || v17 >= v43 )
      {
        v17 = v43;
      }
    }
    if ( !PopThermalPollingWakesAllowed )
    {
      v18 = v50;
      v50[1] = -1LL;
      v50[0] = 0LL;
    }
  }
  if ( v17 )
    KeSetTimer2(a1 + 296, v4 - v17, 0LL, (__int64)v18);
LABEL_23:
  v1 = 92;
  v13 = a1 + 112;
  v19 = 2703488;
LABEL_24:
  v10 = v1;
LABEL_25:
  LOBYTE(v7) = v9;
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), v19, v7, v13, v10, v1);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v5);
LABEL_26:
  PopReleaseRwLock(v2);
}

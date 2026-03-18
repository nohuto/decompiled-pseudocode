/*
 * XREFs of ACPIThermalLoopEx @ 0x1C0008C54
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0008730 (ACPIThermalDeviceControl.c)
 *     ACPIThermalLoop @ 0x1C0008C3C (ACPIThermalLoop.c)
 *     ACPIThermalEvent @ 0x1C005FAB0 (ACPIThermalEvent.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C005FC30 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalRereadTemperature @ 0x1C005FD04 (ACPIThermalRereadTemperature.c)
 *     ACPIThermalStopZone @ 0x1C005FE38 (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C005FE80 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C0008050 (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C00080F0 (AcpiDiagTraceTemperatureTelemetry.c)
 *     ACPIThermalTMPCallback @ 0x1C00086D0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1C0008C3C (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C00090A0 (ACPIThermalCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x1C00096A8 (ACPISetDeviceWorker.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0009900 (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C000AAA4 (AcpiDiagTraceThermalNotification.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  int v9; // ebp
  KIRQL v10; // r15
  char v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  bool v14; // cl
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // edx
  KIRQL v21; // al
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  bool v31; // cc
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  bool v35; // cc
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // r8d
  bool v39; // cc
  unsigned int v40; // edx
  unsigned int v41; // r8d
  bool v42; // cc
  unsigned int v43; // ecx
  unsigned int v44; // eax
  bool v45; // cc

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v10 = v8;
  *(_DWORD *)(a1 + 192) = v9;
  v11 = 1;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v11 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v4);
          v11 = 1;
        }
        v12 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x40000000) != 0 )
          goto LABEL_21;
        v13 = v12;
        if ( (v12 & 0x10000000) != 0 )
        {
          v14 = 0;
        }
        else
        {
          LODWORD(v13) = v12 | 0x8000000;
          *(_DWORD *)(a1 + 192) = v12 | 0x8000000;
          v14 = (v12 & 0x8000000) == 0;
        }
        if ( v14 )
        {
          ACPISetDeviceWorker(a1, 0x2000LL);
          v13 = *(unsigned int *)(a1 + 192);
        }
        if ( (v13 & 0x8000000) != 0 )
        {
LABEL_21:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          goto LABEL_22;
        }
        if ( (v13 & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x40000010;
          v18 = 17LL;
          goto LABEL_42;
        }
        if ( (v13 & 8) != 0 )
          break;
        *(_DWORD *)(a1 + 192) = v13 | 0x40000008;
        KeReleaseSpinLock(v4, v10);
        v19 = *(unsigned int *)(v3 + 100);
        v20 = 1346589535;
LABEL_44:
        v11 = 0;
        if ( (unsigned int)ACPIGet((__int64 *)a1, v20, 546308096, v19, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
          ACPIThermalLoop(a1, 0x40000000LL);
      }
      v15 = v13;
      if ( (v13 & 2) == 0 || !*(_QWORD *)(v3 + 120) )
        goto LABEL_15;
      v24 = *(_DWORD *)(v3 + 104);
      if ( v24 )
      {
        v25 = *(_DWORD *)(v3 + 108);
        v26 = *(_DWORD *)(v3 + 104);
        v27 = v25;
        if ( v25 > v24 && *(_DWORD *)(v3 + 16) <= v25 - v24 )
        {
          v15 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
          v27 = *(_DWORD *)(v3 + 108);
          v26 = *(_DWORD *)(v3 + 104);
        }
        LODWORD(v13) = v15;
        if ( ~v27 > v26 && *(_DWORD *)(v3 + 16) >= v26 + v27 )
        {
          LODWORD(v13) = v15 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v15 & 0xFFFFFBFF;
        }
      }
      v28 = *(_DWORD *)(v3 + 20);
      v29 = v13;
      if ( v28 )
      {
        v30 = *(_DWORD *)(v3 + 108);
        v31 = v30 <= v28;
        if ( v30 < v28 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v28 )
            goto LABEL_65;
          v31 = v30 <= v28;
        }
        if ( !v31 && *(_DWORD *)(v3 + 16) <= v28 )
        {
LABEL_65:
          v29 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
        }
      }
      v32 = *(_DWORD *)(v3 + 28);
      v33 = v29;
      if ( !v32 )
        goto LABEL_73;
      v34 = *(_DWORD *)(v3 + 108);
      v35 = v34 <= v32;
      if ( v34 < v32 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v32 )
          goto LABEL_72;
        v35 = v34 <= v32;
      }
      if ( !v35 && *(_DWORD *)(v3 + 16) <= v32 )
      {
LABEL_72:
        v33 = v29 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v29 & 0xFFFFFBFF;
      }
LABEL_73:
      v36 = *(_DWORD *)(v3 + 76);
      v37 = v33;
      if ( !v36 )
        goto LABEL_80;
      v38 = *(_DWORD *)(v3 + 108);
      v39 = v38 <= v36;
      if ( v38 < v36 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v36 )
          goto LABEL_79;
        v39 = v38 <= v36;
      }
      if ( !v39 && *(_DWORD *)(v3 + 16) <= v36 )
      {
LABEL_79:
        v37 = v33 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v33 & 0xFFFFFBFF;
      }
LABEL_80:
      v40 = *(_DWORD *)(v3 + 24);
      v15 = v37;
      if ( !v40 )
        goto LABEL_87;
      v41 = *(_DWORD *)(v3 + 108);
      v42 = v41 <= v40;
      if ( v41 < v40 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v40 )
          goto LABEL_86;
        v42 = v41 <= v40;
      }
      if ( !v42 && *(_DWORD *)(v3 + 16) <= v40 )
      {
LABEL_86:
        v15 = v37 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v37 & 0xFFFFFBFF;
      }
LABEL_87:
      v13 = 0LL;
      if ( !*(_BYTE *)(v3 + 32) )
        goto LABEL_97;
      do
      {
        v43 = *(_DWORD *)(v3 + 4 * v13 + 36);
        if ( !v43 )
          goto LABEL_95;
        v44 = *(_DWORD *)(v3 + 108);
        v45 = v44 <= v43;
        if ( v44 < v43 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v43 )
            goto LABEL_94;
          v45 = v44 <= v43;
        }
        if ( !v45 && *(_DWORD *)(v3 + 16) <= v43 )
LABEL_94:
          *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_95:
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *(unsigned __int8 *)(v3 + 32) );
      v15 = *(_DWORD *)(a1 + 192);
LABEL_97:
      if ( (v15 & 0x400) == 0 )
      {
        *(_DWORD *)(a1 + 192) = v15 & 0xBFFFF9FF | 0x40000400;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
        KeReleaseSpinLock(v4, v10);
        v19 = *(unsigned int *)(v3 + 108);
        v20 = 1230259295;
        goto LABEL_44;
      }
LABEL_15:
      if ( (v15 & 4) == 0 )
      {
        v18 = 4LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000004;
        goto LABEL_42;
      }
      if ( (v15 & 1) == 0 )
      {
        v18 = 1LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000001;
        goto LABEL_42;
      }
      if ( (v15 & 0x100) == 0 )
      {
        v18 = 256LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x40000100;
        goto LABEL_42;
      }
      LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
      if ( (v15 & 0x202) == 2 && (_BYTE)v13 )
      {
        v18 = 512LL;
        *(_DWORD *)(a1 + 192) = v15 | 0x44000200;
        goto LABEL_42;
      }
      if ( (v15 & 0x20000002) == 0x20000002 )
        goto LABEL_21;
      if ( *(_BYTE *)(v3 + 273) || (v15 & 2) != 0 )
      {
        if ( (v15 & 0x40) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x40;
          AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          v15 = *(_DWORD *)(a1 + 192);
        }
        if ( (v15 & 0x80u) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x80;
          AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          v15 = *(_DWORD *)(a1 + 192);
        }
        if ( (v15 & 0x800) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x800;
          AcpiDiagTraceTemperatureChange(v3, a1);
          v15 = *(_DWORD *)(a1 + 192);
        }
        if ( (v15 & 0x4000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x4000;
          AcpiDiagTraceTemperatureTelemetry(a1);
          v15 = *(_DWORD *)(a1 + 192);
        }
        if ( (v15 & 0x1000) != 0 )
        {
          if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, v13) )
            goto LABEL_21;
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x1000;
          KeReleaseSpinLock(v4, v10);
          v11 = 0;
          v21 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          v22 = (_QWORD *)qword_1C0081A28;
          v10 = v21;
          v23 = (_QWORD *)(a1 + 208);
          if ( *(__int64 **)qword_1C0081A28 != &AcpiThermalZoneList )
            __fastfail(3u);
          *(_QWORD *)(a1 + 216) = qword_1C0081A28;
          *v23 = &AcpiThermalZoneList;
          *v22 = v23;
          qword_1C0081A28 = a1 + 208;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
        }
      }
      else
      {
        ++*(_DWORD *)v3;
        v16 = *(_DWORD *)(a1 + 192) | 2;
        *(_DWORD *)(a1 + 192) = v16;
        if ( (_BYTE)v13 )
        {
          v18 = 514LL;
          *(_DWORD *)(a1 + 192) = v16 | 0x44000200;
LABEL_42:
          ACPISetDeviceWorker(a1, v18);
        }
        else if ( *(_QWORD *)(v3 + 112) )
        {
          *(_DWORD *)(a1 + 192) = v16 | 0x40000000;
          KeReleaseSpinLock(v4, v10);
          v11 = 0;
          memset((void *)(v3 + 136), 0, 0x28uLL);
          if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1) || *(_DWORD *)(a1 + 500) == 1 )
          {
            v17 = AMLIAsyncEvalObject(*(_QWORD *)(v3 + 112), v3 + 136, 0LL, 0LL, ACPIThermalTMPCallback, a1);
            if ( v17 != 259 )
              goto LABEL_40;
          }
          else
          {
            v17 = -1073741661;
LABEL_40:
            ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v17, v3 + 136, a1);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v16 & 0xEFFFFFFF;
        }
      }
    }
  }
LABEL_22:
  KeReleaseSpinLock(v4, v10);
}

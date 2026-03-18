/*
 * XREFs of ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C018F8F0
 * Callers:
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01821E0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0182B58 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0182CB8 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C0183440 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 * Callees:
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C018FBF8 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 */

void __fastcall DelayZoneTelemetry::UpdateDelayZoneStateInfo(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  DelayZoneTelemetry *v8; // rsi
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // rdi
  int UserHandedness; // eax
  int v13; // eax

  v5 = *(_DWORD *)(a1 + 8);
  v8 = (DelayZoneTelemetry *)a1;
  v9 = v5 % 0xD5;
  if ( a4 == 4 && (a1 = 6LL * (((int)v9 - 1) % 0xD5u), *((_DWORD *)v8 + 12 * (((int)v9 - 1) % 0xD5u) + 524) == 3) )
  {
    v10 = v5 - 1;
    if ( !v5 )
      v10 = 0;
    *((_DWORD *)v8 + 2) = v10;
  }
  else
  {
    v11 = 6 * v9;
    *((_DWORD *)v8 + 12 * v9 + 516) = -1;
    *((_DWORD *)v8 + 2 * v11 + 517) = *a5;
    *((_DWORD *)v8 + 2 * v11 + 518) = a5[1];
    UserHandedness = GetUserHandedness(a1);
    *((_QWORD *)v8 + v11 + 260) = 2LL;
    *((_DWORD *)v8 + 2 * v11 + 519) = UserHandedness;
    v13 = a5[2];
    *((_DWORD *)v8 + 2 * v11 + 523) = 0;
    *((_DWORD *)v8 + 2 * v11 + 525) = v13;
    *((_DWORD *)v8 + 2 * v11 + 526) = a5[3];
    *((_DWORD *)v8 + 2 * v11 + 522) = a2;
    *((_DWORD *)v8 + 2 * v11 + 524) = a4;
    *((_DWORD *)v8 + 2 * v11 + 527) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ++*((_DWORD *)v8 + 2);
    if ( a4 != 3 )
      DelayZoneTelemetry::UploadTelemetryData(v8, 0);
  }
}

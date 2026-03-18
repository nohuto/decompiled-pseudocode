/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C0069B20
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0002AC0 (VidSchWaitForEvents.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0069790 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C0008410 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C0008600 (VidSchiCheckTimeoutForced.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0013C90 (VidSchiNeedToForcePreemptNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C0039C84 (VidSchiReportHwHang.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0069D10 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007A828 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00C65B8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00C6600 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C6ED8 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00C7014 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  LARGE_INTEGER v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 5940) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
        v6 = 10000000 * v5.QuadPart / 0x989680uLL;
      else
        v6 = (unsigned __int64)(10000000 * v5.QuadPart) / PerformanceFrequency.QuadPart;
    }
    else
    {
      v6 = 10000000 * (v5.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
         + 10000000 * (v5.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
    }
    if ( *(_BYTE *)(a1 + 2528) && v6 >= *(_QWORD *)(a1 + 2512) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 2472))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
    v7 = 0LL;
    for ( *a2 = 0; (unsigned int)v7 < *(_DWORD *)(a1 + 68); v7 = (unsigned int)(v7 + 1) )
    {
      v8 = *(__int64 **)(a1 + 616);
      if ( (unsigned int)v7 < *(_DWORD *)(a1 + 688) )
        v8 += v7;
      v9 = *v8;
      v10 = *(_QWORD *)(*v8 + 128);
      if ( v10 && v10 <= v6 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v8) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 716));
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 2864));
          VidSchiSubmitPreemptionCommand(v9);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v9 + 128) = 0LL;
      }
    }
    v11 = 1;
    if ( VidSchiCheckTimeoutForced(a1) )
    {
      VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending(a1) )
    {
      v12 = 0LL;
      if ( *(_DWORD *)(a1 + 68) )
      {
        while ( 1 )
        {
          v13 = *(_QWORD **)(a1 + 616);
          if ( (unsigned int)v12 < *(_DWORD *)(a1 + 688) )
            v13 += v12;
          if ( (unsigned int)VidSchiCheckNodeTimeout(*v13, &v19) )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 68) )
            goto LABEL_18;
        }
        v15 = *(__int64 **)(a1 + 616);
        if ( (unsigned int)v12 < *(_DWORD *)(a1 + 688) )
          v15 += v12;
        v16 = *v15;
        v17 = 0;
        if ( *(_DWORD *)(*v15 + 2016) )
        {
          LOBYTE(v17) = *(_BYTE *)(v16 + 2009) != 0;
          v17 += 10;
        }
        else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v16, &v21)
               || !(unsigned __int8)VidSchiResetEngines(v16, v21) )
        {
          v17 = 9;
        }
        *(_BYTE *)(v16 + 2009) = 0;
        *(_DWORD *)(v16 + 2012) = 0;
        *(_BYTE *)(v16 + 2010) = 0;
        *(_DWORD *)(v16 + 2016) = 0;
        if ( v17 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v19, v17, v16) )
          VidSchResetGPUTimeout(a1);
      }
LABEL_18:
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v19, &v18)
        && !(unsigned int)VidSchiReportHwHang(a1, v19, 3, (__int64)&v18) )
      {
        VidSchResetFlipQueueTimeout(a1);
      }
    }
    if ( VidSchIsTDRPending(a1) )
      return 0;
    return v11;
  }
  else
  {
    *(_BYTE *)(a1 + 2528) = 0;
    return 1LL;
  }
}

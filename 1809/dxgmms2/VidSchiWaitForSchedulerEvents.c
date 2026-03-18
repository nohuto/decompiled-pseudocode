/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C0069790
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiIsFlipQueueBusy @ 0x1C0003900 (VidSchiIsFlipQueueBusy.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0005130 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  PRKEVENT *v2; // r14
  unsigned int v3; // esi
  unsigned int v4; // ebx
  PRKEVENT v5; // rcx
  __int64 v6; // r9
  bool v7; // si
  char IsFlipQueueBusy; // bp
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r11
  unsigned int v12; // r8d
  unsigned int i; // eax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  union _LARGE_INTEGER *Timeout; // r9
  union _LARGE_INTEGER v18; // rax
  ULONG v19; // r10d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  PRKEVENT v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r9
  PRKEVENT v27; // rcx
  _BYTE v28[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER v30; // [rsp+50h] [rbp-78h] BYREF
  PRKEVENT Event[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v32; // [rsp+68h] [rbp-60h]
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF

  Event[0] = (PRKEVENT)(a1 + 1168);
  Event[1] = (PRKEVENT)(a1 + 1112);
  v32 = a1 + 1280;
  while ( 1 )
  {
    v2 = Event;
    v3 = 1;
    v4 = 0;
    if ( VidSchiAcceptsIncomingWork(a1) )
      v3 = 2;
    while ( 1 )
    {
      v5 = *v2;
      *(_QWORD *)&v5[2].Header.Lock = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent(v5) )
        break;
      ++v4;
      ++v2;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v27 = Event[v4];
    v27[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v27);
LABEL_6:
    if ( v4 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v30.QuadPart = 0LL;
          v7 = *(_DWORD *)(a1 + 712) || *(_DWORD *)(a1 + 60);
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( VidSchiAcceptsIncomingWork(a1) )
          {
            v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
              v10 = (unsigned __int64)v9.QuadPart
                  * (unsigned __int128)0x989680uLL
                  / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v10 = 10000000 * (v9.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v9.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v11 = -1LL;
            if ( *(_BYTE *)(a1 + 2528) )
              v11 = *(_QWORD *)(a1 + 2512);
            v12 = *(_DWORD *)(a1 + 68);
            for ( i = 0; i < v12; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 688) )
                v14 = *(__int64 **)(a1 + 616);
              else
                v14 = (__int64 *)(*(_QWORD *)(a1 + 616) + 8LL * i);
              v15 = *v14;
              v16 = *(_QWORD *)(v15 + 128);
              if ( v16 && v11 >= v16 )
                v11 = *(_QWORD *)(v15 + 128);
            }
            if ( (v7 || IsFlipQueueBusy) && v11 >= v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v11 = v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            if ( v11 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 700) = 1;
              v19 = 3;
            }
            else
            {
              *(_BYTE *)(a1 + 700) = 0;
              Timeout = &v30;
              v18.QuadPart = 0LL;
              v19 = 2;
              if ( v11 > v10 )
                v18.QuadPart = v10 - v11;
              v30 = v18;
            }
          }
          else
          {
            Timeout = 0LL;
            v19 = 1;
            *(_BYTE *)(a1 + 700) = 0;
          }
          v20 = MEMORY[0xFFFFF78000000320];
          v21 = 0LL;
          v22 = v19;
          do
          {
            v23 = Event[v21++];
            *(_QWORD *)&v23[1].Header.Lock = v20;
            *(__int64 *)((char *)&v32 + v21 * 8) = (__int64)v23;
            --v22;
          }
          while ( v22 );
          v24 = KeWaitForMultipleObjects(v19, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *(_BYTE *)(a1 + 700) = 0;
          v4 = v24;
        }
        while ( v24 > 1 && v24 != 258 );
        v28[0] = 0;
        if ( v24 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v28) )
          break;
        if ( v28[0] )
        {
          v4 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, v25, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v4 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( !VidSchIsTDRPending(a1) )
    return v4;
  return 258LL;
}

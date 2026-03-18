/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC
 * Callers:
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC90 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     _SetInputServiceState @ 0x1C0129940 (_SetInputServiceState.c)
 * Callees:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0011FBC (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C0079414 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall HandleDeferredInput(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 *i; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  KeyboardInputTelemetry *v9; // rcx
  int v10; // edx
  __int64 *j; // rbx
  int v12; // ecx

  v2 = a1[53];
  result = gpsiLock;
  for ( i = *(__int64 **)(v2 + 24); i; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 25);
    result = (unsigned int)-__CFSHR__(v7, 17);
    if ( __CFSHR__(v7, 17) || (v7 & 0x20000) != 0 )
    {
      v8 = i[13];
      if ( (_QWORD *)v8 == a1 )
      {
        if ( __CFSHR__(v7, 17) )
        {
          *(_DWORD *)(v8 + 1224) &= ~0x10000000u;
          v7 = *((_DWORD *)i + 25);
        }
        *((_DWORD *)i + 25) = v7 & 0xFFF8FFFF | 0x40000;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)i);
        ++*(_DWORD *)(v2 + 40);
        KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
          v9,
          *(_DWORD *)(*a1 + 1616LL),
          ((*((_DWORD *)i + 6) - 257) & 0xFFFFFFFB) == 0);
        if ( a2 == 2 )
        {
          if ( i == *(__int64 **)(v2 + 88) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                v10,
                18,
                12,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                v2,
                *(_QWORD *)(v2 + 88));
            *(_QWORD *)(v2 + 88) = 0LL;
          }
          result = DelQEntry(v2 + 24, i, 1LL);
        }
        else
        {
          if ( a2 == 5 )
            i[4] = 229LL;
          *((_DWORD *)i + 25) |= 0x100000u;
          result = WakeSomeone(v2, a1, *((unsigned int *)i + 6), i);
        }
        for ( j = *(__int64 **)(v2 + 24); j; j = (__int64 *)*j )
        {
          v12 = *((_DWORD *)j + 25);
          result = (unsigned int)-__CFSHR__(v12, 18);
          if ( __CFSHR__(v12, 18) && a2 != 4 && (_QWORD *)j[13] == a1 )
            break;
          if ( (v12 & 0x80000) != 0 || __CFSHR__(v12, 18) )
          {
            result = j[13];
            if ( (_QWORD *)result == a1 || *((_DWORD *)j + 24) == 4 )
            {
              *(_DWORD *)(result + 1224) &= ~0x10000000u;
              *((_DWORD *)j + 25) &= 0xFFF5FFFF;
              ++*(_DWORD *)(v2 + 40);
              *((_DWORD *)j + 25) |= 0x100000u;
              InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)j);
              result = WakeSomeone(v2, a1, *((unsigned int *)j + 6), j);
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

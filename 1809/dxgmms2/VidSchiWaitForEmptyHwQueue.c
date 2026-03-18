/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00C7990
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0012610 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  __int64 i; // rbx
  struct _KEVENT **v3; // rcx
  struct _KEVENT *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 result; // rax
  _DWORD v8[40]; // [rsp+40h] [rbp-A8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 68); i = (unsigned int)(i + 1) )
  {
    v3 = *(struct _KEVENT ***)(a1 + 616);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 688) )
      v3 += i;
    v4 = *v3;
    memset(v8, 0, sizeof(v8));
    v8[4] = 0;
    v8[8] |= 0x40u;
    v8[5] = 1;
    v8[12] = i;
    v4[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v4 + 10);
    while ( 1 )
    {
      result = (unsigned int)v4[119].Header.Lock;
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, v5, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v8, (const GUID *)0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}

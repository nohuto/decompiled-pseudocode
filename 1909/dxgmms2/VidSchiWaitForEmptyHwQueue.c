/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00CA6C4
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0010560 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 */

unsigned __int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 i; // rdi
  struct _KEVENT **v4; // rcx
  struct _KEVENT *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // r9
  _DWORD v8[40]; // [rsp+48h] [rbp-49h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 68); i = (unsigned int)(i + 1) )
  {
    v4 = *(struct _KEVENT ***)(a1 + 616);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 688) )
      v4 += i;
    v5 = *v4;
    memset(v8, 0, sizeof(v8));
    v8[4] = 0;
    v8[8] |= 0x40u;
    v8[5] = 1;
    v8[12] = i;
    v5[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v5 + 10);
    while ( 1 )
    {
      result = (unsigned int)v5[119].Header.Lock;
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v8, (const GUID *)0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, v7, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}

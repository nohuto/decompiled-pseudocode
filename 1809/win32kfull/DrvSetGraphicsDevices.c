/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00EA48C
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvSetGraphicsDevices(char *a1, __int16 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = 0;
    gcRemoteNextGlobalDeviceNumber = 0;
  }
  else
  {
    v2 = 1;
  }
  StringCchCopyW((char *)qword_1C0319B58, (unsigned int)dword_1C0319B60, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, v2);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)(gpGdiSharedMemory + 1573024LL));
  return result;
}

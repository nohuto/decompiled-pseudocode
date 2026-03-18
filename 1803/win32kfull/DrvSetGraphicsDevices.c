/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00BB1C8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00BB750 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D0654 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvSetGraphicsDevices(unsigned __int16 *a1, __int16 a2)
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
  StringCchCopyW(qword_1C032AF18, (unsigned int)dword_1C032AF20, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, v2);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)(gpGdiSharedMemory + 1573024LL));
  return result;
}

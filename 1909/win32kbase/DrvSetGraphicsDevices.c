/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C0005E20
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00063F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(unsigned __int16 *a1, __int16 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  if ( a2 )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
  StringCchCopyW((unsigned __int16 *)qword_1C0212B88, (unsigned int)dword_1C0212B90, a1);
  gcLocalNextGlobalDeviceNumber = 0;
  result = DrvUpdateGraphicsDeviceList(1LL, v2);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}

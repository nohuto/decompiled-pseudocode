/*
 * XREFs of PiControlStartDevice @ 0x14083D320
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     PiQueueDeviceRequest @ 0x14083DA48 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int UserModeCallersCopy; // ebx
  int v7; // r8d
  _WORD v9[4]; // [rsp+30h] [rbp-18h] BYREF
  void *v10; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v9[1] = v4;
  v9[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v10, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((unsigned int)v9, 16, v7, 1, 0LL);
    PiControlFreeUserModeCallersBuffer(a4, v10);
  }
  return (unsigned int)UserModeCallersCopy;
}

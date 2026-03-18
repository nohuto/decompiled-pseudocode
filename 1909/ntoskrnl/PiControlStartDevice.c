/*
 * XREFs of PiControlStartDevice @ 0x140876930
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int UserModeCallersCopy; // ebx
  int v7; // r8d
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v10 = 0;
  v11 = 0LL;
  v9[1] = v4;
  v9[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v11, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((unsigned int)v9, 16, v7, 1, 0LL);
    PiControlFreeUserModeCallersBuffer(a4, v11);
  }
  return (unsigned int)UserModeCallersCopy;
}

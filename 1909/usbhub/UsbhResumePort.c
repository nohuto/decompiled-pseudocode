/*
 * XREFs of UsbhResumePort @ 0x1C000C47C
 * Callers:
 *     UsbhResumeSuspendedPort @ 0x1C000C394 (UsbhResumeSuspendedPort.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhResumePort(int a1, __int64 a2)
{
  int v2; // r9d
  __int16 v5; // r11
  __int64 v6; // r10
  int v7; // eax
  unsigned int v8; // r10d
  int v10; // [rsp+20h] [rbp-18h]
  __int16 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 4);
  v12 = 0LL;
  Log(a1, 4, 1381191024, v2, 0LL);
  WORD2(v12) = *(_WORD *)(a2 + 4);
  v11 = v5;
  LODWORD(v12) = 131363;
  HIWORD(v12) = v5;
  v7 = UsbhSyncSendCommand(a1, (unsigned int)&v12, 0, (unsigned int)&v11, v10, v6);
  Log(a1, 4, 1381191032, *(unsigned __int16 *)(a2 + 4), v7);
  return v8;
}

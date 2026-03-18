/*
 * XREFs of DwmAsyncSnapshotWindow @ 0x1C02594D0
 * Callers:
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncSnapshotWindow(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v8[14]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x34uLL);
    v8[0] = 3407884;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = -2147483640;
    *(_QWORD *)&v8[11] = a2;
    EtwUpdateEvent(0LL, 2147483656LL, v5, v6);
    v4 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v4;
}

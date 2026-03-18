/*
 * XREFs of DwmAsyncSnapshotWindow @ 0x1C024197C
 * Callers:
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncSnapshotWindow(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  _DWORD v6[14]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, 0x34uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = -2147483640;
    *(_QWORD *)&v6[11] = a2;
    EtwUpdateEvent(0LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}

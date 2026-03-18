/*
 * XREFs of PiDrvDbUnloadHive @ 0x1406F07C8
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x1401C3930 (ZwUnloadKeyEx.c)
 */

NTSTATUS __fastcall PiDrvDbUnloadHive(UNICODE_STRING *a1, void *a2, __int64 a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  v4.ObjectName = a1;
  v4.RootDirectory = 0LL;
  *(_QWORD *)&v4.Length = 48LL;
  *(_QWORD *)&v4.Attributes = 576LL;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  if ( a2 )
    return ZwUnloadKeyEx(&v4, a2);
  else
    return ZwUnloadKey2((__int64)&v4, 0LL, a3);
}

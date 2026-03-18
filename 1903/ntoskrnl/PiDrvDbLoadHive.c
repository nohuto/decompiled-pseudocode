/*
 * XREFs of PiDrvDbLoadHive @ 0x1406F0814
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1406F0460 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x1401C2150 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int Key; // ebx
  __int64 v6; // r8
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  __int128 v9; // [rsp+78h] [rbp+27h] BYREF
  __int64 v10; // [rsp+88h] [rbp+37h]
  __int64 v11; // [rsp+90h] [rbp+3Fh]
  __int128 v12; // [rsp+98h] [rbp+47h]

  *a4 = 0LL;
  LODWORD(a3) = a3 | 0x80;
  *(_OWORD *)&ObjectAttributes.Length = 0x30uLL;
  v9 = 0x30uLL;
  ObjectAttributes.ObjectName = a1;
  v10 = a2;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = 576LL;
  v12 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)&v9, a3);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a4, 0x2000000u, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL, v6);
  }
  return (unsigned int)Key;
}

/*
 * XREFs of PiDrvDbLoadHive @ 0x1406837A8
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140680D60 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F0F8 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwLoadKeyEx @ 0x1401BA1F0 (ZwLoadKeyEx.c)
 *     ZwUnloadKey2 @ 0x1401BB9B0 (ZwUnloadKey2.c)
 */

__int64 __fastcall PiDrvDbLoadHive(UNICODE_STRING *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int Key; // ebx
  __int64 v6; // r8
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-9h] BYREF
  int v9; // [rsp+78h] [rbp+27h] BYREF
  __int64 v10; // [rsp+80h] [rbp+2Fh]
  __int64 v11; // [rsp+88h] [rbp+37h]
  int v12; // [rsp+90h] [rbp+3Fh]
  __int128 v13; // [rsp+98h] [rbp+47h]

  *a4 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  LODWORD(a3) = a3 | 0x80;
  v10 = 0LL;
  ObjectAttributes.Length = 48;
  v9 = 48;
  ObjectAttributes.ObjectName = a1;
  v11 = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = 576;
  v13 = 0LL;
  Key = ZwLoadKeyEx((__int64)&ObjectAttributes, (__int64)&v9, a3);
  if ( Key >= 0 )
  {
    Key = ZwOpenKey(a4, 0x2000000u, &ObjectAttributes);
    if ( Key < 0 )
      ZwUnloadKey2((__int64)&ObjectAttributes, 0LL, v6);
  }
  return (unsigned int)Key;
}

/*
 * XREFs of NtUserGetPointerDevice @ 0x1C0215EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C01BBDE8 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01DACDC (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(unsigned __int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v7 = 0;
  if ( !a1 || !a2 )
    goto LABEL_6;
  if ( (unsigned int)FindPointerDevice(a1, &v13, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v13) )
    {
      ProbeForWrite(a2, 0x438uLL, 4u);
      GetPointerDeviceInfoProperties((__int64)a2, v13);
      v7 = 1;
      goto LABEL_7;
    }
LABEL_6:
    UserSetLastError(87LL, v4, v5, v6);
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}

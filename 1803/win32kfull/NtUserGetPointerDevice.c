/*
 * XREFs of NtUserGetPointerDevice @ 0x1C0130930
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C00E0C18 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00E0C34 (_GetPointerDeviceInfoProperties.c)
 *     _FindPointerDevice @ 0x1C00E0E14 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDevice(unsigned __int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v5 = 0;
  if ( !a1 || !a2 )
    goto LABEL_9;
  if ( !(unsigned int)FindPointerDevice(a1, &v12, 0LL) )
    goto LABEL_8;
  if ( !(unsigned int)IsPointerDeviceAccessible(v12) )
  {
LABEL_9:
    UserSetLastError(87LL, v4);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  if ( (int)GetPointerDeviceInfoProperties((__int64)a2, v12) < 0 )
    UserSetLastError(122LL, v6);
  else
    v5 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v5;
}

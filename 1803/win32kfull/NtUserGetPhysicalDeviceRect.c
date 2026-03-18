/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01EF6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _FindPointerDevice @ 0x1C00E0E14 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v12, 0LL) )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *v6 = *v6;
    *a2 = *(_OWORD *)(v12 + 140);
    v4 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}

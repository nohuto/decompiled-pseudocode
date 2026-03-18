/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C0215D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v14, 0LL) )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *v8 = *v8;
    *a2 = *(_OWORD *)(v14 + 140);
    v4 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}

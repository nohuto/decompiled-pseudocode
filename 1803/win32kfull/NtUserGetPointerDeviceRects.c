/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C00E04E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  _OWORD *v8; // rcx
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0uLL;
  v17 = 0uLL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v7 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v16, &v17) )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    *a2 = v16;
    *a3 = v17;
    v7 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v7;
}

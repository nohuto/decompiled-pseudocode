/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C012CE20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _OWORD *v10; // rcx
  _OWORD *v11; // rcx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF

  v15 = 0uLL;
  v16 = 0uLL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v9 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v15, &v16) )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *v11 = *v11;
    *a2 = v15;
    *a3 = v16;
    v9 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6, v7, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}

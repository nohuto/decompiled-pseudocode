/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C015C210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C015C308 (_GetOwnerTransformedMonitorRect.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF

  v17 = 0uLL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = ValidateHmonitor(a2);
    if ( v10 && a4 )
    {
      GetOwnerTransformedMonitorRect(v8, v10, a3, &v17);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v17;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL, v11, v12, v13);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  UserSessionSwitchLeaveCrit(v14);
  return v9;
}

/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C0215FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C01BBDE8 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 *     _GetPointerDeviceCursors @ 0x1C01DAC28 (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(unsigned __int64 a1, _DWORD *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  PointerDeviceCursors = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  if ( !a1 || !a2 )
    goto LABEL_21;
  if ( !(unsigned int)FindPointerDevice(a1, &v18, 0LL) )
  {
    PointerDeviceCursors = 0;
    goto LABEL_22;
  }
  if ( !(unsigned int)IsPointerDeviceAccessible(v18) )
  {
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(87LL, v7, v8, v9);
    goto LABEL_22;
  }
  v10 = *(unsigned int *)(v8 + 972);
  if ( a3 )
  {
    v11 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    if ( *v11 >= (unsigned int)v10 )
    {
      ProbeForWrite(a3, 8 * v10, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v18, v10, (__int64)a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v10;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v10;
      PointerDeviceCursors = 0;
      UserSetLastError(122LL, v7, v8, v9);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v10;
  }
LABEL_22:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return PointerDeviceCursors;
}

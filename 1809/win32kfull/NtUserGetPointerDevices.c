/*
 * XREFs of NtUserGetPointerDevices @ 0x1C0111F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C01BBDE8 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01DACDC (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  struct DEVICEINFO *i; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v17; // rax
  unsigned int v18; // eax
  int v19; // r15d
  struct DEVICEINFO *j; // r14
  __int64 v21; // r8
  CInpPushLock *Lock; // [rsp+48h] [rbp-50h]
  _BYTE v23[72]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  if ( a1 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)i + 60)) )
          ++v5;
      }
    }
    if ( a2 )
    {
      v17 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v17 = (unsigned int *)MmUserProbeAddress;
      v18 = *v17;
      if ( v18 < v5 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
        UserSetLastError(122LL, v9, 0LL, v11);
      }
      else if ( v18 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v19 = v5 - 1;
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j && v19 >= 0; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          if ( (*((_DWORD *)j + 50) & 0x80u) != 0 && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 60)) )
            GetPointerDeviceInfoProperties(&a2[1080 * v19--], v21);
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299LL, v9, 0LL, v11);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL, v6, v7, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v4;
}

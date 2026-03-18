/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C01EFBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct DEVICEINFO *i; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  struct DEVICEINFO *j; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  CInpPushLock *Lock; // [rsp+48h] [rbp-40h]
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( a3 == 16 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v11 = 0;
      if ( *a2 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v13 = 2LL * v11;
          *((_QWORD *)Address + v13) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v13 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v11 >= v6 )
            break;
        }
        v7 = v11;
      }
      else
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL, v10);
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v6;
      v7 = 0;
    }
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v7;
}

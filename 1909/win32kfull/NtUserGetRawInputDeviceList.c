/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C022E690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DEVICEINFO *i; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  struct DEVICEINFO *j; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  CInpPushLock *Lock; // [rsp+48h] [rbp-40h]
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( a3 == 16 )
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpPushLock::LockShared(Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      ++v6;
    if ( Address )
    {
      v15 = 0;
      if ( *a2 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        for ( j = CBaseInput::TmpGetDeviceList(gpHidInput); j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
        {
          v17 = 2LL * v15;
          *((_QWORD *)Address + v17) = *(_QWORD *)j;
          *((_DWORD *)Address + 2 * v17 + 2) = *((unsigned __int8 *)j + 48);
          if ( ++v15 >= v6 )
            break;
        }
        v7 = v15;
      }
      else
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL, v12, v13, v14);
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
    UserSetLastError(87LL, v8, v9, v10);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v18);
  return v7;
}

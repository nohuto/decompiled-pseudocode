/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00E09B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C00E0C18 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00E0C34 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  struct DEVICEINFO *i; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int *v14; // rax
  unsigned int v15; // eax
  int v16; // r15d
  struct DEVICEINFO *DeviceList; // r14
  int PointerDeviceInfoProperties; // r8d
  __int64 v19; // r9
  __int64 v20; // rdx
  CInpPushLock *Lock; // [rsp+48h] [rbp-50h]
  _BYTE v22[72]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
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
      v14 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      v15 = *v14;
      if ( v15 < v5 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
        UserSetLastError(122LL, v7);
      }
      else if ( v15 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v16 = v5 - 1;
        DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
        PointerDeviceInfoProperties = 0;
        while ( DeviceList && v16 >= 0 && PointerDeviceInfoProperties >= 0 )
        {
          if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0
            && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)DeviceList + 60)) )
          {
            PointerDeviceInfoProperties = GetPointerDeviceInfoProperties(&a2[1080 * v16], v19);
            if ( PointerDeviceInfoProperties < 0 )
            {
              UserSetLastError(122LL, v20);
              goto LABEL_12;
            }
            --v16;
          }
          DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (unsigned int *)MmUserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299LL, v7);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
LABEL_12:
    CInpPushLock::UnLockShared(Lock);
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
